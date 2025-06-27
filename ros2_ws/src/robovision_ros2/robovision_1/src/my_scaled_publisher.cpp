#include "rclcpp/rclcpp.hpp"

#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.hpp>
#include <opencv2/opencv.hpp>

class ImagePublisherNode : public rclcpp::Node
{
public:
    ImagePublisherNode(const std::string & image_path) : Node("image_publisher")
    {
        image_publisher_ = this->create_publisher<sensor_msgs::msg::Image>("camera/image", 10);
        scaled_image_publisher_ = this->create_publisher<sensor_msgs::msg::Image>("camera/scaled_image", 10);

        // Load the image from file
        cv::Mat cv_image = cv::imread(image_path, cv::IMREAD_COLOR);
        if (cv_image.empty()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to load image from path: %s", image_path.c_str());
            return;
        }

        //Resize your image
        cv::Mat scaled_image;
        cv::resize(cv_image, scaled_image, cv::Size(), 0.5, 0.5, CV_INTER_AREA);

        //Convert the output data into a ROS message format
        image_msg_ = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", cv_image).toImageMsg();
        scaled_image_msg_ = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", scaled_image).toImageMsg();

        image_timer_ = this->create_wall_timer(std::chrono::milliseconds(30),
                                               std::bind(&ImagePublisherNode::publish_image, this));
        
        RCLCPP_INFO(this->get_logger(), "Starting image_publisher application in cpp...");
    }

private:
    
    sensor_msgs::msg::Image::SharedPtr image_msg_, scaled_image_msg_;

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_publisher_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr scaled_image_publisher_;
    rclcpp::TimerBase::SharedPtr image_timer_;

    void publish_image()
    {
        image_publisher_->publish(*image_msg_);
        scaled_image_publisher_->publish(*scaled_image_msg_);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    if (argc != 2) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Usage: my_publisher <image_path>");
        rclcpp::shutdown();
        return 1;
    }

    std::string image_path = argv[1];

    auto node = std::make_shared<ImagePublisherNode>(image_path);
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}
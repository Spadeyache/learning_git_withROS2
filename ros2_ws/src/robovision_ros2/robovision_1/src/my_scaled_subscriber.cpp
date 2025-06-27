#include "rclcpp/rclcpp.hpp"

#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


class ImageSubscriberNode : public rclcpp::Node
{
public:
    ImageSubscriberNode() : Node("image_subscriber"), is_image_(false)
    {
        //Subscribers
        image_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "camera/image", 10, std::bind(&ImageSubscriberNode::callback_image, this, std::placeholders::_1));
        
        scaled_image_subscriber_ = create_subscription<sensor_msgs::msg::Image>(
            "camera/scaled_image", 10, std::bind(&ImageSubscriberNode::callback_scaled_image, this, std::placeholders::_1));
        //Processing
        image_processing_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(30),
            std::bind(&ImageSubscriberNode::image_processing, this));

        RCLCPP_INFO(this->get_logger(), "Starting image_subscriber application in cpp...");
    }

private:
    
    bool is_image_;
    cv::Mat image_;
    cv::Mat scaled_image_;
    bool is_scaled_image_ = false;

    sensor_msgs::msg::Image::SharedPtr image_msg_;

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_subscriber_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr scaled_image_subscriber_;

    rclcpp::TimerBase::SharedPtr image_processing_timer_;

    void callback_image(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        image_ = cv_bridge::toCvCopy(msg, "bgr8")->image;
        is_image_ = true;
    }
    void callback_scaled_image(const sensor_msgs::msg::Image::SharedPtr msg)
    {

        image_ = cv_bridge::toCvCopy(msg, "bgr8")->image;
        // cv::resize(image_, scaled_image, cv::Size(), 0.5, 0.5, CV_INTER_AREA);
        cv::resize(image_, scaled_image_, cv::Size(), 0.5, 0.5, cv::INTER_AREA);
        is_scaled_image_ = true;
    }

    void image_processing()
    {
        if (is_image_){
            cv::imshow("view", image_);
            cv::waitKey(1);
        }
        if (is_scaled_image_){
            cv::imshow("view", scaled_image_);
            cv::waitKey(1);
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImageSubscriberNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

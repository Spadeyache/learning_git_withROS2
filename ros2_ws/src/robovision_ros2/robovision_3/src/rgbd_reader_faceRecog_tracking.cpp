// this was the best version of the code. its a porject the tracs the face and prints the human face location in 3d space with rgbd camera 


#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"

#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include <sensor_msgs/point_cloud2_iterator.hpp>
#include <iostream>
#include <vector>
#include <exception>

using std::placeholders::_1;
using namespace std;
using namespace cv;

class PointCloudCentroidNode : public rclcpp::Node
{
public:
    PointCloudCentroidNode()
        : Node("point_cloud_centroid"), is_image_(false), is_ptcld_(false), display_(true)
    {
        // Publishers
        centroid_publisher_ = this->create_publisher<geometry_msgs::msg::Pose>("/object_centroid", 10);

        // Subscribers
        rgb_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/camera/rgb/image_raw", 10, std::bind(&PointCloudCentroidNode::callback_rgb_rect, this, _1));

        depth_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/camera/depth_registered/image_raw", 10, std::bind(&PointCloudCentroidNode::callback_depth_rect, this, _1));

        point_cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/camera/depth_registered/points", 10, std::bind(&PointCloudCentroidNode::callback_point_cloud, this, _1));

        // Timers
        processing_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(70), std::bind(&PointCloudCentroidNode::point_cloud_processing, this));

        image_processing_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(70), std::bind(&PointCloudCentroidNode::image_processing, this));

        // Load Haar Cascade for face detection
        String face_cascade_name = "/usr/share/opencv4/haarcascades/haarcascade_frontalface_alt.xml";
        if (!face_cascade.load(face_cascade_name)) {
            RCLCPP_ERROR(this->get_logger(), "Error loading face cascade");
            rclcpp::shutdown();
        }

        RCLCPP_INFO(this->get_logger(), "Point cloud + face detection node started.");
    }

private:
    CascadeClassifier face_cascade;

    bool is_image_;
    bool is_ptcld_;
    bool display_;
    cv::Mat rgb_, depth_, depth_mat_, point_cloud_, image_;

    rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr centroid_publisher_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr rgb_sub_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_sub_;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr point_cloud_sub_;
    rclcpp::TimerBase::SharedPtr processing_timer_;
    rclcpp::TimerBase::SharedPtr image_processing_timer_;

    void callback_rgb_rect(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        try {
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, msg->encoding);
            rgb_ = cv_ptr->image.clone();
            cv::cvtColor(rgb_, rgb_, cv::COLOR_RGB2BGR);

            image_ = rgb_.clone();
            is_image_ = true;
        } catch (const std::exception &e) {
            RCLCPP_ERROR(this->get_logger(), "Error processing RGB image: %s", e.what());
        }
    }

    void callback_depth_rect(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        try {
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, "32FC1");
            depth_ = cv_ptr->image.clone();

            depth_mat_ = cv::Mat(depth_.size(), CV_32F);
            depth_.convertTo(depth_mat_, CV_32F);
            cv::normalize(depth_mat_, depth_, 0, 1, cv::NORM_MINMAX);
        } catch (const std::exception &e) {
            RCLCPP_ERROR(this->get_logger(), "Error processing Depth image: %s", e.what());
        }
    }

    void callback_point_cloud(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        is_ptcld_ = false;
        try {
            if (msg->height > 1) {
                point_cloud_ = cv::Mat(msg->height, msg->width, CV_32FC4);
                const uint8_t *data_ptr = msg->data.data();

                for (size_t i = 0; i < msg->height; ++i) {
                    for (size_t j = 0; j < msg->width; ++j) {
                        const float *point = reinterpret_cast<const float *>(data_ptr + (i * msg->row_step + j * msg->point_step));
                        point_cloud_.at<cv::Vec4f>(i, j) = cv::Vec4f(point[0], point[1], point[2], point[3]);
                    }
                }

                is_ptcld_ = true;
                RCLCPP_INFO_ONCE(this->get_logger(), "Point cloud converted to cv::Mat with size [%d, %d]", msg->height, msg->width);
            } else {
                RCLCPP_WARN(this->get_logger(), "Point cloud is not organized.");
            }
        } catch (const std::exception &e) {
            RCLCPP_ERROR(this->get_logger(), "Error converting point cloud: %s", e.what());
        }
    }

    void point_cloud_processing()
    {
        if (display_) {
            // if (!rgb_.empty()) cv::imshow("RGB Image", rgb_);
            if (!depth_.empty()) cv::imshow("Depth Image", depth_);
            cv::waitKey(1);
        }
    }

    void image_processing()
    {
        if (is_image_) {
            detectAndDisplay(image_);
            is_image_ = false;
        }
    }

    void detectAndDisplay(Mat frame)
    {
        if (!is_ptcld_) return;

        Mat frame_gray;
        cvtColor(frame, frame_gray, COLOR_BGR2GRAY);
        equalizeHist(frame_gray, frame_gray);

        std::vector<Rect> faces;
        face_cascade.detectMultiScale(frame_gray, faces);

        for (size_t i = 0; i < faces.size(); i++) {
            Point center(faces[i].x + faces[i].width / 2,
                         faces[i].y + faces[i].height / 2);

            ellipse(frame, center, Size(faces[i].width / 2, faces[i].height / 2),
                    0, 0, 360, Scalar(255, 0, 255), 4);

            if (center.y < point_cloud_.rows && center.x < point_cloud_.cols) {
                int row_id = center.y;
                int col_id = center.x;
                cv::Vec4f point = point_cloud_.at<cv::Vec4f>(row_id, col_id);
                if (std::isnan(point[0]) || std::isnan(point[1]) || std::isnan(point[2])) {
                    return;  // Skip if any component is NaN
                }


                if (!std::isnan(point[0]) && !std::isnan(point[1]) && !std::isnan(point[2])) {
                    RCLCPP_INFO(this->get_logger(), "Face center 3D coords: x=%.3f y=%.3f z=%.3f",
                                point[0], point[1], point[2]);

                    geometry_msgs::msg::Pose pose;
                    pose.position.x = point[0];
                    pose.position.y = point[1];
                    pose.position.z = point[2];
                    pose.orientation.w = 1.0;
                    centroid_publisher_->publish(pose);
                } else {
                    RCLCPP_WARN(this->get_logger(), "Invalid 3D point at (%d, %d)", center.x, center.y);
                }
            }
        }

        imshow("Face Detection", frame);
        waitKey(1);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PointCloudCentroidNode>();
    rclcpp::spin(node);
    cv::destroyAllWindows();
    rclcpp::shutdown();
    return 0;
}

#include "rclcpp/rclcpp.hpp"

#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


class ImageProcessingNode : public rclcpp::Node
{
public:
    ImageProcessingNode() : Node("image_processing"), is_image_(false)
    {
        counter_ = 0;

        //Subscribers
        image_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "camera/image", 10, std::bind(&ImageProcessingNode::callback_image, this, std::placeholders::_1));
        
        //Processing
        image_processing_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(30),
            std::bind(&ImageProcessingNode::image_processing, this));

        RCLCPP_INFO(this->get_logger(), "Starting image_processing application in cpp...");
    }

private:

    bool is_image_;
    int counter_;
    cv::Mat image_;
    cv::Mat image_gray;

    cv::Mat mask;
    cv::Mat image_filtered;
    sensor_msgs::msg::Image::SharedPtr image_msg_;

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_subscriber_;
    rclcpp::TimerBase::SharedPtr image_processing_timer_;
    
    void callback_image(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        image_ = cv_bridge::toCvCopy(msg, "bgr8")->image;
        is_image_ = true;
    }

//     void image_processing()
// {
//     if (is_image_){
//         if (counter_ == 0) {
//             std::cout << "size: rows: " << image_.rows << 
//                          ", cols: " << image_.cols << 
//                          ", depth: " << image_.channels() << std::endl;
//         }

//         // Draw the counter on the image
//         cv::putText(image_,
//             std::to_string(counter_),
//             cv::Point(25, 25), // Change these values to reposition text
//             cv::FONT_HERSHEY_DUPLEX,
//             1.0,
//             CV_RGB(255, 0, 0), // Blue text
//             2);

//         // Show image
//         cv::imshow("view", image_);
//         cv::waitKey(1);

//         counter_++;
//     }
// }


// void image_processing()
// {
//     if (is_image_) {
//         // Convert to grayscale
//         cv::cvtColor(image_, image_gray, cv::COLOR_BGR2GRAY);
        
//         // binary classification
//         cv::inRange(image_, cv::Scalar(0,0,220), cv::Scalar(240,255,240), mask);
//         image_.copyTo(image_filtered, mask);

//         // Print info about grayscale image only once
//         if (counter_ == 0) {
//             std::cout << "Original image size: rows: " << image_.rows 
//                       << ", cols: " << image_.cols 
//                       << ", channels: " << image_.channels() << std::endl;

//             std::cout << "Grayscale image size: rows: " << image_gray.rows 
//                       << ", cols: " << image_gray.cols 
//                       << ", channels: " << image_gray.channels() << std::endl;

//             int row_id, col_id;
// 	        row_id = image_.rows/2;
// 	        col_id = image_.cols/2;

//                 std::cout << "pixel value in img at row=" << row_id <<
//                              ", col=" << col_id <<
//                              " is: " << image_.at<cv::Vec3b>(row_id,col_id) << std::endl;
//                 std::cout << "pixel value in img_gray at row=" << row_id <<
//                              ", col=" << col_id <<
//                              " is: " << (int)image_gray.at<uchar>(row_id,col_id) << std::endl;
//         }

//         // Draw the counter on the original image
//         cv::putText(image_,
//             std::to_string(counter_),
//             cv::Point(25, 25),
//             cv::FONT_HERSHEY_DUPLEX,
//             1.0,
//             CV_RGB(255, 0, 0),
//             2);

//         // Show both original and grayscale images
//         cv::imshow("Original Image", image_);
//         cv::imshow("Grayscale Image", image_gray);
//         cv::imshow("mask", mask);
//         cv::imshow("image_filtered", image_filtered);
//         cv::waitKey(1);

//         counter_++;
//     }
// }

// manually converting to gray image
void image_processing()
{
    if (!is_image_) return;
    
    // Convert to grayscale
    cv::cvtColor(image_, image_gray, cv::COLOR_BGR2GRAY);

    // Convert to grayscale
    cv::Mat image_gray_2 = cv::Mat::zeros(image_.rows,image_.cols, CV_8UC1);
    for(int i=0; i<image_.rows; i++)
        for(int j=0; j<image_.cols; j++)
        {
            int gray_val = 0.11*image_.at<cv::Vec3b>(i,j)[0] + 0.59*image_.at<cv::Vec3b>(i,j)[1] + 0.3*image_.at<cv::Vec3b>(i,j)[2];
            image_gray_2.at<uchar>(image_.rows-1 - i,image_.cols-1 - j) = (unsigned char)gray_val;
        }

    cv::imshow("Grayscale Image", image_gray);
    cv::imshow("gray_2", image_gray_2);
    cv::waitKey(1);

    counter_++;
}



    
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImageProcessingNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

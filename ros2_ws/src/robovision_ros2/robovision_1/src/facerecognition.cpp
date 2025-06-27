#include "rclcpp/rclcpp.hpp"
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

using std::placeholders::_1;
using namespace std;
using namespace cv;

class ImageSubscriberNode : public rclcpp::Node
{
public:
    ImageSubscriberNode()
        : Node("image_subscriber"), is_image_(false)
    {
        // カスケードファイルの読み込み
        String face_cascade_name = "/usr/share/opencv4/haarcascades/haarcascade_frontalface_alt.xml";
        String eyes_cascade_name = "/usr/share/opencv4/haarcascades/haarcascade_eye_tree_eyeglasses.xml";

        if (!face_cascade.load(face_cascade_name)) {
            RCLCPP_ERROR(this->get_logger(), "Error loading face cascade");
            rclcpp::shutdown();
        }
        if (!eyes_cascade.load(eyes_cascade_name)) {
            RCLCPP_ERROR(this->get_logger(), "Error loading eyes cascade");
            rclcpp::shutdown();
        }

        image_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/camera/rgb/image_raw", 10, std::bind(&ImageSubscriberNode::callback_image, this, _1));

        image_processing_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(30),
            std::bind(&ImageSubscriberNode::image_processing, this));

        RCLCPP_INFO(this->get_logger(), "Started image_subscriber with face detection");
    }

private:
    bool is_image_;
    cv::Mat image_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_subscriber_;
    rclcpp::TimerBase::SharedPtr image_processing_timer_;

    CascadeClassifier face_cascade;
    CascadeClassifier eyes_cascade;

    void callback_image(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        image_ = cv_bridge::toCvCopy(msg, "bgr8")->image;
        is_image_ = true;
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
        Mat frame_gray;
        cvtColor(frame, frame_gray, COLOR_BGR2GRAY);
        equalizeHist(frame_gray, frame_gray);

        std::vector<Rect> faces;
        face_cascade.detectMultiScale(frame_gray, faces);

        for (size_t i = 0; i < faces.size(); i++) {
            Point center(faces[i].x + faces[i].width/2, faces[i].y + faces[i].height/2);
            ellipse(frame, center, Size(faces[i].width/2, faces[i].height/2), 0, 0, 360, Scalar(255, 0, 255), 4);
            
            Mat faceROI = frame_gray(faces[i]);
            std::vector<Rect> eyes;
            eyes_cascade.detectMultiScale(faceROI, eyes);
            for (size_t j = 0; j < eyes.size(); j++) {
                Point eye_center(faces[i].x + eyes[j].x + eyes[j].width/2,
                                 faces[i].y + eyes[j].y + eyes[j].height/2);
                int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);
                circle(frame, eye_center, radius, Scalar(255, 0, 0), 4);
            }
        }

        imshow("Face and Eyes Detection", frame);
        waitKey(1);
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

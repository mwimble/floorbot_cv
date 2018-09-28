#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "floorbot_cv_node");
  //Edge_Detector ic;
  ros::spin();
  return 0;
}
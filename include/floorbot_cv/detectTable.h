#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/image_encodings.h>

class DetectTable {
public:
	DetectTable();

protected:
	// Image transport;
	image_transport::ImageTransport it_;

	// ROS node handle.
	ros::NodeHandle nh_;

	// Image subscriber.
	image_transport::Subscriber image_sub_;


	void imageCb(const sensor_msgs::ImageConstPtr& msg);

};
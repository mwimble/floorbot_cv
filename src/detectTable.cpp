#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "floorbot_cv/detectTable.h"


DetectTable::DetectTable()
	: it_(nh_) {
	// image_sub_ = it_.subscribe("/camera/color/image_raw", 1, &DetectTable::imageCb, this);
}

void DetectTable::imageCb(const sensor_msgs::ImageConstPtr& msg) {
	
}
#include <ros/ros.h>
#include "std_msgs/String.h"

void sub_callback(const std_msgs::String::ConstPtr& msg) {
    ROS_INFO("I got the msg %s",msg->data.c_str()) ;
}


int main(int argc,char **argv) {
    ros::init(argc,argv,"listener") ;

    ros::NodeHandle nh ;

    ROS_INFO(" i am here") ;

    ros::Subscriber sub = nh.subscribe("chatter",10,sub_callback) ;

    ROS_INFO(" i am here") ;
 
    ros::spin() ;

    return 0 ;
}

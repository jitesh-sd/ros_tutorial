#include <ros/ros.h>
#include "std_msgs/String.h"
#include <sstream>

int main(int argc,char **argv) {
    
    ros::init(argc, argv, "talker");    

    ros::NodeHandle nh ;
    ros::Publisher pub = nh.advertise<std_msgs::String>("chatter",10) ;

    ros::Rate loop_rate(10) ;
    
    int count =0 ;
    while(ros::ok()) {
        std_msgs::String msg ;
        msg.data = "hello world" ;

        ROS_INFO("%s", msg.data.c_str()) ;

        pub.publish(msg) ;

        loop_rate.sleep() ;

     
    }


    return 0 ;
}

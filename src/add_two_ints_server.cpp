#include <ros/ros.h>
#include "beginner_tutorials/AddTwoInts.h"

bool add_ints_callback(beginner_tutorials::AddTwoInts::Request &req,beginner_tutorials::AddTwoInts::Response &res) {
    res.sum = req.a + req.b ;
    ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
    ROS_INFO("sending back response %ld",res.sum) ;
    return true ;
}


int main(int argc,char **argv) {
    ros::init(argc,argv,"add_ints_node") ;
    ros::NodeHandle nh ;


    ros::ServiceServer add_int_srv;
    add_int_srv = nh.advertiseService("add_two_ints",add_ints_callback);

    ros::spin();

    return 0;    
}

 
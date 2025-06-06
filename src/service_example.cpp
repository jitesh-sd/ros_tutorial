#include <ros/ros.h>
#include "beginner_tutorials/AddTwoInts.h"

bool add_ints_cb(beginner_tutorials::AddTwoInts::Request &req,beginner_tutorials::AddTwoInts::Response  &resp) {
    resp.sum = req.a + req.b ;
    return true ;
}

int main(int argc,char **argv) {
    ros::init(argc,argv,"service_starter") ;
    ros::NodeHandle nh ;

    ros::ServiceServer add_int_srv = nh.advertiseService("add_two_ints",add_ints_cb) ;
    ros::spin() ;

    return 0 ;
}
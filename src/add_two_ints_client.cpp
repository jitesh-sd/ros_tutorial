#include <ros/ros.h>
#include "beginner_tutorials/AddTwoInts.h"


int main(int argc,char **argv) {
    ros::init(argc,argv,"add_two_int_client_node") ;
    ros::NodeHandle nh ;

    ros::ServiceClient add_two_int_client = nh.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");

    beginner_tutorials::AddTwoInts srv;
    srv.request.a = atoll(argv[1]) ;
    srv.request.b = atoll(argv[2]) ;
    
    if(add_two_int_client.call(srv))
    {
        ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }
    else
   {
       ROS_ERROR("Failed to call service add_two_ints");
       return 1 ;
   }

   return 0 ;

    
}
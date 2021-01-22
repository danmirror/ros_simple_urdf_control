#include <ros/ros.h>
#include <std_msgs/Float64.h>

int main(int argc, char ** argv)
{
     //Initialize and start the node
     ros::init(argc, argv, "mybot");
     ros::NodeHandle nh;
 
     
     ros::Publisher pub = nh.advertise<std_msgs::Float64>("/mybot/leftWheel_effort_controller/command", 1000);
     //Define and create some messages
     std_msgs::Float64 mybot_control;
     mybot_control.data = 2.0;
     
     ros::Rate(200);
     
     while(ros::ok)
     {
           pub.publish(mybot_control);
           ros::spinOnce();               
     }

 }
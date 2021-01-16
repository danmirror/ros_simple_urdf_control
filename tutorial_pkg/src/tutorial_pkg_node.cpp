#include <ros/ros.h>
#include <std_msgs/UInt8.h>


int main(int argc, char **argv)
{
    ros::NodeHandle n;
    ros::Rate loop_rate(50);
    
    ros::Publisher brightness_pub;
    brightness_pub = n.advertise<std_msgs::UInt8>("data" , 1);
    ros::init(argc, argv, "example_node");
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
}
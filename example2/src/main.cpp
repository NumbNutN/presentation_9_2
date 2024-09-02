#include <bits/stdc++.h>
#include <ros/ros.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "example2");
    ros::NodeHandle nh;
    ROS_INFO("Hello from example2");
    return 0;
}
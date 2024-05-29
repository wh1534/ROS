#include "ros/ros.h"
int main(int argc,char *argv[]){
        //初始化ros节点,命名节点名称
        ros::init(argc,argv,"hello_node");
        //输出日志

        ROS_INFO("hello world");

        return 0;
}

# ros_simple_urdf_control

##  launch
> roslaunch mybot_gazebo mybot_world.launch

## control
> rostopic pub /mybot/leftWheel_effort_controller/command std_msgs/Float64 "data: 2.0"

> rosrun turtlesim turtle_teleop_key /turtle1/cmd_vel:=/mybot/cmd_vel  (activated teleop before in mybot.gazebo)


## rosrun control command
#### c++
- source devel/setup.bash
- rosrun mybot_control mybot_control_node

#### python 
- source devel/setup.bash
- cd src/mybot_control/src
- chmod +x mybot_control_node.py 
- rosrun mybot_control mybot_control_node.py


this is a project that was implemented in ros that use the knowgled of kinematics of a robot
to fullfil the adjustment that we need in a certain type of assgimente.
In this files you would see the used of kuka kr3 that was implemented to move some objects in the shape
of cilinders and cube to the determine baskets you can also see the world that was created to make it more realistic
the steps that must be followed to be able to make use is the following one each one in their respective web shells:
1)roslaunch kr3_gazebo kr3_gazebo.launch gripper_2f:=true
2)roslaunch kuka_arm_2f_moveit move_group.launch
3)roslaunch kuka_arm_2f_moveit moveit_rviz.launch

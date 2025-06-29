# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/ros2_openni_ws/src/openni2_camera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ros2_openni_ws/build/openni2_camera

# Utility rule file for openni2_camera__rosidl_generator_type_description.

# Include any custom commands dependencies for this target.
include CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/progress.make

CMakeFiles/openni2_camera__rosidl_generator_type_description: rosidl_generator_type_description/openni2_camera/srv/GetSerial.json

rosidl_generator_type_description/openni2_camera/srv/GetSerial.json: /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description
rosidl_generator_type_description/openni2_camera/srv/GetSerial.json: /opt/ros/jazzy/lib/python3.12/site-packages/rosidl_generator_type_description/__init__.py
rosidl_generator_type_description/openni2_camera/srv/GetSerial.json: rosidl_adapter/openni2_camera/srv/GetSerial.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/ubuntu/ros2_openni_ws/build/openni2_camera/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating type hashes for ROS interfaces"
	/usr/bin/python3 /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description --generator-arguments-file /home/ubuntu/ros2_openni_ws/build/openni2_camera/rosidl_generator_type_description__arguments.json

openni2_camera__rosidl_generator_type_description: CMakeFiles/openni2_camera__rosidl_generator_type_description
openni2_camera__rosidl_generator_type_description: rosidl_generator_type_description/openni2_camera/srv/GetSerial.json
openni2_camera__rosidl_generator_type_description: CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/build.make
.PHONY : openni2_camera__rosidl_generator_type_description

# Rule to build all files generated by this target.
CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/build: openni2_camera__rosidl_generator_type_description
.PHONY : CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/build

CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/cmake_clean.cmake
.PHONY : CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/clean

CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/depend:
	cd /home/ubuntu/ros2_openni_ws/build/openni2_camera && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ros2_openni_ws/src/openni2_camera /home/ubuntu/ros2_openni_ws/src/openni2_camera /home/ubuntu/ros2_openni_ws/build/openni2_camera /home/ubuntu/ros2_openni_ws/build/openni2_camera /home/ubuntu/ros2_openni_ws/build/openni2_camera/CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/openni2_camera__rosidl_generator_type_description.dir/depend


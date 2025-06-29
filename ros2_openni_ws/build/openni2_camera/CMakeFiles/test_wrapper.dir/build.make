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

# Include any dependencies generated for this target.
include CMakeFiles/test_wrapper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_wrapper.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_wrapper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_wrapper.dir/flags.make

CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o: CMakeFiles/test_wrapper.dir/flags.make
CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o: /home/ubuntu/ros2_openni_ws/src/openni2_camera/test/test_wrapper.cpp
CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o: CMakeFiles/test_wrapper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/ros2_openni_ws/build/openni2_camera/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o -MF CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o.d -o CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o -c /home/ubuntu/ros2_openni_ws/src/openni2_camera/test/test_wrapper.cpp

CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_openni_ws/src/openni2_camera/test/test_wrapper.cpp > CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.i

CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_openni_ws/src/openni2_camera/test/test_wrapper.cpp -o CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.s

# Object files for target test_wrapper
test_wrapper_OBJECTS = \
"CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o"

# External object files for target test_wrapper
test_wrapper_EXTERNAL_OBJECTS =

test_wrapper: CMakeFiles/test_wrapper.dir/test/test_wrapper.cpp.o
test_wrapper: CMakeFiles/test_wrapper.dir/build.make
test_wrapper: libopenni2_wrapper.so
test_wrapper: /opt/ros/jazzy/lib/libcamera_info_manager.so
test_wrapper: /opt/ros/jazzy/lib/librclcpp_lifecycle.so
test_wrapper: /opt/ros/jazzy/lib/librcl_lifecycle.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/liblifecycle_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/x86_64-linux-gnu/libimage_transport.so
test_wrapper: /opt/ros/jazzy/lib/libmessage_filters.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libsensor_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstd_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/librclcpp.so
test_wrapper: /opt/ros/jazzy/lib/liblibstatistics_collector.so
test_wrapper: /opt/ros/jazzy/lib/librcl.so
test_wrapper: /opt/ros/jazzy/lib/librmw_implementation.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libtype_description_interfaces__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/librcl_interfaces__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libservice_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/librcl_yaml_param_parser.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/librosgraph_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_typesupport_fastrtps_c.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_typesupport_fastrtps_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libfastcdr.so.2.2.5
test_wrapper: /opt/ros/jazzy/lib/librmw.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_dynamic_typesupport.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_typesupport_introspection_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_typesupport_introspection_c.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_typesupport_cpp.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_generator_py.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/libstatistics_msgs__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_generator_c.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_typesupport_c.so
test_wrapper: /opt/ros/jazzy/lib/librosidl_runtime_c.so
test_wrapper: /opt/ros/jazzy/lib/libtracetools.so
test_wrapper: /opt/ros/jazzy/lib/librcl_logging_interface.so
test_wrapper: /opt/ros/jazzy/lib/libclass_loader.so
test_wrapper: /opt/ros/jazzy/lib/librcpputils.so
test_wrapper: /opt/ros/jazzy/lib/librcutils.so
test_wrapper: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0
test_wrapper: CMakeFiles/test_wrapper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/ros2_openni_ws/build/openni2_camera/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_wrapper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_wrapper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_wrapper.dir/build: test_wrapper
.PHONY : CMakeFiles/test_wrapper.dir/build

CMakeFiles/test_wrapper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_wrapper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_wrapper.dir/clean

CMakeFiles/test_wrapper.dir/depend:
	cd /home/ubuntu/ros2_openni_ws/build/openni2_camera && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ros2_openni_ws/src/openni2_camera /home/ubuntu/ros2_openni_ws/src/openni2_camera /home/ubuntu/ros2_openni_ws/build/openni2_camera /home/ubuntu/ros2_openni_ws/build/openni2_camera /home/ubuntu/ros2_openni_ws/build/openni2_camera/CMakeFiles/test_wrapper.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_wrapper.dir/depend


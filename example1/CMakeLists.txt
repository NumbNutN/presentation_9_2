cmake_minimum_required(VERSION 3.0.2)
project(example1)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES test_pkg
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

add_executable(exec1 src/main.cpp)

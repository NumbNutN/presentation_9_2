cmake_minimum_required(VERSION 3.0.2)
project(example3)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES test_pkg
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

add_executable(exec3 src/main.cpp)

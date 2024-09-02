cmake_minimum_required(VERSION 3.0.2)
project(example2)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES test_pkg
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(exec2 src/main.cpp)

target_link_libraries(exec2
  ${catkin_LIBRARIES}
)

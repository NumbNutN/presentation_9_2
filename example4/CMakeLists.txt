cmake_minimum_required(VERSION 3.0.2)
project(example4)

# add debug flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES test_pkg
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

add_executable(exec4 src/main.cpp)

target_link_libraries(exec4 
    dw)

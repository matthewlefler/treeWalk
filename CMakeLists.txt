# complier and compiler options
set(CMAKE_C_COMPILER gcc)

cmake_minimum_required(VERSION 3.10)

project(TreeWalk CXX)

# regular specific compile/link command arguments
set(COMPILE_FLAGS "-std=c++17 -O3")
set(LINK_FLAGS "-lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi")

# main executable
add_executable(main src/main.cpp)

set_target_properties(main PROPERTIES COMPILE_FLAGS ${COMPILE_FLAGS})
set_target_properties(main PROPERTIES LINK_FLAGS ${LINK_FLAGS})
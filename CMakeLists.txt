cmake_minimum_required(VERSION 3.25)
project(TreeWalk C CXX) # CXX required for the tracy profiler

# Set C standard to C23
set(CMAKE_C_STANDARD 23)

# Compile flags for warnings and debugging
add_compile_options(-g -Wall -Wextra)
add_link_options(-fsanitize=address)

# Define the executable target
add_executable(tree_main)

# for profiling
# profiling library
add_library(tracy-profiler STATIC
    ${CMAKE_SOURCE_DIR}/include/TracyClient/TracyClient.cpp
)
target_compile_definitions(tracy-profiler
    PUBLIC TRACY_ENABLE
)
# add profiling to main target
target_compile_definitions(tree_main PRIVATE
    TRACY_ENABLE
)

# source files
target_sources(tree_main PRIVATE
    ${CMAKE_SOURCE_DIR}/src/main.c

    ${CMAKE_SOURCE_DIR}/src/utilities/logger/logger.c

    ${CMAKE_SOURCE_DIR}/src/trees/branch.c
    ${CMAKE_SOURCE_DIR}/src/trees/display.c
    ${CMAKE_SOURCE_DIR}/src/trees/leaf.c
    ${CMAKE_SOURCE_DIR}/src/trees/meristem.c
    ${CMAKE_SOURCE_DIR}/src/trees/tree_settings.c
    ${CMAKE_SOURCE_DIR}/src/trees/tree.c

    ${CMAKE_SOURCE_DIR}/src/raytracing/aabb.c
    ${CMAKE_SOURCE_DIR}/src/raytracing/bvh.c
    ${CMAKE_SOURCE_DIR}/src/raytracing/display.c

    ${CMAKE_SOURCE_DIR}/src/random/xoshiro256.c

    ${CMAKE_SOURCE_DIR}/src/cJSON/cJSON.c
)

# Find System Dependencies
find_package(glfw3 REQUIRED)
find_package(raylib REQUIRED)

# Include directories
target_include_directories(tree_main PRIVATE 
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/include/cglm/include
)

# Link libraries
target_link_libraries(tree_main PRIVATE 
    raylib
    glfw
    m
    tracy-profiler
)

# Set output directory matching your old 'build' setup
set_target_properties(tree_main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    OUTPUT_NAME "main"
)

cmake_minimum_required(VERSION 3.25)
project(VulkanRenderer C)

# Set C standard to C23
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Compile flags for warnings and debugging
add_compile_options(-g -Wall -Wextra)

# Define the executable target
add_executable(vulkan_main)

# List out your source files explicitly (Modern CMake Best Practice)
# This perfectly mimics your old Makefile wildcards
target_sources(vulkan_main PRIVATE
    # Core framework
    src/main.c
    
    # Nested modules (add paths to your actual files)
    # Hint: You can use file(GLOB_RECURSE SRCS "src/*.c" "cglm/src/*.c") 
    # if you strongly prefer automated discovery over explicit lists!
)

# Find System Dependencies
find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

# Include directories (replaces your old -I paths)
target_include_directories(vulkan_main PRIVATE 
    src
    cglm/include
)

# Link libraries (replaces your -L and -l flags, including math library -lm)
target_link_libraries(vulkan_main PRIVATE 
    Vulkan::Vulkan 
    glfw
    m
)

# Set output directory matching your old 'build' setup
set_target_properties(vulkan_main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    OUTPUT_NAME "main"
)
#ifndef RENDER_H
#define RENDER_H

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include "../cglm/include/cglm/cglm.h"

typedef struct Window {
    int width;
    int height;
    GLFWwindow* window_ptr;
    char* name
} Window;

typedef struct Renderer {
    VkInstance* vk_instance;
    
} Renderer

int create_window(int width, int height, Window* window);

int vulkan_renderer_init(Renderer* renderer);

int vulkan_renderer_run(Window* window);

int vulkan_renderer_cleanup(Window* window);

#endif
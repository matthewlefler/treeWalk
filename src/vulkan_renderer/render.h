#ifndef RENDER_H
#define RENDER_H

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include "../cglm/include/cglm/cglm.h"

#include "window.h"

typedef struct Renderer {
    Window window;
    VkInstance vk_instance;
    VkDebugUtilsMessengerEXT debug_messenger;

    VkPhysicalDevice physical_device;
} Renderer;


VkResult vulkan_renderer_init(Renderer* renderer);

VkResult vulkan_renderer_run(Renderer* renderer);

VkResult vulkan_renderer_cleanup(Renderer* renderer);

#endif
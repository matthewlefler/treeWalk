#ifndef RENDER_C
#define RENDER_C

#define GLFW_INCLUDE_VULKAN

#include <string.h>

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include "../cglm/include/cglm/cglm.h"

#include "window.h"
#include "extensions.h"
#include "layers.h"

#include "render.h"

VkResult vulkan_create_instance(Renderer* renderer) {
    VkApplicationInfo app_info = {
        .pApplicationName   = renderer->window.name,
        .applicationVersion = VK_MAKE_VERSION( 1, 0, 0 ),
        .pEngineName        = "No Engine. yet.",
        .engineVersion      = VK_MAKE_VERSION( 1, 0, 0 ),
        .apiVersion         = VK_API_VERSION_1_4,
        .sType              = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pNext              = NULL
    };

    uint32_t instance_extensions_count;
    const char **instance_extensions;
    get_required_instance_extensions(&instance_extensions_count, &instance_extensions);
    
    VkResult result;
    if((result = check_instance_extensions(instance_extensions_count, instance_extensions)) != VK_SUCCESS) {
        return result;
    }

    uint32_t instance_layers_count;
    const char **instance_layers;
    get_required_instance_layers(&instance_layers_count, &instance_layers);
    
    if((result = check_instance_layers(instance_layers_count, instance_layers)) != VK_SUCCESS) {
        return result;
    }

    VkInstanceCreateInfo create_info = {
        .pApplicationInfo        = &app_info,
        .enabledExtensionCount   = instance_extensions_count,
        .ppEnabledExtensionNames = instance_extensions,
        .enabledLayerCount       = instance_layers_count,
        .ppEnabledLayerNames     = instance_layers,
        .flags                   = 0,
        .sType                   = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pNext                   = NULL,
    };

    printf("required extensions:\n");
    for(uint32_t i = 0; i < create_info.enabledExtensionCount; ++i) {
        printf("\t- %s\n", create_info.ppEnabledExtensionNames[i]);
    }
    printf("required layers:\n");
    for(uint32_t i = 0; i < create_info.enabledLayerCount; ++i) {
        printf("\t- %s\n", create_info.ppEnabledLayerNames[i]);
    }

    return vkCreateInstance(&create_info, NULL, &renderer->vk_instance);
}

VkResult vulkan_renderer_init(Renderer* renderer) {
    window_create(600, 800, &renderer->window, "TreeWalk");

    vulkan_create_instance(renderer);
}

VkResult vulkan_renderer_run(Renderer* renderer) {
    while (!glfwWindowShouldClose(renderer->window.window_ptr)) {
        glfwPollEvents();
    }

    return VK_SUCCESS;
}

VkResult vulkan_renderer_cleanup(Renderer* renderer) {
    window_cleanup(&renderer->window);

    vkDestroyInstance(renderer->vk_instance, NULL);

    return VK_SUCCESS;
}

#endif
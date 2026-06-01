#ifndef RENDER_C
#define RENDER_C

#define GLFW_INCLUDE_VULKAN

#include <string.h>

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include "../cglm/include/cglm/cglm.h"

#include "render.h"

#ifndef NDEBUG
constexpr bool enable_validation_layers=true;
#else
constexpr bool enable_validation_layers=false;
#endif

char* validation_layers = [
    "VK_LAYER_KHRONOS_validation"
];

int create_window(int width, int height, Window* window, char* name) {
    if(glfwInit() == GLFW_FALSE) {
        return 0;
    }

    // window hints
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // don't create the opengl context
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // make window not able to be re-sized

    window->width = width;
    window->height = height;
    window->window_ptr = glfwCreateWindow(width, height, "Vulkan", NULL, NULL);

    return 1;
}

VkResult get_instance_extensions(VkExtensionProperties** extensions, uint32_t* extension_count) {

    // Get the number of available instance extensions
    vkEnumerateInstanceExtensionProperties(NULL, extension_count, NULL);
    
    // Allocate the memory block
    *extensions = malloc(extension_count * sizeof(VkExtensionProperties));
    
    // Retrieve the extension details
    return vkEnumerateInstanceExtensionProperties(NULL, extension_count, *extensions)
}

int vulkan_renderer_init(Renderer* renderer, Window* window) {
    VkApplicationInfo app_info = {
        .pApplicationName   = window->name,
        .applicationVersion = VK_MAKE_VERSION( 1, 0, 0 ),
        .pEngineName        = "No Engine. yet.",
        .engineVersion      = VK_MAKE_VERSION( 1, 0, 0 ),
        .apiVersion         = vk::ApiVersion14,
        .sType              = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pNext              = NULL
    };

    uint32_t glfw_extensions_count = 0;
    char** glfw_extensions = glfwGetRequiredInstanceExtensions(&glfw_extensions_count);

    uint32_t instance_extensions_count = 0;
    VkExtensionProperties* instance_extensions;

    get_instance_extensions(&instance_extensions, &instance_extensions_count);

    for(uint32_t i = 0; i < glfw_extensions_count; ++i) {
        char* glfw_extension_name = glfw_extensions[i];
        bool found = false;

        for(uint32_t j = 0; j < instance_extensions_count; ++j) {
            VkExtensionProperties instance_extension = instance_extensions[j];

            if(strcmp(glfw_extension_name, instance_extension.extensionName) == 0) {
                found = true;
            }
        }

        if(found == false) {
            printf("could not find required extension: %s\n", glfw_extension_name);
            return 0;
        }
    }

    VkInstanceCreateInfo create_info = {
        .pApplicationInfo        = &app_info,
        .enabledExtensionCount   = glfw_extensions_count,
        .ppEnabledExtensionNames = glfw_extensions,
        .sType                   = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pNext                   = NULL
    }

    vkCreateInstance(&create_info, NULL, renderer->vk_instance);
}

int vulkan_renderer_run(Window* window) {
    while (!glfwWindowShouldClose(window->window_ptr)) {
        glfwPollEvents();
    }
}

int vulkan_renderer_cleanup(Window* window) {
    glfwDestroyWindow(window->window_ptr);
    window->window_ptr = NULL;

    glfwTerminate();
}

#endif
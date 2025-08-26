#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


// std libs
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <optional>

#include "renderer.hpp"
namespace Renderer {

    void VulkanApplication::run() {
        VulkanApplication::initWindow();
        VulkanApplication::initVulkan();
        VulkanApplication::mainLoop();
        VulkanApplication::cleanup();
    }

    void VulkanApplication::initWindow() {
        glfwInit();

        // give hints to GLFW to not create an OpenGL context and not allow the window to be resizable
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        VulkanApplication::window = glfwCreateWindow(VulkanApplication::WINDOW_WIDTH, VulkanApplication::WINDOW_HEIGHT, "Vulkan", nullptr, nullptr);
    }

    void VulkanApplication::initVulkan() {
        VulkanApplication::createInstance();
        VulkanApplication::pickPhysicalDevice();
    }

    void VulkanApplication::createInstance() {
        if (enableValidationLayers && !checkValidationLayerSupport()) {
            throw std::runtime_error("validation layers requested, but not available!");
        }

        // create the application information
        // name, version and such
        VkApplicationInfo appInfo{};
        appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
        appInfo.pApplicationName = "Hello Triangle";
        appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
        appInfo.pEngineName = "No Engine";
        appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
        appInfo.apiVersion = VK_API_VERSION_1_0;

        VkInstanceCreateInfo createInfo{};
        createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        createInfo.pApplicationInfo = &appInfo;
        
        // add the validation layers 
        if (enableValidationLayers) {
            createInfo.enabledLayerCount = static_cast<uint32_t>(validationLayers.size());
            createInfo.ppEnabledLayerNames = validationLayers.data();
        } else {
            createInfo.enabledLayerCount = 0;
        }
        

        uint32_t glfwExtensionCount = 0;
        const char** glfwExtensions;

        glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

        createInfo.enabledExtensionCount = glfwExtensionCount;
        createInfo.ppEnabledExtensionNames = glfwExtensions;
        createInfo.enabledLayerCount = 0;

        if (vkCreateInstance(&createInfo, nullptr, &(VulkanApplication::instance)) != VK_SUCCESS) {
            throw std::runtime_error("failed to create instance!");
        }
    }

    void VulkanApplication::pickPhysicalDevice() {
        uint32_t deviceCount = 0;
        vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);

        if (deviceCount == 0) {
            throw std::runtime_error("failed to find GPUs with Vulkan support!");
        }

        // get all devices in a list
        std::vector<VkPhysicalDevice> devices(deviceCount);
        vkEnumeratePhysicalDevices(instance, &deviceCount, devices.data());

        // check every device
        for (const auto& device : devices) {
            if (isDeviceSuitable(device)) {
                physicalDevice = device;
                break;
            }
        }
        
        // if no device is suitable 
        if (physicalDevice == VK_NULL_HANDLE) {
            throw std::runtime_error("failed to find a suitable GPU!");
        }
    }

    bool VulkanApplication::isDeviceSuitable(VkPhysicalDevice device) {
        VkPhysicalDeviceProperties deviceProperties;
        VkPhysicalDeviceFeatures deviceFeatures;
        vkGetPhysicalDeviceProperties(device, &deviceProperties);
        vkGetPhysicalDeviceFeatures(device, &deviceFeatures);

        QueueFamilyIndices indices = findQueueFamilies(device);
        
        // does the device support: 
        // - geometry shaders
        // - graphic queue
        return deviceFeatures.geometryShader
            && indices.isComplete();
    }

    QueueFamilyIndices VulkanApplication::findQueueFamilies(VkPhysicalDevice device) {
        QueueFamilyIndices indices;
        
        uint32_t queueFamilyCount = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, nullptr);
        
        std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
        vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, queueFamilies.data());

        int i = 0;
        for (const auto& queueFamily : queueFamilies) {
            if (queueFamily.queueFlags & VK_QUEUE_GRAPHICS_BIT) {
                indices.graphicsFamily = i;
            }
            
            // no need to look further if the queue families required are already found
            if (indices.isComplete()) {
                break;
            }

            i++;
        }

        return indices;
    }
    

    void VulkanApplication::mainLoop() {
        while (!glfwWindowShouldClose(VulkanApplication::window)) {
            glfwPollEvents();
        }
    }

    void VulkanApplication::cleanup() {
        vkDestroyInstance(instance, nullptr);

        glfwDestroyWindow(VulkanApplication::window);
    
        glfwTerminate();
    }

    bool VulkanApplication::checkValidationLayerSupport() {
        uint32_t layerCount;
        vkEnumerateInstanceLayerProperties(&layerCount, nullptr);
    
        std::vector<VkLayerProperties> availableLayers(layerCount);
        vkEnumerateInstanceLayerProperties(&layerCount, availableLayers.data());
    
        for (const char* layerName : validationLayers) {
            bool layerFound = false;
        
            for (const auto& layerProperties : availableLayers) {
                if (strcmp(layerName, layerProperties.layerName) == 0) {
                    layerFound = true;
                    break;
                }
            }
        
            if (!layerFound) {
                return false;
            }
        }
        
        return true;
    }
    

} // namespace Renderer

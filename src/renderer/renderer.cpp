#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


// std libs
#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "renderer.hpp"
namespace Renderer {

    void HelloTriangleApplication::run() {
        HelloTriangleApplication::initWindow();
        HelloTriangleApplication::initVulkan();
        HelloTriangleApplication::mainLoop();
        HelloTriangleApplication::cleanup();
    }

    void HelloTriangleApplication::initWindow() {
        glfwInit();

        // give hints to GLFW to not create an OpenGL context and not allow the window to be resizable
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        HelloTriangleApplication::window = glfwCreateWindow(HelloTriangleApplication::WINDOW_WIDTH, HelloTriangleApplication::WINDOW_HEIGHT, "Vulkan", nullptr, nullptr);
    }

    void HelloTriangleApplication::initVulkan() {
        HelloTriangleApplication::createInstance();
    }

    void HelloTriangleApplication::createInstance() {
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

        uint32_t glfwExtensionCount = 0;
        const char** glfwExtensions;

        glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

        createInfo.enabledExtensionCount = glfwExtensionCount;
        createInfo.ppEnabledExtensionNames = glfwExtensions;
        createInfo.enabledLayerCount = 0;

        if (vkCreateInstance(&createInfo, nullptr, &(HelloTriangleApplication::instance)) != VK_SUCCESS) {
            throw std::runtime_error("failed to create instance!");
        }
    }

    void HelloTriangleApplication::mainLoop() {
        while (!glfwWindowShouldClose(HelloTriangleApplication::window)) {
            glfwPollEvents();
        }
    }

    void HelloTriangleApplication::cleanup() {
        vkDestroyInstance(instance, nullptr);

        glfwDestroyWindow(HelloTriangleApplication::window);
    
        glfwTerminate();
    }

} // namespace Renderer

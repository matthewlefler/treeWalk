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

    void HelloTriangleApplication::mainLoop() {
        while (!glfwWindowShouldClose(HelloTriangleApplication::window)) {
            glfwPollEvents();
        }
    }

    void HelloTriangleApplication::cleanup() {
        glfwDestroyWindow(HelloTriangleApplication::window);
    
        glfwTerminate();
    }

    
    int main() {
        HelloTriangleApplication app;

        try {
            app.run();
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
    }

} // namespace Renderer

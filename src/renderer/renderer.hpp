#include <GLFW/glfw3.h>
#include <vector>

#pragma once

namespace Renderer {
    
    class HelloTriangleApplication {
    public:
        void run();
    
    private:
        const uint32_t WINDOW_WIDTH = 800;
        const uint32_t WINDOW_HEIGHT = 600;

        const std::vector<const char*> validationLayers = {
            "VK_LAYER_KHRONOS_validation"
        };

        #ifdef NDEBUG
            const bool enableValidationLayers = false;
        #else
            const bool enableValidationLayers = true;
        #endif

        GLFWwindow* window;

        VkInstance instance;

        /**
         * initialyze the glfw context and create the window
         */
        void initWindow();

        /**
         * initlalyze the vulkan context
         */
        void initVulkan(); 

        /**
         * create vulkan instance
         */
        void createInstance();

        void mainLoop();  
        
        /**
         * deallocate the vulkan context and allocated memeory
         */
        void cleanup();        
    };

} // namespace Renderer


#include <GLFW/glfw3.h>
#include <vector>
#include <cstring>
#include <optional>

#pragma once

namespace Renderer {
    struct QueueFamilyIndices {
        std::optional<uint32_t> graphicsFamily;

        bool isComplete() {
            return graphicsFamily.has_value();
        }
    };
    
    class VulkanApplication {
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

        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;

        //
        // main functions
        //

        /**
         * initialyze the glfw context and create the window
         */
        void initWindow();

        /**
         * initalyze the vulkan context
         */
        void initVulkan(); 

        /**
         * create vulkan instance
         */
        void createInstance();

        /**
         * picks the best physical device to use for rendering 
         */
        void pickPhysicalDevice();

        /**
         * is a graphics device suitable for usage 
         */
        bool VulkanApplication::isDeviceSuitable(VkPhysicalDevice device);
        
        /**
         * find the different supported queues for a device
         * each queue has different commands allowed to be executed 
         */
        QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

        /**
         * This is the main loop of the renderer
         */
        void mainLoop();  
        
        /**
         * deallocate the vulkan context and allocated memeory
         */
        void cleanup();  
        
        //
        // debug functions
        //

        /**
         * returns true if the debug layers exist
         */
        bool checkValidationLayerSupport();
        
    };

} // namespace Renderer


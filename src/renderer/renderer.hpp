#include <GLFW/glfw3.h>
#include <vector>
#include <cstring>
#include <optional>

#pragma once

namespace Renderer {
    struct QueueFamilyIndices {
        std::optional<uint32_t> graphicsFamily;
        std::optional<uint32_t> presentFamily;

        bool isComplete() {
            return graphicsFamily.has_value() && presentFamily.has_value();
        }
    };

    struct SwapChainSupportDetails {
        VkSurfaceCapabilitiesKHR capabilities;
        std::vector<VkSurfaceFormatKHR> formats;
        std::vector<VkPresentModeKHR> presentModes;
    };
    
    class VulkanApplication {
    public:
        void run();
    
    private:
        const int MAX_FRAMES_IN_FLIGHT = 2;

        const uint32_t WINDOW_WIDTH = 800;
        const uint32_t WINDOW_HEIGHT = 600;

        const std::vector<const char*> deviceExtensions = {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME
        };

        #ifdef NDEBUG
            const bool enableValidationLayers = false;
        #else
            const bool enableValidationLayers = true;
        #endif

        const std::vector<const char*> validationLayers = {
            "VK_LAYER_KHRONOS_validation"
        };

        GLFWwindow* window;

        VkInstance instance;

        VkSurfaceKHR surface;

        /**
         * the real hardware rendering device 
         */
        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;

        /**
         * the interface "logical" device to use to interact with the physical device
         */
        VkDevice device;

        //
        // swap chain
        //

        /**
         * the swap chain, used for presenting images to the window
         * see: https://vulkan-tutorial.com/en/Drawing_a_triangle/Presentation/Swap_chain
         */
        VkSwapchainKHR swapChain;

        /**
         * the images stored in the swap chain
         */
        std::vector<VkImage> swapChainImages;

        /**
         * the array of image views defining how to manipulate the images 
         * see: https://vulkan-tutorial.com/en/Drawing_a_triangle/Presentation/Image_views
         */
        std::vector<VkImageView> swapChainImageViews;

        /**
         * container of the framebuffers that contain the frames to write to
         * @see https://vulkan-tutorial.com/Drawing_a_triangle/Drawing/Framebuffers
         */
        std::vector<VkFramebuffer> swapChainFramebuffers;
        
        /**
         * the color format of the swap chain VkImages
         */
        VkFormat swapChainImageFormat;

        /**
         * the size of the swap chain images
         */
        VkExtent2D swapChainExtent;


        //
        // queues
        //

        /**
         * graphical queue used for rendering
         */
        VkQueue graphicsQueue;

        /**
         * present queue used for presenting the rendered images to a window
         */
        VkQueue presentQueue;

        //
        // graphics pipeline
        //

        VkPipeline graphicsPipeline;

        VkRenderPass renderPass;
        
        VkPipelineLayout pipelineLayout;

        //
        // commands
        //

        VkCommandPool commandPool;

        VkCommandBuffer commandBuffer;

        //
        // sync objects
        // 
        
        VkSemaphore imageAvailableSemaphore;
        VkSemaphore renderFinishedSemaphore;
        VkFence inFlightFence;

        ////////////////////
        // main functions //
        ////////////////////

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
         * creates and inits the window surface to present images to
         */
        void createSurface();        

        /**
         * picks the best physical device to use for rendering 
         */
        void pickPhysicalDevice();

        /**
         * is a graphics device suitable for usage 
         */
        bool isDeviceSuitable(VkPhysicalDevice device);        

        /**
         * does a device have the proper extenstion support
         */
        bool checkDeviceExtensionSupport(VkPhysicalDevice device);
        
        /**
         * find the different supported queues for a device
         * each queue has different commands allowed to be executed 
         */
        QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

        //////////////////
        /// swap chain ///
        //////////////////

        /**
         * make sure the swap chain supports the required modules
         */
        SwapChainSupportDetails querySwapChainSupport(VkPhysicalDevice device);

        /**
         * chooses the best avaliable surface format for the swap chain
         */
        VkSurfaceFormatKHR chooseSwapSurfaceFormat(const std::vector<VkSurfaceFormatKHR>& availableFormats);

        /**
         * chooses the best present mode, the way of buffering/sending frames, for the swap chain
         */
        VkPresentModeKHR chooseSwapPresentMode(const std::vector<VkPresentModeKHR>& availablePresentModes);

        /**
         * gets the resolution of the images to display
         */
        VkExtent2D chooseSwapExtent(const VkSurfaceCapabilitiesKHR& capabilities);

        /**
         * creates the swap chain using the above related functions' information
         */
        void createSwapChain();

        /**
         * sets up the logical device based on the choosen physical device
         */
        void createLogicalDevice();

        /**
         * creates the image views in the swapChainImageViews variable
         */
        void createImageViews();

        /**
         * create the frame buffers in swapChainFramebuffers
         */
        void createFramebuffers();

        //////////////
        // commands //
        //////////////

        void createCommandPool();

        void createCommandBuffer();

        void recordCommandBuffer(VkCommandBuffer commandBuffer, uint32_t imageIndex);


        ///////////////////////
        // graphics pipeline //
        ///////////////////////

        /**
         * an object containing information about color, depth buffers, samples and how to handle the contents of the framebuffer
         * see: https://vulkan-tutorial.com/en/Drawing_a_triangle/Graphics_pipeline_basics/Render_passes
         */
        void createRenderPass();

        /**
         * creates the graphics pipeline, duh
         */
        void createGraphicsPipeline();

        /**
         * This is the main loop of the renderer
         */
        void mainLoop();  

        /**
         * creates the sycronization objects required
         * for the drawFrame() function
         */
        void createSyncObjects();

        /**
         * This is the main draw call
         */
        void drawFrame();
        
        /**
         * deallocate the vulkan context and allocated memeory
         */
        void cleanup();
        
        //////////////////////
        // debug functions ///
        //////////////////////

        /**
         * returns true if the debug layers exist
         */
        bool checkValidationLayerSupport();
        
    };

} // namespace Renderer


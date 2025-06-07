#include <GLFW/glfw3.h>

#pragma once

namespace Renderer {
    
    class HelloTriangleApplication {
    public:
        void run();
    
    private:
        const uint32_t WINDOW_WIDTH = 800;
        const uint32_t WINDOW_HEIGHT = 600;

        GLFWwindow* window;

        /**
         * initialyze the glfw context and create the window
         */
        void initWindow();

        /**
         * initlalyze the vulkan context
         */
        void initVulkan(); 

        void mainLoop();  
        
        /**
         * deallocate the vulkan context and allocated memeory
         */
        void cleanup();        
    };    

    int main();

} // namespace Renderer


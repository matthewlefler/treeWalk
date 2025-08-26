#include <iostream>

#include "renderer/renderer.cpp"

int main() {
    Renderer::VulkanApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}


/**
 * tree structure
 * branch =
 * node -> node -> ... -> node -> "leaf" node
 * 
 * weight + gravity
 * wind
 * light
 * 
 * seasons aka growth cycles aka one per "tick"
 * water flow
 * @see https://www.thegrove3d.com/learn/grow/
 * @see https://www.thegrove3d.com/learn/ 
 * 
 * 
 * DIRECTION
 * @see https://www.thegrove3d.com/learn/turn/
 * gravitropism (towards up direction)
 * phototropism (towards light)
 * plagiotropism (horizontal when shaded)
 * random (towards random direction)
 * 
 * AMOUNT
 * @see https://www.thegrove3d.com/learn/grow/
 * # of nodes per distance amt.
 */
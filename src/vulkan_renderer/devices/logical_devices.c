#include "logical_devices.h"

VkResult create_logical_device(Renderer* renderer) {
    if(renderer->physical_device == NULL) {
        return VK_ERROR_INITIALIZATION_FAILED;
    }
}
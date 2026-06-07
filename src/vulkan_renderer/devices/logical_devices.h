#ifndef LOGICAL_DEVICES_H
#define LOGICAL_DEVICES_H

#include <vulkan/vulkan.h>

#include "../render.h"

VkResult create_logical_device(Renderer* renderer);

#endif
#include "../../utilities/logger/logger.h"

#include "devices.h"

#include "physical_devices.h"
#include "logical_devices.h"

VkResult device_get(VkInstance instance, uint32_t (*score_func)(VkPhysicalDevice), uint32_t queue_flags_count, VkQueueFlagBits* queue_flags, Device* out_device) {
    if(instance == NULL) {
        log_message(LOG_LEVEL_ERROR, "renderer->vk_instance is null");
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    Device device;

    uint32_t physical_devices_count = 0;
    vkEnumeratePhysicalDevices(instance, &physical_devices_count, NULL);
    VkPhysicalDevice* physical_devices = malloc(sizeof(VkPhysicalDevice) * physical_devices_count);
    vkEnumeratePhysicalDevices(instance, &physical_devices_count, physical_devices);

    uint32_t max_score = 0;
    VkPhysicalDevice current_best_physical_device;
    VkPhysicalDeviceProperties2 current_best_physical_device_properties;
    uint32_t* current_best_physical_device_queue_indices = NULL;

    for(uint32_t i = 0; i < physical_devices_count; ++i) {
        VkPhysicalDevice physical_device = physical_devices[i];

        VkPhysicalDeviceProperties2 physical_device_properties = {
            .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,
            .pNext = NULL
        };
        vkGetPhysicalDeviceProperties2(physical_device, &physical_device_properties);

        uint32_t score = score_func(physical_device);

        uint32_t* queue_indices = physical_device_queue_families_supports(physical_device, queue_flags_count, queue_flags, physical_device_properties.properties.deviceName);

        if(score > max_score && queue_indices != NULL) {
            max_score = score;

            current_best_physical_device = physical_device;
            current_best_physical_device_properties = physical_device_properties;
            current_best_physical_device_queue_indices = queue_indices;
        } else {
            free(queue_indices);
        }
    }

    device.physical_device = current_best_physical_device;
    device.physical_device_properties = current_best_physical_device_properties;

    create_logical_device(current_best_physical_device, queue_flags_count, queue_flags, current_best_physical_device_queue_indices, &device.logical_device);

    free(current_best_physical_device_queue_indices);

    *out_device = device;

    return VK_SUCCESS;
}
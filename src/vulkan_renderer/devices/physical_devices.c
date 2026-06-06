#include "../../utilities/logger/logger.h"

#include "physical_devices.h"

VkResult physical_device_get_sutable(Renderer* renderer) {
    // get physical devices
    uint32_t physical_device_count;
    vkEnumeratePhysicalDevices(renderer->vk_instance, &physical_device_count, NULL);

    VkPhysicalDevice* physical_devices = malloc(sizeof(VkPhysicalDevice) * physical_device_count);
    vkEnumeratePhysicalDevices(renderer->vk_instance, &physical_device_count, physical_devices);

    int max_score = 0;
    int score = 0;
    VkPhysicalDevice best_device;
    for(uint32_t i = 0; i < physical_device_count; ++i) {
        VkPhysicalDevice device = physical_devices[i];
        
        VkPhysicalDeviceProperties physical_device_properties;
        VkPhysicalDeviceFeatures physical_device_features;
        
        vkGetPhysicalDeviceProperties(device, &physical_device_properties);
        vkGetPhysicalDeviceFeatures(device, &physical_device_features);
        
        score = 0;
        if(physical_device_properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) {
            score += 1000;
        }

        if(
            physical_device_properties.apiVersion < VK_API_VERSION_1_4 ||
            physical_device_features.geometryShader == VK_FALSE
        ) {
            score = -1; // does not meet base requirements
        }

        if(score > max_score) {
            max_score = score;
            best_device = device;
        }
    }

    if(score > 0) {
        renderer->physical_device = best_device;

        VkPhysicalDeviceProperties physical_device_properties;
        vkGetPhysicalDeviceProperties(best_device, &physical_device_properties);
        log_message(LOG_LEVEL_INFO, "picked physical device: %s", physical_device_properties.deviceName);

        return VK_SUCCESS;
    }

    log_message(LOG_LEVEL_ERROR, "unable to find device");
    return VK_ERROR_UNKNOWN;
}
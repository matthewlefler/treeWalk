#include <string.h>

#include "../../utilities/logger/logger.h"

#include "physical_devices.h"

int physical_device_queue_families_supports(VkPhysicalDevice device, VkQueueFlagBits flags, const char* device_name) {
    uint32_t queue_family_properties_count;
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queue_family_properties_count, NULL);

    VkQueueFamilyProperties* queue_family_properties = malloc(sizeof(VkQueueFamilyProperties) * queue_family_properties_count);
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queue_family_properties_count, queue_family_properties);
    
    int support = 0;
    for(uint32_t i = 0; i < queue_family_properties_count; ++i) {
        VkQueueFamilyProperties queue_family_property = queue_family_properties[i];

        if(queue_family_properties->queueFlags & flags == flags) {
            support = 1;
        }
    }

    if(!support) {
        log_message(LOG_LEVEL_DEBUG, "%s does not support %d", device_name, flags);
    }

    free(queue_family_properties);
    return support;
}

bool physical_device_extensions_supports(VkPhysicalDevice device, const char* device_extension_name, const char* device_name) {
    uint32_t device_extension_properties_count;
    vkEnumerateDeviceExtensionProperties(device, NULL, &device_extension_properties_count, NULL);
    VkExtensionProperties* device_extension_properties = malloc(sizeof(VkExtensionProperties) * device_extension_properties_count);
    vkEnumerateDeviceExtensionProperties(device, NULL, &device_extension_properties_count, device_extension_properties);

    for(uint32_t i = 0; i < device_extension_properties_count; ++i) {
        VkExtensionProperties device_extension_property = device_extension_properties[i];

        if(strcmp(device_extension_property.extensionName, device_extension_name) == 0) {
            
            free(device_extension_properties);
            return true;
        }
    }
    
    log_message(LOG_LEVEL_DEBUG, "%s does not support %s", device_name, device_extension_name);
    free(device_extension_properties);
    return false;
}

VkBool32 physical_device_feature_supports(VkPhysicalDevice device, const char* device_name) {
    VkPhysicalDeviceDynamicRenderingFeatures supports_dynamic_rendering;
    supports_dynamic_rendering.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;

    VkPhysicalDeviceVulkan11Features supports_vulkan_11;
    supports_vulkan_11.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;

    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT supports_extended_dynamic_state;
    supports_extended_dynamic_state.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;


    VkPhysicalDeviceFeatures2 device_features_2;
    device_features_2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
    
    device_features_2.pNext = &supports_dynamic_rendering;
    supports_dynamic_rendering.pNext = &supports_vulkan_11;
    supports_vulkan_11.pNext = &supports_extended_dynamic_state;
    supports_extended_dynamic_state.pNext = NULL;

    vkGetPhysicalDeviceFeatures2(device, &device_features_2);
    
    if(!device_features_2.features.geometryShader) {
        log_message(LOG_LEVEL_DEBUG, "%s does not support geometryShaders", device_name);
    }
    if(!supports_dynamic_rendering.dynamicRendering) {
        log_message(LOG_LEVEL_DEBUG, "%s does not support dynamicRendering", device_name);
    }
    if(!supports_vulkan_11.shaderDrawParameters) {
        log_message(LOG_LEVEL_DEBUG, "%s does not support shaderDrawParameters", device_name);
    }
    if(!supports_extended_dynamic_state.extendedDynamicState) {
        log_message(LOG_LEVEL_DEBUG, "%s does not support extendedDynamicState", device_name);
    }

    return \
        supports_dynamic_rendering.dynamicRendering && 
        supports_vulkan_11.shaderDrawParameters && 
        supports_extended_dynamic_state.extendedDynamicState;
}

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

        const char* device_name = physical_device_properties.deviceName;

        score = 0b001;
        if(physical_device_properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) {
            score += 0b100;
        }

        if( // device does NOT support the following
            physical_device_properties.apiVersion < VK_API_VERSION_1_4 ||
            physical_device_feature_supports(device, device_name) == VK_FALSE ||
            !physical_device_queue_families_supports(device, VK_QUEUE_GRAPHICS_BIT, device_name) ||
            !physical_device_extensions_supports(device, VK_KHR_SWAPCHAIN_EXTENSION_NAME, device_name)
        ) {
            score = -1; // disregard it
        }

        log_message(LOG_LEVEL_DEBUG, "device: %s, score: %d", device_name, score);

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
    return VK_ERROR_INITIALIZATION_FAILED;
}
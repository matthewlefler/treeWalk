#include <string.h>

#include "../../utilities/logger/logger.h"

#include "physical_devices.h"

/**
 * checks for the required queues families on a device, 
 * and returns the array of indices of the queues families requested
 * 
 * @param device The device to check for queue families on
 * @param flags_count The length of the queue family flags array
 * @param flags The array of queue family flags
 * @param device_name The name of the device, for debugging purposes
 * 
 * @return `NULL` if any requested flag is unsupported, otherwise the array of indices of the queue families
 */
uint32_t* physical_device_queue_families_supports(VkPhysicalDevice device, uint32_t flags_count, VkQueueFlagBits* flags, const char* device_name) {
    uint32_t queue_family_properties_count;
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queue_family_properties_count, NULL);

    VkQueueFamilyProperties* queue_family_properties = malloc(sizeof(VkQueueFamilyProperties) * queue_family_properties_count);
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queue_family_properties_count, queue_family_properties);

    uint32_t* queue_indices = malloc(sizeof(uint32_t) * flags_count);

    for(uint32_t i = 0; i < flags_count; ++i) {
        VkQueueFlagBits flag = flags[i];

        int support = 0;
        for(uint32_t j = 0; j < queue_family_properties_count; ++j) {
            VkQueueFamilyProperties queue_family_property = queue_family_properties[j];
    
            if(queue_family_properties->queueFlags & flag == flag) {
                support = 1;
                queue_indices[i] = j;
            }
        }
    
        if(!support) {
            char* flags_string = to_string_VkQueueFlagBits(flags);
            log_message(LOG_LEVEL_DEBUG, "%s does not support %s", device_name, flags_string);
            free(flags_string);

            free(queue_family_properties);
            free(queue_indices);
            return NULL;
        }
    }

    free(queue_family_properties);
    return queue_indices;
}

VkBool32 physical_device_supports_features(VkPhysicalDevice physical_device, VkPhysicalDeviceFeatures2* device_feature_requirements) {
    VkPhysicalDeviceFeatures2 quieried;

    VkStructureType* current_struct = device_feature_requirements;
    void** pNext = &device_feature_requirements->pNext;
    while(*pNext != NULL) {
        current_struct = (VkStructureType*) pNext;
        switch (current_struct) {           

            
            default:
                log_message(LOG_LEVEL_ERROR, "in function \"physical_device_supports_features\" structure not supported");
                return VK_FALSE;
                break;
        }
    }

    vkGetPhysicalDeviceFeatures2(physical_device, quieried);

    VkStructureType* current_struct = device_feature_requirements;
    void* pNext = NULL;
    do {
        

        pNext = (void*) (current_struct + 1);
    } while (pNext != NULL);
}

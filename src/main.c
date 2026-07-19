#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stdlib.h>

#include <vulkan/vk_enum_string_helper.h>
#include <vulkan/vulkan.h>

#include "trees/tree.h"
#include "trees/display.h"

#include "vulkan_renderer/render.h"
#include "vulkan_renderer/log_utilities.h"

#include "utilities/logger/logger.h"

uint32_t score_physical_device(VkPhysicalDevice device) {
    VkPhysicalDeviceDynamicRenderingFeatures dynamic_rendering;
    dynamic_rendering.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;

    VkPhysicalDeviceVulkan11Features vulkan_11;
    vulkan_11.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;

    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT extended_dynamic_state;
    extended_dynamic_state.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;

    VkPhysicalDeviceFeatures2 device_features_2;
    device_features_2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
    
    // chain of features to grab
    device_features_2.pNext = &dynamic_rendering;
    dynamic_rendering.pNext = &vulkan_11;
    vulkan_11.pNext = &extended_dynamic_state;
    extended_dynamic_state.pNext = NULL;

    vkGetPhysicalDeviceFeatures2(device, &device_features_2);

    VkPhysicalDeviceProperties2 device_properties_2 = {
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,
        .pNext = NULL
    };

    vkGetPhysicalDeviceProperties2(device, &device_properties_2);

    char* device_name = device_properties_2.properties.deviceName;

    // required support (minimum to function)
    if (!(
        physical_device_require_log(device_properties_2.properties.apiVersion >= VK_API_VERSION_1_4, "api version 1.4", device_name) &&
        physical_device_require_log(device_features_2.features.geometryShader,   "geometryShader",       device_name) &&
        physical_device_require_log(dynamic_rendering.dynamicRendering,          "dynamicRendering",     device_name) &&
        physical_device_require_log(vulkan_11.shaderDrawParameters,              "shaderDrawParameters", device_name) && 
        physical_device_require_log(extended_dynamic_state.extendedDynamicState, "extendedDynamicState", device_name)
    )) {
        return -1;
    }

    return 1 + \
        (device_properties_2.properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) * 0b100;
}



int main(int argc, char** argv)
{
    set_log_level(LOG_LEVEL_VERBOSE);

    // load_settings("data/trees/");    
    // Tree tree = new_tree_from_name("test", 0x1ABC123115812754);

    // size_t num = 5;
    // Tree trees[num];
    // for(size_t i = 0; i < num; ++i) {
    //     trees[i] = copy_tree(&tree);
    //     trees[i].transform.translation.x = i * i;
    //     update_tree(&tree);

    //     printf("gen tree iter: %d\n", i);

    //     printf("\tleaf list len: %d\n", trees[i].leaves_len);
    //     for(size_t j = 0; j < trees[i].meristems_len; ++j) {
    //         Meristem l1 = trees[i].meristems[j];
    //         for(size_t k = 0; k < trees[i].meristems_len; ++k) {
    //             if(k == j) {continue;}
    //             Meristem l2 = trees[i].meristems[k];
    //             if(
    //                 l1.transform.translation.x == l2.transform.translation.x &&
    //                 l1.transform.translation.y == l2.transform.translation.y &&
    //                 l1.transform.translation.z == l2.transform.translation.z &&
    //                 l1.transform.rotation.x == l2.transform.rotation.x &&
    //                 l1.transform.rotation.y == l2.transform.rotation.y &&
    //                 l1.transform.rotation.z == l2.transform.rotation.z &&
    //                 l1.transform.rotation.w == l2.transform.rotation.w
    //             ) {
    //                 printf("found duplicate meristem %d, and %d\n", j, k);
    //             }
    //         }
    //     }
    //     fflush(stdout);
    // }
    VkResult result;

    // requirements
        VkPhysicalDeviceDynamicRenderingFeatures dynamic_rendering = {
            .dynamicRendering = VK_TRUE,
            .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES,
        };

        VkPhysicalDeviceVulkan11Features vulkan_11 = {
            .shaderDrawParameters = VK_TRUE,
            .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES,
        };

        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT extended_dynamic_state = {
            .extendedDynamicState = VK_TRUE,
            .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT,
        };

        VkPhysicalDeviceFeatures2 device_features_2 = {
            .features.geometryShader = VK_TRUE,
            .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,
        };
        
        // chain of features to grab
        device_features_2.pNext = &dynamic_rendering;
        dynamic_rendering.pNext = &vulkan_11;
        vulkan_11.pNext = &extended_dynamic_state;
        extended_dynamic_state.pNext = NULL;


    Renderer renderer;
    result = vulkan_renderer_init(&renderer, &score_physical_device);
    log_message(LOG_LEVEL_DEBUG, "init result: %s", string_VkResult(result));

    result = vulkan_renderer_run(&renderer);
    log_message(LOG_LEVEL_DEBUG, "run result: %s", string_VkResult(result));

    result = vulkan_renderer_cleanup(&renderer);
    log_message(LOG_LEVEL_DEBUG, "cleanup result: %s", string_VkResult(result));

    return EXIT_SUCCESS;
}

#endif
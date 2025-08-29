#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <fstream>
#include <vector>

#include "shader_loader.hpp"

namespace Renderer
{
    static std::vector<char> readFile(const std::string& filename) {
        // read file in binary and start at the end of the file
        std::ifstream file(filename, std::ios::ate | std::ios::binary);
    
        if (!file.is_open()) {
            throw std::runtime_error("failed to open file!");
        }

        // get the file size, why we start at the end of the file
        size_t fileSize = (size_t) file.tellg();
        std::vector<char> buffer(fileSize);

        // return to start of file
        file.seekg(0);
        // and read it into the buffer
        file.read(buffer.data(), fileSize);

        file.close();

        return buffer;
    }

    VkShaderModule createShaderModule(const std::vector<char>& code, const VkDevice device) {
        VkShaderModuleCreateInfo createInfo{};
        createInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        createInfo.codeSize = code.size();
        createInfo.pCode = reinterpret_cast<const uint32_t*>(code.data());

        VkShaderModule shaderModule;
        if (vkCreateShaderModule(device, &createInfo, nullptr, &shaderModule) != VK_SUCCESS) {
            throw std::runtime_error("failed to create shader module!");
        }

        return shaderModule;
    }
    
} // namespace renderer
#include <fstream>
#include <vector>

#pragma once

namespace Renderer
{
    static std::vector<char> readFile(const std::string& filename);

    VkShaderModule createShaderModule(const std::vector<char>& code);
} // namespace renderer

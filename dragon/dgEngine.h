#pragma once

#include <string>
#include <vector>

#ifdef _cplusplus
#include <vulkan/vulkan.hpp>
extern "C" {
#endif
#include <vulkan/vulkan.h>
#ifndef GLFW_INCLUDE_NONE
    #define GLFW_INCLUDE_NONE
#endif
#include <glfw/glfw3.h>

struct dgEngine {
    // Vulkan Create Variables
    static VkInstance vkInstance;

    // Variables that may be unnecessarry in a production environment 
    #ifndef DRAGON_FULL_POWER
        static std::vector<const char*> requestedValidationLayers = {
            "VK_LAYER_KHRONOS_validation"
        };
        static uint32_t layerCount;
        static std::vector<VkLayerProperties> availibleLayers;
        static std::vector<const char*> availibleLayerNames;
    #endif

    // App Specific Variables
    static std::string appName;
}

#ifdef _cplusplus
}
#endif
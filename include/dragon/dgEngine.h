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

#include <dragon/dg_backend.h>
#include <dragon/graphics/DgWindowCreateParams.h>

struct dgEngine {
    // Vulkan Create Variables
    static VkInstance vkInstance;
    static VkApplicationInfo appInfo{};
    static VkInstanceCreateInfo createInfo{};

    // GLFW Variables
    static uint32_t glfwExtensionCount = 0;
    static uint32_t extensionCount = 0;
    static const char** glfwExtensions;
    static std::vector<GLFWwindow*> windows;

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

    // System Variables
    static std::vector<GPU*> gpus;
};

DGAPI DG_BOOL dgCreateNewWindow(DgWindowCreateParams params);

#ifdef _cplusplus
}
#endif

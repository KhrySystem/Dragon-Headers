#pragma once

#include <string>
#include <vector>

#include <dragon/dg_backend.hpp>
#include <dragon/graphics/DgWindowCreateParams.hpp>

struct dgEngine {
    // Vulkan Create Variables
    static VkInstance vkInstance;
    static VkApplicationInfo appInfo;
    static VkInstanceCreateInfo createInfo;

    // GLFW Variables
    static uint32_t glfwExtensionCount;
    static uint32_t extensionCount;
    static const char** glfwExtensions;
    static std::vector<GLFWwindow*> windows;

    // Variables that may be unnecessarry in a production environment 
    #ifndef DRAGON_FULL_POWER
        static const inline std::vector<const char*> requestedValidationLayers = {
            "VK_LAYER_KHRONOS_validation"
        };
        static uint32_t layerCount;
        static std::vector<VkLayerProperties> availibleLayers;
        static std::vector<const char*> availibleLayerNames;
    #endif

    // App Specific Variables
    static std::string appName;

    // System Variables
    //static std::vector<GPU*> gpus;
};

DGAPI DG_BOOL dgCreateNewWindow(DgWindowCreateParams params);

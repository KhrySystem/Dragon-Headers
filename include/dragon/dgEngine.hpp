#pragma once

#include <string>
#include <vector>

#include <dragon/dg_backend.hpp>
#include <dragon/graphics/DgWindowCreateParams.hpp>

typedef struct dgEngine_T {
    // Vulkan Create Variables
    static VkInstance vkInstance;
    static VkApplicationInfo appInfo;
    static VkInstanceCreateInfo createInfo;

    // GLFW Variables
    static uint32_t glfwExtensionCount;
    static uint32_t extensionCount;
    static std::vector<const char*> extensions;
    static std::vector<VkExtensionProperties> supportedExtensions;
    static std::vector<GLFWwindow*> windows;

    // Variables that may be unnecessarry in a production environment 
    #ifndef DRAGON_FULL_POWER
        static std::vector<const char*> requestedValidationLayers;
        static uint32_t layerCount;
        static std::vector<VkLayerProperties> availableLayers;
        static std::vector<const char*> availibleLayerNames;
        static VkDebugUtilsMessengerEXT debugMessenger;
        static VkDebugUtilsMessengerCreateInfoEXT debugMessengerCreateInfo;
    #endif

    // App Specific Variables
    static std::string appName;

    // System Variables
    //static std::vector<GPU*> gpus;
} dgEngine;

DGAPI DG_BOOL dgCreateNewWindow(DgWindowCreateParams params);
DGAPI DG_BOOL dgShouldWindowClose(int index);
DGAPI void dgUpdate();
DGAPI void dgCloseWindow(int index);



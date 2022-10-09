#pragma once

#include <string>
#include <vector>

#include <dragon/graphics/DgWindowCreateParams.hpp>
#include <dragon/dg_backend.hpp>
#include <dragon/GPU.hpp>

typedef struct dgEngine {
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

    // App Specific Variables
    static std::string appName;

    // System Variables
    static uint32_t gpuCount;
    static std::vector<GPU> gpus;
} dgEngine;

DGAPI DG_BOOL dgCreateNewWindow(DgWindowCreateParams params);
DGAPI DG_BOOL dgShouldWindowClose(int index);
DGAPI void dgUpdate();
DGAPI void dgCloseWindow(int index);



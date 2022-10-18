#pragma once

#include <string>
#include <vector>

#include <dragon/graphics/DgWindowCreateParams.hpp>
#include <dragon/dg_backend.hpp>
#include <dragon/GPU.hpp>

namespace Dragon {
    typedef struct engine {
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
    } engine;

    DGAPI DgBool32 createNewWindow(Dragon::WindowCreateParams params);
    DGAPI DgBool32 shouldWindowClose(int index);
    DGAPI void update();
    DGAPI void closeWindow(int index);
};





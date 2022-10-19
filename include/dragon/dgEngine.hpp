#pragma once

#include <string>
#include <vector>

#include "graphics/DgWindowCreateParams.hpp"
#include "dg_backend.hpp"
#include "GPU.hpp"

namespace Dragon {
    typedef struct Engine {
        // Vulkan Create Variables
        static VkInstance vkInstance;
        static VkApplicationInfo appInfo;
        static VkInstanceCreateInfo createInfo;

        // GLFW Variables
        static uint32_t extensionCount;
        static std::vector<const char*> extensions;
        static std::vector<VkExtensionProperties> supportedExtensions;
        static std::vector<GLFWwindow*> windows;

        // OpenAL Variables
        static ALCdevice* activeDevice;
        static ALCcontext alcContext;

        // App Specific Variables
        static std::string appName;

        // System Variables
        static uint32_t gpuCount;
        static std::vector<GPU> gpus;
    } Engine;

    DGAPI DgBool32 createNewWindow(Dragon::WindowCreateParams params);
    DGAPI DgBool32 shouldWindowClose(int index);
    DGAPI void update();
    DGAPI void closeWindow(int index);
};





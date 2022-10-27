#pragma once

#include <string>
#include <vector>

#include "audio/devices.hpp"
#include "audio/virtualization.hpp"
#include "graphics/DgWindowCreateParams.hpp"
#include "dg_backend.hpp"
#include "GPU.hpp"

namespace Dragon {
    struct Engine {
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
        static std::vector<AudioInputDevice> inputDevices;
        static std::vector<AudioOutputDevice> outputDevices;
        static std::vector<AudioChannel> audioChannels;

        // App Specific Variables
        static DgString appName;

        // System Variables
        static uint32_t gpuCount;
        static std::vector<GPU> gpus;
    };

    DGAPI DgBool32 createNewWindow(WindowCreateParams params);
    DGAPI DgBool32 shouldWindowClose(int index);
    DGAPI void update();
    DGAPI void closeWindow(int index);
};





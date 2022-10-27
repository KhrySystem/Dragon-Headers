#pragma once

#include "backend.hpp"

namespace Dragon {
	struct GPU {
		VkPhysicalDevice handle;
		VkPhysicalDeviceFeatures features;
		VkPhysicalDeviceMemoryProperties memoryProperties;
		VkPhysicalDeviceProperties properties;
	};

	DGAPI std::vector<GPU> getGPUs();
	DGAPI int rateGPU(GPU gpu);
};

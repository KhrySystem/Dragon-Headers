#pragma once

#include "dg_backend.hpp"

namespace Dragon {
	typedef struct GPU {
		VkPhysicalDevice handle;
		VkPhysicalDeviceFeatures features;
		VkPhysicalDeviceMemoryProperties memoryProperties;
		VkPhysicalDeviceProperties properties;
	} GPU;

	DGAPI std::vector<GPU> getGPUs();
	DGAPI int rateGPU(GPU gpu);
};

#pragma once

#include "graphics/DgGPURequirements.hpp"
#include "dg_backend.hpp"

namespace Dragon {
	typedef struct GPU {
		VkPhysicalDevice handle;
		VkPhysicalDeviceFeatures features;
		VkPhysicalDeviceMemoryProperties memoryProperties;
		VkPhysicalDeviceProperties properties;
	} GPU;

	DGAPI std::vector<GPU> getGPUs();
	DGAPI int rateGPU(GPU gpu, GPURequirements reqs);
};

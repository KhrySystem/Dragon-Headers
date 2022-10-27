#pragma once

#include "graphics/DgGPURequirements.hpp"
#include "dg_backend.hpp"

namespace Dragon {
	struct GPU {
		VkPhysicalDevice handle;
		VkPhysicalDeviceFeatures features;
		VkPhysicalDeviceMemoryProperties memoryProperties;
		VkPhysicalDeviceProperties properties;
	};

	DGAPI std::vector<GPU> getGPUs();
	DGAPI int rateGPU(GPU gpu, GPURequirements reqs);
};

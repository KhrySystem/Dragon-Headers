#pragma once

#include <dragon/graphics/DgGPURequirements.hpp>
#include <dragon/dg_backend.hpp>

typedef struct GPU {
	VkPhysicalDevice handle;
	VkPhysicalDeviceFeatures features;
	VkPhysicalDeviceMemoryProperties memoryProperties;
	VkPhysicalDeviceProperties properties;
} GPU;

DGAPI std::vector<GPU> dgGetGPUs();
DGAPI int dgRateGPU(GPU gpu, DgGPURequirements reqs);
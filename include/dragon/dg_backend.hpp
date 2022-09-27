#pragma once

#include <vulkan/vulkan.hpp>

#ifndef GLFW_INCLUDE_NONE
    #define GLFW_INCLUDE_NONE
#endif
#include <glfw/glfw3.h>

#include "internal/platform.hpp"

#if defined(MSVC)
	#define DGAPI
#else
	#define DGAPI __declspec(dllexport)
#endif

#define DG_BOOL bool
#define DG_TRUE GLFW_TRUE
#define DG_FALSE GLFW_FALSE

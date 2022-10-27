#pragma once

// Dragon info
#define DG_HEADER_VERSION "0.0.1" 
#define DG_HEADER_VERSION_COMPLETE "0.0.1.0"

// SLI Headers
#include <cstdlib>
#include <exception>

// DGAPI Declaration
#if defined(MSVC)
	#define DGAPI
#else
	#define DGAPI __declspec(dllexport)
#endif
// Boost Headers
#include <boost/exception_ptr.hpp>

// Dragon Headers included by all files
#include "internal/platform_dependent.hpp"
#include "internal/string.hpp"

//Vulkan Header
#include <vulkan/vulkan.hpp>

// OpenAL Headers
#include <AL/al.h>
#include <AL/alc.h>
#include <AL/alext.h>
#include <AL/efx-creative.h>
#include <AL/efx-presets.h>
#include <AL/efx.h>

//GLFW Header
#define GLFW_INCLUDE_VULKAN
#include <glfw/glfw3.h>

// Dragon Primitives
#define DgBool32 VkBool32
#define DgString std::string
#define DG_TRUE GLFW_TRUE
#define DG_FALSE GLFW_FALSE

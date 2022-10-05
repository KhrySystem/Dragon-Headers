#pragma once

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
#include "internal/platform.hpp"
#include "internal/exception.hpp"
#include "internal/string.hpp"

//Vulkan Header
#include <vulkan/vulkan.hpp>

//GLFW Header
#define GLFW_INCLUDE_NONE
#include <glfw/glfw3.h>



// Dragon Primitives
#define DG_BOOL bool
#define DG_TRUE GLFW_TRUE
#define DG_FALSE GLFW_FALSE

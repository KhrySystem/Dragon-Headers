#pragma once

#ifdef _cplusplus
extern "C" {
#endif

#include <glfw/glfw3.h>

#if defined(MSVC)
	#define DGAPI
#else
	#define DGAPI __declspec(dllexport)
#endif

#define DG_BOOL bool
#define DG_TRUE GLFW_TRUE
#define DG_FALSE GLFW_FALSE

#ifdef _cplusplus
}
#endif
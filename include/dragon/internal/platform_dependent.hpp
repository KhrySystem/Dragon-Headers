#pragma once

#if defined(_AIX)
	#define DRAGON_OS_AIX
#elif defined(__unix__) || defined(__APPLE__) && defined(__MACH__)
	#include <sys/param.h>
	#if defined(BSD)
		#define DRAGON_OS_BSD
	#endif
#elif defined(__hpux)
	#define DRAGON_OS_HPUX
#elif defined(__linux__)
	#define DRAGON_OS_LINUX
#elif defined(__APPLE__) && defined(__MACH__)
	#include <TargetConditionals.h>
	#if TARGET_IPHONE_SIMULATOR == 1
		#define DRAGON_OS_IOS_SIM
	#elif TARGET_OS_IPHONE == 1
		#define DRAGON_OS_IOS
	#elif TARGET_OS_MAC == 1
		#define DRAGON_OS_MAC
	#endif
#elif defined(__sun) && defined(_SVR4)
	#define DRAGON_OS_SOLARIS
#elif defined(__CYGWIN__) && !defined(_WIN32)
	#define DRAGON_OS_CYGWIN
#elif defined(_WIN32) || defined(_WIN64)
	#include <Windows.h>
	#if defined(_WIN64)
		#define DRAGON_OS_X64WIN
	#elif defined(_WIN32)
		#define DRAGON_OS_X86WIN
	#endif
#else
	#pragma error "No OS detected!"
#endif

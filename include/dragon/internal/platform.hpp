#pragma once

#include <boost/predef/os.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
	// All Windows builds
	#include <Windows.h>
	#if defined(BOOST_OS_WINDOWS_WIN64)
		// 64-Bit Windows only 
	#elif defined(BOOST_OS_WINDOWS_WIN32) || defined(BOOST_OS_WINDOWS__WIN32__)
		// 32-Bit Windows only
	#endif

	#if BOOST_OS_WINDOWS >= BOOST_VERSION_NUMBER(11, 0, 0)
		// Windows 11
	#elif BOOST_OS_WINDOWS >= BOOST_VERSION_NUMBER(10, 0, 0)
		// Windows 10
	#elif BOOST_OS_WINDOWS >= BOOST_VERSION_NUMBER(8, 0, 0)
		// Windows 8
	#endif
#elif defined(__APPLE__)
	#include <TargetConditionals.h>
	#if defined(BOOST_OS_MACOS)
		// All MacOS builds
		#define DG_PLAT_MACOS
		#include <Cocoa/Cocoa.h>
	#elif defined(BOOST_OS_IOS)
		// All iOS builds
	#endif
#elif defined(__linux__)
	// All linux
#endif

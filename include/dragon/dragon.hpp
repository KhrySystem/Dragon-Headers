#pragma once

#include <dragon/graphics/DgWindowCreateParams.hpp>
#include <dragon/internal/platform.hpp>
#include <dragon/dg_backend.hpp>
#include <dragon/dgEngine.hpp>
#include <dragon/init.hpp>

#include <dragon/iron/dgIron.hpp>
#include <dragon/light/dgLight.hpp>
#include <dragon/stream/dgStream.hpp>
#include <dragon/thunder/dgThunder.hpp>


#ifndef DG_EXTENSION_SUPPORT
	#define DG_EXTENSION_SUPPORT

	DGAPI DG_BOOL inline dgIsIronbreathEnabled() {
		#ifdef DRAGON_IRONBREATH_ENABLED
			return DG_TRUE;
		#else
			return DG_FALSE;
		#endif
	}
	DGAPI DG_BOOL inline dgIsLightbreathEnabled() {
		#ifdef DRAGON_LIGHTBREATH_ENABLED
			return DG_TRUE;
		#else
			return DG_FALSE;
		#endif
	}
	DGAPI DG_BOOL inline dgIsStreambreathEnabled() {
		#ifdef DRAGON_STREAMBREATH_ENABLED
			return DG_TRUE;
		#else
			return DG_FALSE;
		#endif
	}

	DGAPI DG_BOOL inline dgIsThunderbreathEnabled() {
		#ifdef DRAGON_THUNDERBREATH_ENABLED
			return DG_TRUE;
		#else
			return DG_FALSE;
		#endif
	}
#endif

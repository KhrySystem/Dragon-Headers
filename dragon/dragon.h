#pragma once

#ifdef _cplusplus
	#ifdef DRAGON_USE_BOOST
		#include <boost/accumulators.hpp>
	#endif
extern "C" {
#endif

#include <dragon/dgEngine.h>
#include <dragon/dg_backend.h>
#include <dragon/graphics/DgWindowCreateParams.h>

#ifdef _cplusplus
}
#endif
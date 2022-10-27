#pragma once

#include "audio/devices.hpp"
#include "internal/platform.hpp"
#include "dg_backend.hpp"
#include "dgEngine.hpp"
#include "init.hpp"
#include "options.hpp"

#include <dragon/fire/dgFire.hpp>
#include <dragon/iron/dgIron.hpp>
#include <dragon/light/dgLight.hpp>
#include <dragon/stream/dgStream.hpp>
#ifdef DRAGON_OPENCL_FOUND
	#include <dragon/thunder/dgThunder.hpp>
#endif
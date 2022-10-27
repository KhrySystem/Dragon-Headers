#pragma once 

#include "backend.hpp"

namespace Dragon {
	DGAPI void init(DgString appName);
	DGAPI DgBool32 isExtensionLayerSupported(DgString layerName);
	DGAPI void terminate();
}

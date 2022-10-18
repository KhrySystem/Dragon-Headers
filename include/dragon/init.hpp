#pragma once 

#include <dragon/dg_backend.hpp>
namespace Dragon {
	DGAPI void init(std::string appName);
	DGAPI DgBool32 isExtensionLayerSupported(std::string layerName);
	DGAPI void terminate();
}

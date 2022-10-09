#pragma once 

#include <dragon/dg_backend.hpp>

DGAPI void dgInit(std::string appName);
DGAPI DG_BOOL dgIsExtensionLayerSupported(std::string layerName);
DGAPI void dgTerminate();

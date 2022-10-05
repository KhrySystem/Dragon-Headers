#pragma once 

#include <dragon/dg_backend.hpp>

DGAPI void dgInit(std::string appName);
DGAPI DG_BOOL dgAddExtensionLayerToEngine(std::string layerName);
DGAPI DG_BOOL dgAddValidationLayerToEngine(std::string layerName);
DGAPI void dgTerminate();

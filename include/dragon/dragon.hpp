#pragma once
#include <dragon/graphics/DgWindowCreateParams.hpp>
#include <dragon/internal/platform.hpp>
#include <dragon/dg_backend.hpp>
#include <dragon/dgEngine.hpp>
#include <dragon/init.hpp>

#include <dragon/iron/dgIron.hpp>
#include <dragon/light/dgLight.hpp>
#include <dragon/stream/dgStream.hpp>

DGAPI DG_BOOL dgIsIronbreathEnabled();
DGAPI DG_BOOL dgIsLightbreathEnabled();
DGAPI DG_BOOL dgIsStreambreathEnabled();

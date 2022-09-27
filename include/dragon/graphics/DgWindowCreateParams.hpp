#pragma once

#include <dragon/dg_backend.hpp>

struct DgWindowCreateParams {
	int width;
	int height;
	static inline bool shareResources = DG_TRUE;
};
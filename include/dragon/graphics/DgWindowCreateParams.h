#pragma once

#include <dragon/dg_backend.h>

struct DgWindowCreateParams {
	int width;
	int height;
	bool shareResources = DG_TRUE;
};
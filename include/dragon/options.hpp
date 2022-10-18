#pragma once

#include "dg_backend.hpp"
#include "dgEngine.hpp"

namespace Dragon {
	DGAPI void setOption(const uint32_t option, DgBool32 value);
	DGAPI DgBool32 getOption(const uint32_t option);

	namespace Options {
		typedef struct ExtensionOptions {
			static DgBool32 ironEnabled;
			static DgBool32 lightEnabled;
			static DgBool32 streamEnabled;
			static DgBool32 thunderEnabled;

		} ExtensionOptions;
	};

	
};

// Option Hex codes for extension on/off toggling

// Dragon's Ironbreath module handle to toggle it on/off
#define DRAGON_IRONBREATH_ENABLED 		0x00000001
#define DRAGON_LIGHTBREATH_ENABLED 		0x00000002
#define DRAGON_STREAMBREATH_ENABLED		0x00000003
#define DRAGON_THUNDERBREATH_ENABLED	0x00000004
#pragma once

#include <dragon/dg_backend.hpp>

namespace Dragon
{
	typedef struct AudioOutputDevice {

	} AudioOutputDevice;
	DGAPI std::vector getAudioOutputDevices();
	DGAPI DgBool32 makeOutputDeviceActive(AudioOutputDevice device);
} 

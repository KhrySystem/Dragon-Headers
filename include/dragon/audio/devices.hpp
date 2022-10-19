#pragma once

#include <dragon/dg_backend.hpp>

namespace Dragon
{
	typedef struct AudioOutputDevice {

	} AudioOutputDevice;

	typedef struct AudioImputDevice {

	} AudioInputDevice;

	DGAPI std::vector<AudioOutputDevice> getAudioOutputDevices();
	DGAPI DgBool32 makeAudioOutputDeviceActive(AudioOutputDevice device);

	DGAPI std::vector<AudioInputDevices> getAudioInputDevices();
	DGAPI DgBool32 makeAudioInputDeviceActive(AudioInputDevice device);
} 

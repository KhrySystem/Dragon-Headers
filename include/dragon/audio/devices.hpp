#pragma once

#include <dragon/dg_backend.hpp>

namespace Dragon
{
	typedef struct AudioOutputDevice {

	} AudioOutputDevice;

	typedef struct AudioInputDevice {

	} AudioInputDevice;

	DGAPI std::vector<AudioOutputDevice> getAudioOutputDevices();
	DGAPI DgBool32 makeAudioOutputDeviceActive(AudioOutputDevice device);

	DGAPI std::vector<AudioInputDevice> getAudioInputDevices();
	DGAPI DgBool32 makeAudioInputDeviceActive(AudioInputDevice device);
} 

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

	DGAPI ALCdevice* getOutputDeviceHandle(AudioOutputDevice device);
} 


// Filetypes that help Dragon know what to do.
// MP3 Audio File
#define DRAGON_FILETYPE_MP3				0x00000007
// WAV Audio File
#define DRAGON_FILETYPE_WAV				0x00000006
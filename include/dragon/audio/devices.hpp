#pragma once

#include <dragon/dg_backend.hpp>

namespace Dragon
{
	typedef struct AudioOutputDevice {
		ALCdevice* handle;
	} AudioOutputDevice;

	typedef struct AudioInputDevice {
		ALCdevice* handle;
	} AudioInputDevice;

	DGAPI std::vector<AudioOutputDevice> getAudioOutputDevices();
	DGAPI DgBool32 makeAudioOutputDeviceActive(AudioOutputDevice device);

	DGAPI std::vector<AudioInputDevice> getAudioInputDevices();
	DGAPI DgBool32 makeAudioInputDeviceActive(AudioInputDevice device);
} 


// Filetypes that help Dragon know what to do with the file.
// MP3 Audio File
#define DRAGON_FILETYPE_MP3				0x00000007
// WAV Audio File
#define DRAGON_FILETYPE_WAV				0x00000006
// OGG Audio File
#define DRAGON_FILETYPE_OGG				0x00000008
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


// Filetypes that help Dragon know what to do.
// MP3 Audio File
#define DRAGON_FILETYPE_MP3				0x00000007
// WAV Audio File
#define DRAGON_FILETYPE_WAV				0x00000006
// STL 3D Model File
#define DRAGON_FILETYPE_STL				0x00000008
// OBJ 3D Model File
#define DRAGON_FILETYPE_OBJ				0x00000008
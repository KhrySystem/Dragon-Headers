#pragma once

#include <dragon/dg_backend.hpp>

#include "devices.hpp"

namespace Dragon {
	typedef struct AudioChannel: virtual AudioInputDevice, virtual AudioOutputDevice {

	} AudioChannel;

	typedef struct VirtualAudioOutput: public AudioOutputDevice {

	} VirtualAudioOutput;

	DGAPI void createAudioChannel();
}
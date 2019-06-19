#pragma once

#include "Sound.h"

namespace LoksimSound
{
	// Loopt eine einzelne Sounddatei
	class SimpleLoopSound : Sound
	{
		// Inherited via Sound
		void playSound(string soundFilename);
	};
}

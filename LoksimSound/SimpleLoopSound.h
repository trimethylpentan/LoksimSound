#pragma once

#include "Sound.h"

namespace LoksimSound
{
	// Loopt eine einzelne Sounddatei
	class SimpleLoopSound : public Sound
	{
		// Inherited via Sound
		void playSound() override;
		void stopSound() override;
	};
}

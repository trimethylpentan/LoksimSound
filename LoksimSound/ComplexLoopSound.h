#pragma once

#include "Sound.h"

namespace LoksimSound
{
	// Spielt einen Sound ab, der aus mehreren Dateien besteht und loopt den Mittelteil
	class ComplexLoopSound : Sound
	{
		public:
		// Inherited via Sound
		void playSound(string soundFilename);
	};
}


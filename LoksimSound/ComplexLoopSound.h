#pragma once

#include "Sound.h"

#include "soloud_wav.h"

namespace LoksimSound
{
	// Spielt einen Sound ab, der aus mehreren Dateien besteht und loopt den Mittelteil
	class ComplexLoopSound : public Sound
	{
		public:
			ComplexLoopSound(string soundFilename);
			// Inherited via Sound
			void playSound() override;

		private:
			SoLoud::Wav startSound_;
		    SoLoud::Wav middleLoopSound_;
			SoLoud::Wav endSound_;
	};
}


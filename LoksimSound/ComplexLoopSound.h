#pragma once

#include "Sound.h"

#include "soloud_wav.h"

namespace LoksimSound
{
	// Spielt einen Sound ab, der aus mehreren Dateien besteht und loopt den Mittelteil
	class ComplexLoopSound : public Sound
	{
		public:
			ComplexLoopSound(std::string soundFilename);
			// Inherited via Sound
			void playSound() override;
			void stopSound() override;

		private:
			SoLoud::Wav startSound_;
		    SoLoud::Wav middleLoopSound_;
			SoLoud::Wav endSound_;

			bool startHasPlayed_ = false;
			int middleLoopSoundHandle_ = 0;
			int startSoundHandle_ = 0;
	};
}


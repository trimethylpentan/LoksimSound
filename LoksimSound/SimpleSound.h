#pragma once

#include "Sound.h"
#include "soloud_wav.h"

namespace LoksimSound
{
	// Spielt einen einfachen Sound ein Mal ab
	class SimpleSound : public Sound
	{
	    public:
			SimpleSound(std::string soundFilename);
			// Inherited via Sound
			void playSound();
			void stopSound();

		private:
			SoLoud::Wav sound_;
	};
} // namespace LoksimSound

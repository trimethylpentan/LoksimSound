#pragma once

#include "Sound.h"
#include "soloud_wav.h"

namespace LoksimSound
{
	// Spielt einen einfachen Sound ein Mal ab
	class SimpleSound : Sound
	{
	    public:
			SimpleSound(string soundFilename);
			// Inherited via Sound
			void playSound();

		private:
			SoLoud::Wav sound_;
	};
}

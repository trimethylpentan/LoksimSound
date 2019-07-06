#pragma once

#ifndef SIMPLE_SOUND_H
#define SIMPLE_SOUND_H

#include "Sound.h"
#include "soloud_wav.h"

namespace LoksimSound
{
	// Spielt einen einfachen Sound ein Mal ab
	class SimpleSound : public Sound
	{
	    public:
			SimpleSound(string soundFilename);
			// Inherited via Sound
			void playSound();
			void stopSound();

		private:
			SoLoud::Wav sound_;
	};
} // namespace LoksimSound
#endif    // !SIMPLE_SOUND_H

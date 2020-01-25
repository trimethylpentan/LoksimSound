#pragma once

#include <string>

#include "soloud.h"

namespace LoksimSound
{
    class Sounds;

	// Abstrakte Klasse, von der alle Sound-Klassen erben
	class Sound
	{
		public:
			static void initialise();
		    static void deinitialise(LoksimSound::Sounds sounds);
			virtual void playSound() = 0;
		    virtual void stopSound() = 0;

		protected:
			static SoLoud::Soloud soloud_;
	};
} // namespace LoksimSound

#pragma once

#ifndef SOUND_H
#define SOUND_H

#include <string>

#include "soloud.h"

using namespace std;

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

		protected:
			static SoLoud::Soloud soloud_;
	};
} // namespace LoksimSound
#endif    // !SOUND_H

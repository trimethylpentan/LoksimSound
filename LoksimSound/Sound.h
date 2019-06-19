#pragma once
#include <string>

#include "soloud.h"

using namespace std;

namespace LoksimSound
{
	// Abstrakte Klasse, von der alle Sound-Klassen erben
	class Sound
	{
		public:
			static void initialise();
		    static void deinitialise();
			virtual void playSound(string soundFilename) = 0;

		protected:
			static SoLoud::Soloud soloud_;
	};
}

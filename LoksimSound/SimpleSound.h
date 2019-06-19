#pragma once

#include "Sound.h"

namespace LoksimSound
{
	// Spielt einen einfachen Sound ein Mal ab
	class SimpleSound : Sound
	{
		// Inherited via Sound
		void playSound(string soundFilename);
	};
}

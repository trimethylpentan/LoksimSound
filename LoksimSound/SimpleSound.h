#pragma once

#include "Sound.h"

// Spielt einen einfachen Sound ein Mal ab
class SimpleSound : Sound
{
	// Inherited via Sound
	virtual void playSound(string soundFilename) override;
};


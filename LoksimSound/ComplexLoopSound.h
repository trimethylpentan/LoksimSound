#pragma once

#include "Sound.h"

// Spielt einen Sound ab, der aus mehreren Dateien besteht und loopt den Mittelteil
class ComplexLoopSound : Sound
{
	// Inherited via Sound
	virtual void playSound(string soundFilename) override;
};


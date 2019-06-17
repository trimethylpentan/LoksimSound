#include "ComplexLoopSound.h"

#include "soloud.h";
#include "soloud_wav.h";
#include <iostream>

void ComplexLoopSound::playSound(string soundFilename)
{
	std::cout << "test"; 
	SoLoud::Soloud soloud;
	soloud.init();

	SoLoud::Wav wav;
	wav.load(soundFilename.c_str());

	soloud.play(wav);
}

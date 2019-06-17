#include "ComplexLoopSound.h"

#include "soloud.h";
#include "soloud_wav.h";
#include <iostream>

void ComplexLoopSound::playSound(string soundFilename)
{
	SoLoud::Soloud soloud;
	soloud.init();
	string backend = soloud.getBackendString();
	cout << backend;

	SoLoud::Wav wav;
	SoLoud::result isLoaded = wav.load(soundFilename.c_str());

	if (isLoaded == SoLoud::SO_NO_ERROR) {
		soloud.play(wav);
	}

	soloud.deinit();
}

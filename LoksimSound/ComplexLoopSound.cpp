#include "ComplexLoopSound.h"

#include "soloud.h";
#include "soloud_wav.h";
#include "soloud_thread.h";
#include <iostream>

void LoksimSound::ComplexLoopSound::playSound(string soundFilename)
{
	string backend = soloud_.getBackendString();
	cout << backend;

	SoLoud::Wav wav;
	SoLoud::result isLoaded = wav.load(soundFilename.c_str());

	if (isLoaded == SoLoud::SO_NO_ERROR) {
		int handle = soloud_.play(wav);

		double timeInSeconds = wav.getLength();
		SoLoud::Thread::sleep(timeInSeconds * 1000);
		soloud_.stop(handle);
	}
}

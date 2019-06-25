#include "SimpleSound.h"
#include <soloud_wav.h>
#include <soloud_thread.h>

LoksimSound::SimpleSound::SimpleSound(string soundFilename)
{
	sound_.load(soundFilename.c_str());
}


void LoksimSound::SimpleSound::playSound()
{
	soloud_.play(sound_);

	// Warten, bis die Datei zu ende abgespielt ist
	//double timeInSeconds = sound_.getLength();
	//SoLoud::Thread::sleep(timeInSeconds * 1000);
}

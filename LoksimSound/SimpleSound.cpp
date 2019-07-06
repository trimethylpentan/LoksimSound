#include "SimpleSound.h"
#include <soloud_wav.h>
#include <soloud_thread.h>

LoksimSound::SimpleSound::SimpleSound(string soundFilename)
{
	sound_.load(soundFilename.c_str());
}


// Sound abspielen
void LoksimSound::SimpleSound::playSound()
{
	soloud_.play(sound_);
}

void LoksimSound::SimpleSound::stopSound()
{
}

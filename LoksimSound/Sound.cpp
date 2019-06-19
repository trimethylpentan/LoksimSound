#include "Sound.h"

SoLoud::Soloud LoksimSound::Sound::soloud_;

// initialisiert SoLoud
void LoksimSound::Sound::initialise()
{
	soloud_.init();
}

void LoksimSound::Sound::deinitialise()
{
	soloud_.deinit();
}

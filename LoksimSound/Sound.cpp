#include "Sound.h"
#include "Sounds.h"

SoLoud::Soloud LoksimSound::Sound::soloud_;

// initialisiert SoLoud
void LoksimSound::Sound::initialise()
{
	soloud_.init();
}

void LoksimSound::Sound::deinitialise(LoksimSound::Sounds sounds)
{
	sounds.clearAll();
	soloud_.deinit();
}

#include "SimpleSound.h"
#include <soloud_wav.h>
#include <soloud_thread.h>

void LoksimSound::SimpleSound::playSound(string soundFilename)
{
	SoLoud::Wav wav;
	SoLoud::result isLoaded = wav.load(soundFilename.c_str());

	// Sound nur abspielen, wenn beim Laden kein Fehler aufgetreten ist
	if (isLoaded == SoLoud::SO_NO_ERROR)
	{
		int handle = soloud_.play(wav);

		// Warten, bis die Datei zu ende abgespielt ist
		double timeInSeconds = wav.getLength();
		SoLoud::Thread::sleep(timeInSeconds * 1000);
	}
}

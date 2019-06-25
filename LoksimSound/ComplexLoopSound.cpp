#include "ComplexLoopSound.h"
#include "ComplexLoopSound.h"

#include "soloud.h"
#include "soloud_wav.h"
#include "soloud_thread.h"
#include <iostream>

LoksimSound::ComplexLoopSound::ComplexLoopSound(string soundFilename)
{
	string startSoundFilename = soundFilename + "_1";
	string loopSoundFilename  = soundFilename + "_2";
	string endSoundFilename   = soundFilename + "_3";

	startSound_.load(startSoundFilename.c_str());
	middleLoopSound_.load(loopSoundFilename.c_str());
	endSound_.load(endSoundFilename.c_str());
}

void LoksimSound::ComplexLoopSound::playSound()
{

}

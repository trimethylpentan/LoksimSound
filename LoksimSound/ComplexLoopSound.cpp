#include "ComplexLoopSound.h"

#include "soloud.h"
#include "soloud_thread.h"
#include "soloud_wav.h"
#include <iostream>

using namespace std;

LoksimSound::ComplexLoopSound::ComplexLoopSound(string soundFilename)
{
	string startSoundFilename = soundFilename + "_1.wav";
	string loopSoundFilename = soundFilename + "_2.wav";
	string endSoundFilename = soundFilename + "_3.wav";

	startSound_.load(startSoundFilename.c_str());
	middleLoopSound_.load(loopSoundFilename.c_str());
	endSound_.load(endSoundFilename.c_str());
}

void LoksimSound::ComplexLoopSound::playSound()
{
	if (!startHasPlayed_)
	{
		OutputDebugString("starting start...\n");
		startHasPlayed_ = true;
		startSoundHandle_ = soloud_.play(startSound_);
		return;
	}

	// Wenn der Startsound noch nicht beendet ist: abbrechen
	if (soloud_.isValidVoiceHandle(startSoundHandle_) || soloud_.isValidVoiceHandle(middleLoopSoundHandle_))
	{ 
		OutputDebugString("not starting loop...\n");
		return;
	}

	OutputDebugString("starting loop...\n");

	middleLoopSound_.setLooping(true);
	middleLoopSoundHandle_ = soloud_.play(middleLoopSound_);
}

void LoksimSound::ComplexLoopSound::stopSound()
{
	if (!soloud_.isValidVoiceHandle(middleLoopSoundHandle_) || soloud_.isValidVoiceHandle(startSoundHandle_))
	{
		return;
	}
	OutputDebugString("stoping loop...\n");
	middleLoopSound_.stop();
	soloud_.play(endSound_);
	startHasPlayed_ = false;
}

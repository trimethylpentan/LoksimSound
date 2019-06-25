#pragma once

#ifndef SOUNDS_H
#define SOUNDS_H

#include "Sound.h"

namespace LoksimSound
{

class Sound;

class Sounds
{
    public:
		LoksimSound::Sound *sndPfeiffe;
		LoksimSound::Sound* sndSchleudern;
		LoksimSound::Sound* sndStand;
		LoksimSound::Sound* sndSanden;
		LoksimSound::Sound* sndWeiche;
		LoksimSound::Sound* sndSchienenstoss;
		LoksimSound::Sound* sndKurvenf;
		LoksimSound::Sound* sndBremseRad;

		void clearAll();
};
}

#endif // !SOUNDS_H
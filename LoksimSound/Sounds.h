#pragma once

#ifndef SOUNDS_H
#define SOUNDS_H

#include "Sound.h"
#include "SimpleSound.h"

namespace LoksimSound
{
class Sounds
{
    public:
		LoksimSound::SimpleSound *sndPfeiffe;
		LoksimSound::SimpleSound *sndSchleudern;
		LoksimSound::SimpleSound *sndStand;
		LoksimSound::SimpleSound *sndSanden;
		LoksimSound::SimpleSound *ndWeiche;
		LoksimSound::SimpleSound *sndSchienenstoss;
		LoksimSound::SimpleSound *sndKurvenf;
		LoksimSound::SimpleSound *sndBremseRad;
};
}

#endif // !SOUNDS_H
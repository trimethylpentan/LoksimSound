#pragma once
#include <string>

using namespace std;

//Abstrakte Klasse, von der alle Sound-Klassen erben
class Sound
{
public:
	virtual void playSound(string soundFilename) = 0;
};


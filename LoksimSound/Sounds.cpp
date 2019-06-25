#include "Sounds.h"

// std::string LoksimSound::SoundPaths::sndPfeiffe;

void LoksimSound::Sounds::clearAll()
{
	delete sndPfeiffe;
	//delete sndSchleudern;
	delete sndStand;
	//delete sndSanden;
	//delete sndWeiche;
	//delete sndSchienenstoss;
	//delete sndKurvenf;
	//delete sndBremseRad;
}

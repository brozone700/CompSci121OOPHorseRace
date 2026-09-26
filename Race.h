#ifndef RACE_H
#define RACE_H

#include "Horse.h"

class Race {
	private:
		const static int NUM_HORSES = 5;
		Horse horse[NUM_HORSES];
		int KeepGoingRace;

		void printTrack();

	public:
		Race();
		void run();
};

#endif

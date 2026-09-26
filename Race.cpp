#include <iostream>
using namespace std;
#include "Race.h"

Race::Race() {
	KeepGoingRace = 0;
	for ( int i = 0; i < NUM_HORSES; i++) {
		horse[i].setName(i);
	}
}

void Race::printTrack() {
	for ( int i = 0; i < NUM_HORSES; i++) {
		horse[i].print();
		if (horse[i].finished()) {
			KeepGoingRace = 1;
		}
	}
}

void Race::run() {
	printTrack();
	while (KeepGoingRace < 1) {
		cout << "\nPress enter for another turn";
		cin.get();
		for ( int i = 0; i < NUM_HORSES; i++) {
			horse[i].advance();
		}
		printTrack();
	}
}

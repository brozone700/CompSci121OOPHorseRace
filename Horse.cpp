#include <iostream>
using namespace std;
#include <cstdlib>
#include "Horse.h"

Horse::Horse() {
	position = 0;
	name = 0;
}

void Horse::setName(int n) {
	name = n;
}

void Horse::advance() {
	position = position + (rand() % 2);
}

bool Horse::finished() {
	if (position >= TrackLength) {
		return true;
	} else {
		return false;
	}
}

void Horse::print() {
	cout << "\n";
	if (finished()) {
		cout << "Horse ";
		cout << name;
		cout << " wins !!!";
	} else {
		for ( int j = 0; j < TrackLength; j++) {
			if ( j != position) {
				cout << ".";
			} else {
				cout << name;
			}
		}
	}
}

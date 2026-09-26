#include <cstdlib>
#include <ctime>
#include "Race.h"

int main() {
	srand(time(NULL));
	Race race;
	race.run();
	return 0;
}

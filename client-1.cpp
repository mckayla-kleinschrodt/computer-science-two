#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Instrument.h"
#include "Tuba.h"
#include "Harp.h"

using namespace std;

const int LENGTH = 12;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	Instrument *instPtr[LENGTH];

	for (int i = 0; i < LENGTH; i++) {
		if (rand() % 2 == 0) {
			instPtr[i] = new Tuba("Yamaha", "Oom-pah", false);
		}
		else
			instPtr[i] = new Harp("Pixie", "Pling-Pluck", 40);
	}


	for (int j = 0; j < LENGTH; j++) {
		instPtr[j]->play();
	}

	for (int k = 0; k < LENGTH; k++) {
		delete instPtr[k];
	}

	//order does not matter because it is randomized. 

	return 0;
}
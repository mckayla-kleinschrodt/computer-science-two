#include "Harp.h"

Harp::Harp()
{
	numberOfStrings = 0;
}

Harp::Harp(string instrumentBrand, string instrumentSound, int numStrings)
	:Instrument(instrumentBrand, instrumentSound)
{
	numberOfStrings = numStrings; 
}

Harp::~Harp() {}

void Harp::setNumberOfStrings(int numStrings)
{
	numberOfStrings = numStrings;
}

int Harp::getNumberOfStrings() const
{
	return numberOfStrings;
}

void Harp::play() const
{
	cout << "The instrument brand is: " << getBrand() << endl;
	cout << "The instrument makes this sound: " << getSound() << endl;
	cout << "THe number of strings: " << getNumberOfStrings() << endl;
}

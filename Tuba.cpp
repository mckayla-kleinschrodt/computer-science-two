#include "Tuba.h"

Tuba::Tuba()
{
	isSousaphone = false;
}

Tuba::Tuba(string instrumentBrand, string instrumentSound, bool isSous)
	:Instrument(instrumentBrand, instrumentSound)
{
	isSousaphone = isSous;
}

Tuba::~Tuba() {}

void Tuba::setIsSousaphone(bool isSous)
{
	isSousaphone = isSous; 

}

bool Tuba::getIsSousaphone() const
{
	return isSousaphone; 
}

void Tuba::play() const
{
	cout << "The instrument brand is: " << getBrand() << endl;
	cout << "The instrument is a sousaphone: " << getIsSousaphone() << endl;
	cout << "The instrument makes this sound: " << getSound() << endl;	
}

#include "Instrument.h"

Instrument::Instrument()
{
	brand = "unknown";
	sound = "unknown";
}

Instrument::Instrument(string instrumentBrand, string instrumentSound)
{
	brand = instrumentBrand; 
	sound = instrumentSound;
}

Instrument::~Instrument()
{
	//There are no virtual funcions; therefore, we do not need a delete statement in this destructor 
}

void Instrument::setBrand(string instrumentBrand)
{
	brand = instrumentBrand;
}

void Instrument::setSound(string instrumentSound)
{
	sound = instrumentSound;
}

string Instrument::getBrand() const
{
	return brand;
}

string Instrument::getSound() const
{
	return sound;	
}
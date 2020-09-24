#include <iostream>
#include "shape.h"

using namespace std;

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(float,float);
	float getarea();
	void setheight(float);
	float getheight();
private:
	float height;
};
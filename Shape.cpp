#include "shape.h"

Shape::Shape()
{
	setdata(0.0);
}

Shape::Shape(float s)
{
	setdata(s);
}

void Shape::setdata(float s)
{
	edge = s;
}

float Shape::getdata()
{
	return edge;
}

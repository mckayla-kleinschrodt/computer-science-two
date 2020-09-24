#include "triangle.h"

Triangle::Triangle()
{
	setheight(0.0);
}

	// TODO: Before the opening brace, use the syntax from the example slides
	// to construct the base class using the base class parameterized
	// constructor.  Pass the base class content (edge)
	// up to the base class.
Triangle::Triangle(float e, float h) :
	Shape(e)
{
	Shape::setdata(e);
	setheight(h);
	
}

float Triangle::getarea()
{
	float area;
	area = height * 0.5 * Shape::getdata();
	return area;
	// TODO:  Return the area of the Triangle according to the member variables (edge and height).
	// area = 0.5 * height * edge
}

void Triangle::setheight(float h)
{
	height = h;
}

float Triangle::getheight()
{
	return height;
}

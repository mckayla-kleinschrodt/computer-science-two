#include "Point.h"

#include <math.h>

Point::Point()
{

    x = 0.0;
    y = 0.0;

}

Point::Point(float xCoord, float yCoord)
{
    x = xCoord;
    y = yCoord;
}

void Point::setX(float xCoord)
{
    x = xCoord;
}

void Point::setY(float yCoord)
{
    y = yCoord;
}

float Point::getX() const
{
    return x;
}

float Point::getY() const
{
    return y;
}

float Point::getDistanceFromOrigin() const
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

void Point::printCoordinates() const
{
	// This function outputs the x and y coordinates to the terminal 
	cout << "X coordinate: " << getX() << endl;

	cout << "Y coordinate: " << getY() << endl << endl;
}

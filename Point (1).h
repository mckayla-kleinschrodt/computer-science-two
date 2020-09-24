#pragma once

#include <iostream>
using namespace std;

class Point {
private:
	//x coordinate 
	float x;

	//y coordinate
	float y;
public:
	//default constructor. activated if class is called without parameters
	Point();

	//constructor. meant to set x and y to the passed in parameters
	Point(float xCoord, float yCoord);

	//function to assign x to the passed in parameter
	void setX(float xCoord);

	//function to assign y to the passed in parameter
	void setY(float yCoord);

	//function to retrive the x value. (Needed because x is private)
	float getX() const;

	//function to retrive the y value. (Needed because y is private)
	float getY() const;

	//function to calculate distance from another point using x and y
	float getDistanceFromOrigin() const;

	//function to print x and y
	void printCoordinates() const;
};

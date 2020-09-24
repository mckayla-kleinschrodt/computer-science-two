#include "Point.h"

int main() {
	cout << "Creating point of (0, 0)" << endl;
	//call the default constructor for the point class to initialize x and y to default values
	Point point1 = Point();
	//printing point by typing the object (point1), calling the access operator (.), and then using the defined print function (printCoordinates())
	point1.printCoordinates();

	cout << "Calculating distance from point (0, 0)" << endl;
	cout << point1.getDistanceFromOrigin() << endl;

	//---------Second Point---------
	cout << endl;

	cout << "Creating point of (3, 4) " << endl;
	//pass in values to the constructor for the point class to set x and y to 3 and 4
	Point point2 = Point(3, 4);
	point2.printCoordinates();

	cout << "Calculating distance from point (0, 0)" << endl;
	cout << point2.getDistanceFromOrigin() << endl;

	return 0;
}
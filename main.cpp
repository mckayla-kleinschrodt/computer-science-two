#include <iostream>
#include "triangle.h"

int main()
{
	Triangle t1;
	t1.setdata(5.0f);
	t1.setheight(10.0f);
	cout << "Area of the triangle is: " << t1.getarea() << endl;
	system("pause");
	return 1;
}
# include "Box.h"

Box::Box()
{
    length = 0;
    breadth = 0;
    height = 0;
}

Box::Box(double length, double breadth, double height) {
    this -> length = length;
    this -> breadth = breadth;
    this -> height = height;
}

double Box::getVolume() { 
    return length * breadth * height;
}

void Box::setLength(double length) {
   this -> length = length; 
}

void Box::setBreadth(double breadth) {
    this->breadth = breadth;
}

void Box::setHeight(double height) {
    this->height = height;
}

Box Box::operator+(Box const& other) 
{
    Box tempBox;

    tempBox.length = length + other.length;
    tempBox.height = height + other.height;
    tempBox.breadth = breadth + other.breadth;

    return tempBox;
}

Box& Box::operator++() {
    ++length;
    ++height;
    ++breadth;

    return *this;
}

 ostream& operator << (ostream& out, Box& box)
{   
     out << "length: " << box.length
         << "\nbreadth: " << box.breadth
         << "\nheight: " << box.height << endl;
     return out;
}

Box& operator--(Box& box) {
    if (box.length < 1 || box.breadth < 1 || box.height < 1)
        cout << "Can not decrease the variables samller than 1." << endl;
    else
        --box.length;
        --box.breadth;
        --box.height;
        return box;

}
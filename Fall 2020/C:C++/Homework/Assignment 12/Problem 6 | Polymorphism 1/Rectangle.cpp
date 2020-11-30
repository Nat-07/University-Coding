#include <iostream>
#include "Rectangle.h"

/*
    CH-230-A
    a12 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// parametric constructor
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

// created new constructor to just pass along name from square
Rectangle::Rectangle(const char *n) : Area(n) {}

Rectangle::~Rectangle() {
}

// find area method using formula
double Rectangle::calcArea() const {
    std::cout << "Calculation of area for Rectangle called!";
	return length*width;
}

// find perimeter method using formula
double Rectangle::calcPerimeter() const {
    std::cout << " Calculation of perimeter for Rectangle called!";
	return ((2*width + 2*length));
}

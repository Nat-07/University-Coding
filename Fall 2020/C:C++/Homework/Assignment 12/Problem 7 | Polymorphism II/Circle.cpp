#include <iostream>
#include <cmath>
#include "Circle.h"

/*
    CH-230-A
    a12 p7.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

// find area method using formula
double Circle::calcArea() const {
	std::cout << "Calculation of area for Circle called!";
	return radius * radius * M_PI;
}

// find perimeter method using formula
double Circle::calcPerimeter() const {
	std::cout << "Calculation of perimeter for Circle called!";
	return radius * 2 * M_PI;
}

// self made getter to get outter ring for peremeter calculation
double Circle :: getOuterRing() const{
    return radius;
}

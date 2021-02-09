#include <iostream>
#include <cmath>
#include "Ring.h"

/*
    CH-230-A
    a12 p7.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

Ring::Ring(const char *n, double outer, double inner) : Circle(n, outer){
	innerradius = inner;
}

Ring::~Ring() {
}

// find area method using formula
double Ring::calcArea() const {
    std::cout << "Calculation of area for Ring called! ";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

// find perimeter method using formula
double Ring::calcPerimeter() const {
    std::cout << " Calculation of peremeter for Ring called! ";
	return (2*M_PI * (innerradius + this->getOuterRing()));
}

#include <iostream>
#include <cmath>
#include "Square.h"

/*
    CH-230-A
    a12 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// parametric constructor
Square::Square(const char *n, double newSide) : Rectangle(n){
	side = newSide;
}

// deconstructor
Square::~Square() {
}

// find area method using formula
double Square::calcArea() const {
    std::cout << "Calculation of area for Square called! ";
	return (side*side);
}

// find perimeter method using formula
double Square::calcPerimeter() const {
    std::cout << " Calculation of peremeter for Square called! ";
	return (4*side);
}

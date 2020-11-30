#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

/*
    CH-230-A
    a12 p7.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

// square class with data and methods
class Square : public Rectangle {
	public:
		// parametric constructor & destructor
		Square(const char *n, double side);
		~Square();

		// methods
		double calcArea() const;
		double calcPerimeter() const;
		
	private:
		double side;
};

#endif

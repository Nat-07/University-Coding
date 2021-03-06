#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

/*
    CH-230-A
    a12 p7.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
		// self made getter for peremeter
		double getOuterRing() const;
		
	private:
		double radius;
		
};

#endif

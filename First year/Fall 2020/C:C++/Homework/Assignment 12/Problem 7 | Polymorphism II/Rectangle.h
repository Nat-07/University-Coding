#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

/*
    CH-230-A
    a12 p7.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Rectangle : public Area {
	public:
		
		Rectangle(const char *n, double a, double b);
		
		// self made constructor to just pass color along to area
		Rectangle(const char *n);
		
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif

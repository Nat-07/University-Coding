#ifndef _RING_H
#define _RING_H
#include "Circle.h"

/*
    CH-230-A
    a12 p7.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		// methods
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double innerradius;
};

#endif

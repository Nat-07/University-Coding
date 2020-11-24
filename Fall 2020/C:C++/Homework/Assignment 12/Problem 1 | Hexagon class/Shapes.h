/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

/*
    CH-230-A
    a12 p1.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Shape {			// base class
	private: // private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double); /* usual three 
		constructors */
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double); /* moves the shape, i.e. it modifies it 
		center */
};

class RegularPolygon : public CenteredShape { /* a regular polygon is a
centered_shape with a number of edges */
	private: 
		int EdgesNumber;
	public:
		// default constructor
		RegularPolygon();
		// param constructor
		RegularPolygon(const std::string&, double, double, int);
		// copy constructor
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {/* a Circle is a shape with a center 
and a radius */
	private:
		double Radius;
	public:
		// default constructor
		Circle();
		// copy constructor
		Circle(const Circle&);
		// param constructor
		Circle(const std::string&, double, double, double);
		
};

class Hexagon : public 	RegularPolygon{ // derived from RegularPolygon
	private: // data valyes
		double sides;
		std::string color; 

	public:
		// param constructor
		Hexagon(double newSides, const std::string& newColor);
		// copy constructor
		Hexagon(const Hexagon&);
		// deconstructor
		~Hexagon();

		// getters & setters
		double getSides() const;
		void setSides(double newSides);
		std::string getColor() const;
		void setColor(std::string newColor);

		// methods for finding area & perimeter
		double hexArea();
		double hexPerimeter();

};
    
#endif

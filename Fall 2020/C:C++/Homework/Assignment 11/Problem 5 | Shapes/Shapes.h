/* 
	Classic shape examples: an inheritance tree in a geometric context
*/

/*
    CH-230-A
    a11 p5.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std; 

class Shape{// base class
	private: // private access modifier: could also be protected
		std::string name; // every shape will have a name
	public:
		Shape(const std::string&); // builds a shape with a name

		Shape(); // default constructor

		Shape(const Shape&); // copy constructor

		void printName() const ; // prints the name  

		// setters & getters
		void setName(std::string nameInput);
		std::string getName();
};

class CenteredShape : public Shape{  // inherits from Shape
	private: 
		double x,y; // the center of the shape
	public:
		// default constructor
		CenteredShape();

		// constructor with params
		CenteredShape(const std::string&, double, double); /* usual three 
		constructors */

		// copy constructor
		CenteredShape(const CenteredShape&);

		void move(double, double); /* moves the shape, i.e. it modifies it 
		center */

		// getters and setter X
		void setX(double newX);
		double getX() const;

		// getters and setter Y
		void setY(double inputY);
		double getY() const;
};

class RegularPolygon : public CenteredShape{ /* a regular polygon is a 
	centered_shape with a number of edges */
	private: 
		int EdgesNumber;
	public:
		// default constructor
		RegularPolygon();

		// constructor with params
		RegularPolygon(const std::string&, double, double, int);

		// copy constructor
		RegularPolygon(const RegularPolygon&);

		// setters & getters
		void setEdgesNumber(int newEdgesNumber);
		int getEdgesNumber() const;
};

// Rectangle class I made
class Rectangle : public RegularPolygon{ // Rectangle with width & height
	private:
		double height;
		double width;
	public:
		// default constructor
		Rectangle();

		// constructor with params
		Rectangle(const std::string&, double, double);

		//Added as asked by question
		Rectangle(const string& n, double nx, double ny, double nwidth, 
		double nheight);

		// copy constructor
		Rectangle(const Rectangle&);

		// setters & getters
		void setHeight(double newHeight);
		double getHeight() const;
		void setWidth(double newWidth);
		double getWidth() const;

		// perimeter & area methods
		double recPerimeter();
		double recArea();
		
};

// Square class I made
class Square : public Rectangle{ // Square with sides
	private:
		double sides;
	public:
		// default constructor
		Square();

		// constructor with params
		Square(const std::string&, double);

		// asked to implement by problem 
		Square(const string& n, double nx, double ny, double nside);
		
		// copy constructor
		Square(const Square&);

		// setters & getters
		void setSides(double newSides);
		double getSides() const;

		// perimeter & area methods
		double sqPerimeter();
		double sqArea();
		
};

class Circle : public CenteredShape{ // shape with a center and a radius
	private:
		double Radius;
	public:
		// default constructor
		Circle();

		// constructor with params
		Circle(const std::string&, double, double, double);

		// copy constructor
		Circle(const Circle&);

		// setters & getters
		void setRadius(double newRadius);
		double getRadius() const;

		// perimeter & area methods
		double cirPerimeter();
		double cirArea();
};

#endif

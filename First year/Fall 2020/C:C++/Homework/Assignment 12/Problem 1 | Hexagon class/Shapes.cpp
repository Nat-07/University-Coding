// please refer to shapes.h for methods documentation

/*
    CH-230-A
    a12 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <iostream> 
#include "Shapes.h"
#include <math.h>
using namespace std; 

//-----------------------------------------------------

// default constructor needed to init values for CenteredShape class
Shape :: Shape(){
	name = "default_name";
}

Shape::Shape(const string& n) : name(n){

}

void Shape::printName() const{
	cout << name << endl;
}

//-----------------------------------------------------

// default constructor needed to init values for RegularPolygon class
CenteredShape :: CenteredShape(){
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){
	x = nx;
	y = ny;
}

//-----------------------------------------------------

/* 
	For a long time I was getting linker errors, but was able to fix this by 
	creating default constructors for all derived classes. Which makes sense,
	as we are deriving a class from another class that other class needs to 
	have it's values initialized. Thus we need to go through all the classes 
	and make a defult constructor for them. 
*/
RegularPolygon :: RegularPolygon(){
	EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl):
	CenteredShape(n,nx,ny){
	EdgesNumber = nl;
}

//-----------------------------------------------------

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny){
	Radius = r;
}

//-----------------------------------------------------

// param constructor
Hexagon :: Hexagon(double newSides, const string& newColor){
	sides = newSides;
	color = newColor;
}

// copy contructor
Hexagon :: Hexagon(const Hexagon& info){
	sides = info.sides;
	color = info.color;
}

// deconstructor
Hexagon :: ~Hexagon(){
	cout << "Deconstructor run!" << endl;
}

// getters & setters
double Hexagon :: getSides() const{
	return sides;
}

void Hexagon :: setSides(double newSides){
	sides = newSides;
}

std::string Hexagon :: getColor() const{
	return color;
}

void Hexagon :: setColor(std::string newColor){
	newColor = color;
}

// methods
double Hexagon :: hexPerimeter(){
	return (((3*sqrt(3))/2)*sides*sides);
}

double Hexagon :: hexArea(){
	return (6*sides);
}

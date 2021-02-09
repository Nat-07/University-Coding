// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <math.h>

using namespace std; 

/*
    CH-230-A
    a11 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// -----------------------------------------

// default constructor
Shape :: Shape(){
	name = "default_name";
}

// copy constructor
Shape :: Shape(const Shape& copyItem){
	cout << "Shape copy constructor run!" << endl;
	name = copyItem.name;
}

// build shape with name
Shape::Shape(const string& n) : name(n){}

// setters and getters
void Shape :: setName(string nameInput){
	name = nameInput;
}

string Shape :: getName(){
	return name;
}

// print method
void Shape::printName() const{
	cout << name << endl;
}

// -----------------------------------------
// CenteredShape

// default constructor
CenteredShape::CenteredShape(){
	x = 0;
	y = 0;
}

// copy constructor
CenteredShape :: CenteredShape(const CenteredShape& t){
	cout << "CenteredShape copy constructor run!" << endl;
	x = t.x;
	y = t.y;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){
	x = nx;
	y = ny;
}

void CenteredShape :: move(double newX, double newY){
	x = newX;
	y = newY;
}


// setters & getters
void CenteredShape :: setX(double newX){
	x = newX;
}

void CenteredShape :: setY(double newY){
	y = newY;
}

double CenteredShape :: getX() const{
	return x;
}

double CenteredShape :: getY() const{
	return y;
}

// -----------------------------------------

// default constructor
RegularPolygon :: RegularPolygon(){
	EdgesNumber= 3;
}

// copy constructor
RegularPolygon :: RegularPolygon(const RegularPolygon& e){
	cout << "RegularPolygon copy constructor run!" << endl;
	EdgesNumber = e.EdgesNumber;
}


// getter & setters
void RegularPolygon :: setEdgesNumber(int newEdgesNumber){
	EdgesNumber = newEdgesNumber;
}

int RegularPolygon :: getEdgesNumber() const{
	return EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl):
	CenteredShape(n,nx,ny){
	EdgesNumber = nl;
}

// -----------------------------------------

// default constructor
Circle :: Circle(){
	Radius = 3;
}

// param constructor
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny){
	Radius = r;
}

// copy constructor
Circle :: Circle(const Circle& r){
	cout << "Circle copy constructor run!" << endl;
	Radius = r.Radius;
}


// getter & setters
void Circle :: setRadius(double newRadius){
	Radius = newRadius;
}

double Circle :: getRadius() const{
	return Radius;
}


// area & Perimeter
double Circle :: cirPerimeter(){
	return (2*M_PI*Radius);
}

double Circle :: cirArea(){
	return (M_PI * (Radius*Radius));
}

// -----------------------------------------

// default constructor
Rectangle :: Rectangle(){
	height = 4.5;
	width = 5.5;
}

// As asked by question (constructor for rectangle) 
Rectangle :: Rectangle(const string& n, double nx, double ny, double nwidth, 
	double nheight) : RegularPolygon(n, nx, ny, 4){
	
		width = nwidth;
		height = nheight;
}

//param constructor
Rectangle :: Rectangle(const string& n, double param1, double param2){
	height = param1;
	width = param2;
}


// copy constructor
Rectangle :: Rectangle(const Rectangle& copyItem){
	cout << "Rectangle copy constructor run!" << endl;
	width = copyItem.width;
	height = copyItem.height;
	
}


// getter & setters
void Rectangle :: setHeight(double newHeight){
	height = newHeight;
}

void Rectangle :: setWidth(double newWidth){
	width = newWidth;
}

double Rectangle :: getHeight() const{
	return height;
}

double Rectangle :: getWidth() const{
	return width;
}


// area & Perimeter
double Rectangle :: recPerimeter(){
	return (2*(height+width));
}

double Rectangle :: recArea(){
	return (height*width);
}

// -----------------------------------------


// default constructor
Square :: Square(){
	sides = 4.5;
}

// As asked by question (constructor for square) 
Square :: Square(const string& n, double nx, double ny, double nside) : 
		Rectangle (n, nx, ny){
		sides = nside;
}

// copy constructor
Square :: Square(const Square& s){
	cout << "Square copy constructor run!" << endl;
	sides = s.sides;
}

// param constructor
Square :: Square(const string& n, double param){
	sides = param;
}


// getter & setters
void Square :: setSides(double newSide){
	sides = newSide;
}

double Square :: getSides() const{
	return sides;
}

// area & Perimeter
double Square :: sqPerimeter(){
	return (4*sides);
}

double Square :: sqArea(){
	return (sides*sides);
}

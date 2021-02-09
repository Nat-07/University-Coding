#include <iostream>
#include "Complex.h"
using namespace std;

/*
    CH-230-A
    a13 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// default constructor
Complex :: Complex(){
	realPart = 0;
	imaginaryPart = 0;
	squared = false;
	squared_part = 0;
}

// parametric constructor
Complex :: Complex(int realPartParam, int imaginaryPartParam){
	realPart = realPartParam;
	imaginaryPart = imaginaryPartParam;
	squared = false;
	squared_part = 0;
}

// parametric constructor when values are squared
Complex :: Complex(int realPartParam, int imaginaryPartParam, bool newSquared, 
	int newSquaredPart){
	realPart = realPartParam;
	imaginaryPart = imaginaryPartParam;
	squared = newSquared;
	squared_part = newSquaredPart;
}

// empty destructor
Complex :: ~Complex(){}


// copy constructor
Complex :: Complex(const Complex& src) {
	realPart = src.realPart;
	imaginaryPart = src.imaginaryPart;
	squared = src.squared;
	squared_part = src.squared_part;
}

// setter methods
void Complex :: setRealPart(int newRealPart){
	realPart = newRealPart;
}

void Complex :: setImaginaryPart(int newImaginaryPart){
	imaginaryPart = newImaginaryPart;
}

void Complex :: setBool(bool newTrue){
	squared = newTrue;
}

void Complex :: setSquared_part(int newSPart){
	squared_part = newSPart;
}

// getter methods
int Complex :: getRealPart(){
	return realPart;
}

int Complex :: getImaginaryPart(){
	return imaginaryPart;
}

bool Complex :: getSquared(){
	return squared;
}

int Complex :: getSquaredPart(){
	return squared_part;
}


// service methods

// conjugation and return the answer
Complex Complex :: conjugationMethod(){
	Complex returnValue(realPart,imaginaryPart*-1);
	return returnValue;
}

// overloading << operator 
std::ostream& operator << (std::ostream& out, const Complex z){

	if(z.squared == false){ // test if number has a squared portion
		if(z.imaginaryPart >= 1){
			// If positive number, then plus, otherwise minus will be there
			out << z.realPart << "+" << z.imaginaryPart <<"i"<< endl;
		}else{
			out << z.realPart << z.imaginaryPart<< "i" << endl;
		}
	}else{
		if(z.imaginaryPart >= 1){
			// If positive number, then plus, otherwise minus will be there
			out << z.realPart << "+" << z.imaginaryPart-z.squared_part <<"i" 
			<< "+" << z.squared_part << "i^2" << endl;
		}else{
			// subtract as we we added before
			out << z.realPart << z.imaginaryPart-z.squared_part <<"i" << 
			z.squared_part << "i^2" << endl;
		}
	}
	return out;
}

// overloading >> operator 
std::istream& operator >> (std::istream& in , Complex &z){
	in >> z.realPart >> z.imaginaryPart;
	return in;
}

// overloading + operator 
Complex operator + (const Complex &first, const Complex &second){
	Complex answerObject;

	// adding
	int answer1 = first.realPart + second.realPart;
	int answer2 = first.imaginaryPart + second.imaginaryPart;

	// set values
	answerObject.setRealPart(answer1);
	answerObject.setImaginaryPart(answer2);

	// return the answer object
	return answerObject;
}

// overloading - operator 
Complex operator - (const Complex &first, const Complex &second){

	// subtracting
	int answer1 = first.realPart - second.realPart;
	int answer2 = first.imaginaryPart - second.imaginaryPart;

	// creating the object
	Complex answerObject(answer1,answer2);

	// return the answer object
	return answerObject;
}


// overloading * operator 
Complex operator * (const Complex &first , const Complex &second){

	// multiplying the values
	int answer1 = first.realPart * second.realPart;
	int answer2 = first.realPart * second.imaginaryPart;
	int answer3 = first.imaginaryPart * second.realPart;
	int answer4 = first.imaginaryPart * second.imaginaryPart;

	// creating the object
	Complex answerObject(answer1, answer2 + answer3 + answer4, true, answer4);

	// return the answer object
	return answerObject;
}

// when equating 
Complex& Complex :: operator = (const Complex &obj){

	// set current object's realPart and imaginaryPart equal to obj's
	this->realPart = obj.realPart;
	this->imaginaryPart = obj.imaginaryPart;
	this->squared = obj.squared;
	this->squared_part = obj.squared_part;

	// return the current instance
	return *this;
}

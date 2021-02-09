#include <iostream>
#include "Complex.h"

using namespace std;

/*
    CH-230-A
    a10 p8.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// default constructor
Complex :: Complex(){
	realPart = 0;
	imaginaryPart = 0;
}

// specific values constructor
Complex :: Complex(int realPartParam, int imaginaryPartParam){
	realPart = realPartParam;
	imaginaryPart = imaginaryPartParam;
}

// empty destructor
Complex :: ~Complex(){}

Complex :: Complex(const Complex& src) {
	realPart = src.realPart;
	imaginaryPart = src.imaginaryPart;
}


// setter methods
void Complex :: setRealPart(int newRealPart){
	realPart = newRealPart;
}

void Complex :: setImaginaryPart(int newImaginaryPart){
	imaginaryPart = newImaginaryPart;
}


// getter methods
int Complex :: getRealPart(){
	return realPart;
}

int Complex :: getImaginaryPart(){
	return imaginaryPart;
}

// service methods

// conjugation and return the answer
Complex Complex :: conjugationMethod(){
	Complex returnValue(realPart,imaginaryPart*-1);
	return returnValue;
}

// add and return the answer
Complex Complex :: plusMethod(Complex complex){
	Complex returnValue(realPart+complex.getRealPart(), 
	imaginaryPart+complex.getImaginaryPart());
	return returnValue;
}

// subtract and return the answer
Complex Complex :: subMethod(Complex complex){
	Complex returnValue(realPart-complex.getRealPart(), 
	imaginaryPart-complex.getImaginaryPart());
	return returnValue;
}

// multiply and return the answer
Complex Complex :: multiMethod(Complex complex){
	Complex returnValue(realPart*complex.getRealPart()-
	imaginaryPart*complex.getImaginaryPart(), 
	imaginaryPart*complex.getRealPart()+realPart*complex.getImaginaryPart());
	return returnValue;
}

// print method to print answer to screen
void Complex::print(){
	// If positive number, then plus, otherwise minus will be there
	if(imaginaryPart > 1){
		cout << realPart << "+" << imaginaryPart <<"i"<< endl;
	}else{
		cout << realPart << imaginaryPart<< "i" << endl;
	}
	
	cout << "___________________________________________________________\n" <<
	endl;
}


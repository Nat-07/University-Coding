#include <iostream>
#include "fraction.h"
using namespace std;

/*
    CH-230-A
    a12 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(void){
	// create two instances of Fraction
	Fraction obj1;
	Fraction obj2;
	
	// use overloaded << and >>
	cout << "Enter first numerator and denominator: " << endl;;
	cin >> obj1;
	cout << "Enter second numerator and denominator: " << endl;;
	cin >> obj2;

	// tetsing which is greater using the overloaded operator
	if(obj1 > obj2){
		// if return true, obj1 is greater
		cout << obj1 << " is greater" << endl;
		
	}else{
		// if return false, obj2 is greater
		cout << obj2 << " is greater" << endl;
	}

	// using overloaded + & -
	cout << "Addition of fractions: ";
	cout << obj1 + obj2 << endl;

	cout << "Subtraction of fractions: ";
	cout << obj1 - obj2 << endl;

	// new line for formatting
	cout << "\n";

	return 0;
}

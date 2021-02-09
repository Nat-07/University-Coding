#include <iostream>
#include "fraction.h"
using namespace std;

/*
    CH-230-A
    a12 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(void){
	// create two instances of Fraction
	Fraction obj1;
	Fraction obj2;
	
	// overloaded cin
	cin >> obj1;
	cin >> obj2;

	cout << "First entered: " << obj1;
	cout << "Second entered: " << obj2 << endl;

	cout << "Multiplication of fractions: ";
	// using the overloaded * symbol on instances
	cout << obj1 * obj2;

	cout << "Quotient of fractions: ";
	// using the overloaded / symbol on instances
	cout << obj1 / obj2;

	// new line for formatting
	cout << "\n";

	return 0;
}

#include <iostream>
#include <cstdlib>
#include "Complex.h"

/*
    CH-230-A
    a10 p8.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

using namespace std;

int main(int argc, char** argv){

	int firstValue, secondValue, thirdValue, fourthValue;
	Complex fistInstance;
	Complex secondInstance;
	Complex thirdInstance;
	Complex fourthInstance; 
	Complex fithInstance;
	Complex SixthInstance;

	cout << "Enter inputs complex number" << endl;
	cout << "Real: ";
	cin >> firstValue;
	cout << "Imaginary: ";
	cin >> secondValue;
	fistInstance.setRealPart(firstValue);
	fistInstance.setImaginaryPart(secondValue);
	cout << "You entered as the first complex number: " << endl;
	fistInstance.print();

	cout << "Enter inputs for complex number: " << endl;
	cout << "Real: ";
	cin >> thirdValue;
	cout << "Imaginary: ";
	cin >> fourthValue;
	secondInstance.setRealPart(thirdValue);
	secondInstance.setImaginaryPart(fourthValue);
	cout << "You entered as the second complex number: " << endl;
	secondInstance.print();

	//Conjugate
	thirdInstance = fistInstance.conjugationMethod();
	cout << "The conjugate of the first complex number is: ";
	thirdInstance.print();

	//Addition
	fourthInstance = fistInstance.plusMethod(secondInstance);
	cout << "Addition of the complex numbers: ";
	fourthInstance.print();

	//Subtraction
	fithInstance = fistInstance.subMethod(secondInstance);
	cout << "Subtraction of the complex numbers: ";
	fithInstance.print();

	//Multiplication
	SixthInstance = fistInstance.multiMethod(secondInstance);
	cout << "Multiplication of the complex numbers: ";
	SixthInstance.print();	
	
    return 0;
}

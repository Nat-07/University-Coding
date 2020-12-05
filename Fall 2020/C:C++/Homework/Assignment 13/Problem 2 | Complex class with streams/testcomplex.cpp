#include <iostream>
#include <cstdlib>
#include "Complex.h"
#include <fstream>  
using namespace std;

/*
    CH-230-A
    a13 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(int argc, char** argv){

	// three instances of the class Complex
	Complex firstInstance;
	Complex secondInstance;
	Complex thirdInstance;

	// getting first complex number from in1.txt
	ifstream in("in1.txt");
    // checking for error
	if(!in.good()){
		cerr << "Fault rose while opening the file!" << endl;
        // quit the program with error
		exit(1);
	}else{
		// use overloaded >> to set values
		in >> firstInstance;
		// close file
		in.close();
	}

	// getting second complex # from in2.txt
	ifstream in2("in2.txt");
    // checking for error
	if(!in2.good()){
		cerr << "Fault rose while opening the file!" << endl;
        // quit the program with error
		exit(1);
	}else{
		// use overloaded >> to set values
		in2 >> secondInstance;
		// close file
		in.close();
	}

	
	// print to the screen the two complex #s
	cout << "First complex number: ";
	cout << firstInstance;

	cout << "Second complex number: ";
	cout << secondInstance;
	
	// for output formatting
	cout << "_____________________________________________________\n" << endl;

	//compute addition + print
	cout << "Addition of the complex numbers: ";
	cout << firstInstance + secondInstance;

	// compute subtraction + print
	cout << "Subtraction of the complex numbers: ";
	cout << firstInstance - secondInstance;

	// compute multiplication + print
	cout << "Multiplication of the complex numbers: ";
	cout << firstInstance * secondInstance;

	cout << "_____________________________________________________\n" << endl;
	// showing that overloaded = works
	thirdInstance = secondInstance;
	
	// doing the same again but showing it with the thirdInstance 
	//compute addition + print with thirdInstance 
	cout << "Addition of the complex numbers (thirdInstance): ";
	cout << firstInstance + thirdInstance;

	// compute subtraction + print with thirdInstance 
	cout << "Subtraction of the complex numbers (thirdInstance): ";
	cout << firstInstance - thirdInstance;

	// compute multiplication + print with thirdInstance 
	cout << "Multiplication of the complex numbers (thirdInstance: ";
	cout << firstInstance * thirdInstance;

	// write and create if not found
	ofstream out("output.txt");
    // checking for error
	if (!out.good()){
		cerr << "Fault rose while the opening output file!" << endl;
        // quit the program with error
		exit(1);
	}

	in.clear(); //clear eof bit

	// write to file addition, subtraction, and multiplication
    out << firstInstance + secondInstance;
	out << firstInstance - secondInstance;
	out << firstInstance * secondInstance;
	
	// close file
	out.close();

    return 0;
}

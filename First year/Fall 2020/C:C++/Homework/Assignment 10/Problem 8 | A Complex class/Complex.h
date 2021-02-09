#include <string> // defines standard C++ string class

using namespace std;

/*
    CH-230-A
    a10 p8.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Complex{
	private:  // data members are private
		int realPart;
		int imaginaryPart;

		
	public: // business logic methods are public

		// constructors
		Complex();
		Complex(int realPartParam, int imaginaryPartParam);
		// copy constructor
		Complex(const Complex&);
		// deconstructor
		~Complex();

		// setter methods given
		void setRealPart(int newRealPart);
		void setImaginaryPart(int newImaginaryPart);

		// getter method given
		int getRealPart();
		int getImaginaryPart();

		// methods for conjugation, +, -, *
		Complex plusMethod(Complex complex);
		Complex subMethod(Complex complex);
		Complex multiMethod(Complex complex);
		Complex conjugationMethod();

		// print method
		void print();
};

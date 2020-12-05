#include <string> // defines standard C++ string class
using namespace std;

/*
    CH-230-A
    a13 p2.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Complex{
	private:  // data members are private
		int realPart;
		int imaginaryPart;
		bool squared;
		int squared_part;

		
	public:
		// constructors
		Complex();
		// parametric constructor normal 
		Complex(int realPartParam, int imaginaryPartParam);
		// parametric constructor changed
		Complex(int realPartParam, int imaginaryPartParam, bool newSquared, 
		int newSquaredPart);
		// copy constructor
		Complex(const Complex&);
		// deconstructor
		~Complex();

		// setter methods given
		void setRealPart(int newRealPart);
		void setImaginaryPart(int newImaginaryPart);
		void setBool(bool newTrue);
		void setSquared_part(int newSquaredPart);

		// getter method given
		int getRealPart();
		int getImaginaryPart();
		bool getSquared();
		int getSquaredPart();

		// methods for +, -, *, conjugation
		Complex plusMethod(Complex complex);
		Complex subMethod(Complex complex);
		Complex multiMethod(Complex complex);
		Complex conjugationMethod();

		// print method
		void print();

		// prototyping the overloading <<, >>, +, *, -, and = 
		friend std::ostream& operator << (std::ostream &out, 
		const Complex z);
		
		friend std::istream& operator >> (std::istream &in , Complex &z);

		friend Complex operator + (const Complex &first , 
		const Complex &second);

		friend Complex operator * (const Complex &w , const Complex &z);

		friend Complex operator - (const Complex &first, 
		const Complex &second);
		
		Complex& operator = (const Complex &obj);
};

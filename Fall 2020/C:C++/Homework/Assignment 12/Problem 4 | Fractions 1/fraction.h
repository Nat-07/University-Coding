// simple class for fractions

/*
    CH-230-A
    a12 p4.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction{
	private: // internal implementation is hidden
		int num; // numerator
		int den; // denominator

		int gcd(int a, int b); // calculates the gcd of a and b
		int lcm(int a, int b);

	public:
		Fraction();	// empty constructor

		Fraction(int, int = 1); /* constructor taking values for fractions and
		 integers. Denominator by default is 1 */

		void print(); // prints it to the screen

		// prototyping the overloading <<, >>, *, and / operators 
		friend std::ostream& operator << (std::ostream& out, 
		const Fraction z);
		
		friend std::istream& operator >> (std::istream& in , Fraction &z);
		
		friend Fraction operator * (const Fraction &w , const Fraction &z);

		friend Fraction operator / (const Fraction &frist , 
		const Fraction &second);
};

#endif /* FRACTION_H_ */

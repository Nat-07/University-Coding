// simple class for fractions

/*
    CH-230-A
    a12 p5.[cpp]
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
		friend std::ostream& operator << (std::ostream &out, 
		const Fraction z);
		
		friend std::istream& operator >> (std::istream &in , Fraction &z);
		
		// overloaded *
		friend Fraction operator * (const Fraction &w , const Fraction &z);

		// overloaded /
		friend Fraction operator / (const Fraction &frist , 
		const Fraction &second);

		// overloaded +
		friend Fraction operator + (const Fraction &frist , 
		const Fraction &second);

		// overloaded -
		friend Fraction operator - (const Fraction &first, 
		const Fraction &second);

		// overloaded =
		Fraction& operator = (const Fraction &obj);

		// overloaded >
		friend bool operator > (Fraction const& a, Fraction const& b);

		// overloaded <
		friend bool operator < (Fraction const& a, Fraction const& b);

};

#endif /* FRACTION_H_ */

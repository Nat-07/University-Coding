#include <iostream>
#include "fraction.h"

/*
    CH-230-A
    a12 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// default constructor
Fraction::Fraction(){
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

// methods
int Fraction::gcd(int a, int b){
	// value to return
	int tmp_gcd = 0;

	/*
		cycle through and check if both equal to zero. Starting at 1 to get
		the lowest value.

		Set greater than or equal to a in case gcd is 2
	*/
	
	for(int i = 2; i <= a; i++){
		if(a % i == 0 && b % i == 0){
			tmp_gcd = i;
			// break when found
			break;
		}
	}

	// return the gcd
	return tmp_gcd;
}

// find lcm
int Fraction::lcm(int a, int b){
	return a * b / gcd(a, b);
}

// print method
void Fraction :: print(){
	std::cout << num << "/" << den << std::endl;
}

// overloading << operator 
std::ostream& operator << (std::ostream& out, const Fraction z){
	out << z.num << "/" << z.den;
	return out;
}

// overloading >> operator 
std::istream& operator >> (std::istream& in , Fraction &z){
	in >> z.num >> z.den;
	return in;
}

// overloading * operator 
Fraction operator * (const Fraction &frist , const Fraction &second){
	Fraction answer;

	// multiplying fractions together
	int answerN = frist.num * second.num;
	int answerD = frist.den * second.den;

	// setting answers
	answer.num = answerN;
	answer.den = answerD;

	// return the answer object
	return answer;
}

// overloading / operator 
Fraction operator / (const Fraction &first , const Fraction &second){
	// create am answer instance
	Fraction answer2;

	// multiplying by reciprocal to get division
	int answer2N = first.num * second.den;
	int answer2D = first.den * second.num;

	// setting answers
	answer2.num = answer2N;
	answer2.den = answer2D;

	// return the answer instance
	return answer2;
}

// overloading + operator 
Fraction operator + (const Fraction &first, const Fraction &second){
	Fraction answer3;

	// running the lcm method with the 2 arguments
	int lcm = answer3.lcm(first.den, second.den);

	// setting the numerator equal to the equation
	answer3.num = first.num * lcm/first.den+second.num*lcm/second.den;

	// denominator is just the lowest common factor
	answer3.den = lcm;

	return answer3;
}

// overloading - operator 
Fraction operator - (const Fraction &first, const Fraction &second){
	Fraction answer4;

	// running the lcm method with the 2 arguments
	int lcm = answer4.lcm(first.den, second.den);

	// setting the numerator equal to the equation
	answer4.num = first.num * lcm/first.den-second.num*lcm/second.den;

	// denominator is just the lowest common factor
	answer4.den = lcm;

	return answer4;
}

// overloading = operator 
Fraction& Fraction :: operator = (const Fraction &obj){

	// set current object's num and den equal to obj's
	this->num = obj.num;
	this->den = obj.den;

	// return the current instance
	return *this;
}


// overloaded >
bool operator > (Fraction const& a, Fraction const& b){

	// setting equal to floats to avoid any integer problems with deviding
	float aNum = a.num;
	float aDen = a.den;
	float bNum = b.num;
	float bDen = b.den;

	// results
	float aResult = aNum/aDen;
	float bResult = bNum/bDen;

	// test if a is larger and return true of false
	if (aResult > bResult){
		return true;
	}else{
		return false;
	}
}

// overloaded <
bool operator < (Fraction const& a, Fraction const& b){

	// setting equal to floats to avoid any integer problems with deviding
	float aNum = a.num;
	float aDen = a.den;
	float bNum = b.num;
	float bDen = b.den;

	// results
	float aResult = aNum/aDen;
	float bResult = bNum/bDen;

	// test if b is larger and return true of false
	if(aResult < bResult){
		return true;
	}else{
		return false;
	}
}

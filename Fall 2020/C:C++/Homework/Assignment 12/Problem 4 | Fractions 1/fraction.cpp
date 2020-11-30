#include <iostream>
#include "fraction.h"

/*
    CH-230-A
    a12 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// default constructor
Fraction::Fraction(){
	num = 1;
	den = 1;
}

// parametric constructor
Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

// methods
int Fraction::gcd(int a, int b){
	int tmp_gcd = 1;
	// Implement GCD of two numbers;
	return tmp_gcd;
}

int Fraction::lcm(int a, int b){
	return a * b / gcd(a, b);
}

// print method
void Fraction :: print(){
	std::cout << num << "/" << den << std::endl;
}

// overloading << operator 
std::ostream& operator << (std::ostream& out, const Fraction z){
	out << z.num << "/" << z.den <<std::endl;;
	return out;
}

// overloading >> operator 
std::istream& operator >> (std::istream& in , Fraction &z){
	in >> z.num >> z.den;
	return in;
}

// overloading * operator 
Fraction operator * (const Fraction &first , const Fraction &second){
	Fraction answer;

	// multiplying fractions together
	int answerN = first.num * second.num;
	int answerD = first.den * second.den;

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

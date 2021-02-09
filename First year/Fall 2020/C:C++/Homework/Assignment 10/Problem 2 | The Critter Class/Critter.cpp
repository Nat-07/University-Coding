#include <iostream>
#include "Critter.h"
using namespace std;

/*
    CH-230-A
    a10 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// setter methods
void Critter::setName(string& newname){
	name = newname;
}

void Critter::setHunger(int newhunger){
	hunger = newhunger;
}

// my setters
void Critter::setNumFriends(int newNumFriends){
	numFriends = newNumFriends;
}

void Critter::setAge(int newAge){
	age = newAge;
}

// service method
void Critter::print(){
	// adapted print
	cout << "I am " << name << ". My hunger level is " << hunger << "," << 
	" my age is " << age << ", and I have " << numFriends << " friend(s)." <<
	endl;
}

// getter methods
int Critter::getHunger() {
	return hunger;
}

// my getters
int Critter::getAge(){
	return age;
}

int Critter::getNumberOfFriends(){
	return age;
}

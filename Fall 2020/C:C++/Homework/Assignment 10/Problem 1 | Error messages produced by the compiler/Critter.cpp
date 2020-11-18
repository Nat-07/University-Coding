#include <iostream>
#include "Critter.h"

//using namespace std;

/*
    CH-230-A
    a10 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

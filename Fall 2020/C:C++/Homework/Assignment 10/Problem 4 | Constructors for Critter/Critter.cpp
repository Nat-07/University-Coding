#include <iostream>
#include "Critter.h"

using namespace std;

/*
    CH-230-A
    a10 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

Critter :: Critter(){
	// nothing supplied, change name and height
	cout << "\nThe first constructor has been fired" << endl;
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
}

Critter :: Critter(std::string nameParam){
	cout << "\nThe second constructor has been fired" << endl;
	// set name and height
	name = nameParam;
	height = 5;
	hunger = 0;
	boredom = 0;
}

// Take either 3 or 4 parameters (flexable)
Critter :: Critter(std::string nameParam, int hungerParam, int boredomParam, 
	double hightParam){
	cout << "\nThe third constructor has been fired" << endl;
	name = nameParam;
	height = hightParam;
	hunger = hungerParam;
	boredom = boredomParam;
}

// setter methods
void Critter::setName(string& newname){
	name = newname;
}

// getter methods
int Critter::getHunger() {
	return hunger;
}

// print method
void Critter::print(){
	// adapted print
	cout << "\nName: " << name << "\nHunger level: " << hunger <<
	"\nBordom: " << boredom << "\nHeight: " << height << endl;
	cout << "___________________________________________________________\n" <<
	endl;
}

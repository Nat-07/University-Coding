#include <iostream>
#include "Critter.h"

using namespace std;

/*
    CH-230-A
    a10 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// methods to change back and forth between int and double
double Critter :: toDouble(int hungerParam){
	// no () around hungerParam as it would mess up order of operations of c++
	return (double)hungerParam/10;
}

int Critter :: toInt(double hungerParam){
	return (int)(hungerParam*10);
}

Critter :: Critter(){
	// nothing supplied, change name and height
	cout << "\nThe first constructor has been fired" << endl;
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	thirst = hunger;
}

Critter :: Critter(std::string nameParam){
	cout << "\nThe second constructor has been fired" << endl;
	// set name and height
	name = nameParam;
	height = 5;
	hunger = 0;
	boredom = 0;
	thirst = hunger;
}

// Take either 3 or 4 parameters (flexable)
Critter :: Critter(std::string nameParam, int hungerParam, int boredomParam, 
	double hightParam){
	cout << "\nThe third constructor has been fired" << endl;
	name = nameParam;
	height = hightParam;
	hunger = toDouble(hungerParam);
	boredom = boredomParam;
	thirst = hunger;
}

// Thirst constructor
Critter :: Critter(std::string nameParam, int hungerParam, int boredomParam, 
		double heightParam, double thirstParam){
	cout << "\nThe fourth constructor has been fired" << endl;
	name = nameParam;
	height = heightParam;
	hunger = toDouble(hungerParam);
	boredom = boredomParam;
	// tunring to double as need to change to int in print (as copy of hunger)
	thirst = toDouble(thirstParam);
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
	cout << "\nName: " << name << "\nHunger level: " << toInt(hunger) <<
	"\nBordom: " << boredom << "\nHeight: " << height << "\nThirst: " <<
	toInt(thirst) << endl;
	cout << "___________________________________________________________\n" <<
	endl;
}


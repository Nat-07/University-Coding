#include <iostream>
#include <cstdlib>
#include "Critter.h"

/*
    CH-230-A
    a10 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

using namespace std;

int main(int argc, char** argv){

	// first critter
	Critter c1;
	c1.print();


	// ----------------------
	// second critter (name)
	Critter c2("Fred");
	c2.print();


	// ----------------------
	// third critter (name, hunger, bordom, height)

	Critter c3("Zach", 2, 5, 6);
	c3.print();


	// ----------------------
	// Fourth critter (name, hunger, bordom, height) But height is null

	Critter c4("Brian", 2, 7);
	c4.print();
	
    return 0;
}

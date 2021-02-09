#include <iostream>
#include <cstdlib>
#include "Critter.h"

/*
    CH-230-A
    a10 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

using namespace std;

int main(int argc, char** argv){
	// vars
	Critter c;
	string name;
	int hunger, age, numFriends;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	// get and set name
	getline(cin, name);
	c.setName(name);

	// get and set hunger
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	// age properties & set
	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	// Number of friends properties and set
	cout << "Number of friends: ";
	cin >> numFriends;
	c.setNumFriends(numFriends);
	
	cout << "You have created:" << endl;

	// activate the print method
	c.print();

    return 0;
}

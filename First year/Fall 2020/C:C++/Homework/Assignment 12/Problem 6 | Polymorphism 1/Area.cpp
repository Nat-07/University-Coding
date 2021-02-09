#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

/*
    CH-230-A
    a12 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// given area class
Area::Area(const char* n) {
    // copy to color
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

// destructor
Area::~Area(){
}

// getter
void Area::getColor() const {
	cout << "\n" << color << ": ";
}

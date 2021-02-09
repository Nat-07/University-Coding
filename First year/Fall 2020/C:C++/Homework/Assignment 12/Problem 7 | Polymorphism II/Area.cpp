#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

/*
    CH-230-A
    a12 p7.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area(){
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}

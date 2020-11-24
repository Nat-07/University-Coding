#include <iostream>
#include "Shapes.h"
using namespace std; 

/*
    CH-230-A
    a12 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(int argc, char** argv){

    // 2 hexagons with the param constructor
    Hexagon obj1(5.313, "blue");
    Hexagon obj2(1.35, "green");
    
    // copy constructor
    Hexagon obj3 = obj2;

    // printing obj1 message + running getting, area & perimeter methods
    cout << "Obj1 color: " << obj1.getColor() << endl;
    cout << "Obj1 side: " << obj1.getSides() << endl;
    cout << "Obj1 Area: " << obj1.hexArea() << endl;
    cout << "Obj1 Area: " << obj1.hexPerimeter() << endl;

    // formatting new line
    cout << "\n";

    // printing obj2 message + running getting, area & perimeter methods
    cout << "Obj2 color: " << obj2.getColor() << endl;
    cout << "Obj2 side: " << obj2.getSides() << endl;
    cout << "Obj2 Area: " << obj2.hexArea() << endl;
    cout << "Obj2 Area: " << obj2.hexPerimeter() << endl;

    // formatting new line
    cout << "\n";
    
    // printing obj3 message + running getting, area & perimeter methods
    cout << "Obj3 color: " << obj3.getColor() << endl;
    cout << "Obj3 side: " << obj3.getSides() << endl;
    cout << "Obj3 Area: " << obj3.hexArea() << endl;
    cout << "Obj3 Area: " << obj3.hexPerimeter() << endl;

    cout << "\n";

    return 0;
}

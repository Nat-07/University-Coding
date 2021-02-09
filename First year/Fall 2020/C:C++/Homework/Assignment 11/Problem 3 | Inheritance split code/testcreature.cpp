#include <iostream>
#include <cstdlib>
#include "Creature.h"
using namespace std;

/*
    CH-230-A
    a11 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){ 
    // Creating Creature instance
    cout << "Creating instance of Creature.\n";
    Creature c;
    // run method for class Creature
    c.run();

    // Wizard Creature instance + method
    cout << "\nCreating instance of Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    // Superman Creature instance + method
    cout << "\nCreating instance of Superman.\n";
    Superman s;
    s.run();
    s.flown();
    

    // Hedgehog Creature instance + method 
    cout << "Creating instance of Hedgehog.\n";
    Hedgehog h;
    h.run();
    h.length();
    

    return 0;
} 

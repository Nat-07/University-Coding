#include <iostream>
#include "Creature.h"
using namespace std;

/*
    CH-230-A
    a11 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

//------------------------------------------------------
// Creature methods
Creature::Creature(): distance(10){
    cout << "Creature constructor run" << endl;
}    

// Creature deconstructor
Creature :: ~Creature(){
    cout << "Creature deconstructor run" << endl;
}

// run method
void Creature::run() const{ 
    cout << "Creature running " << distance << " meters!\n";
}  


//------------------------------------------------------

// Wizard methods
Wizard::Wizard() : distFactor(3){
    cout << "Wizard constructor run" << endl;
}

// Wizard deconstructor
Wizard :: ~Wizard(){
    cout << "Wizard deconstructor run" << endl;
}

// hover method
void Wizard::hover() const{
    cout << "Wizard hovering " << (distFactor * distance) << " meters!\n";
}

//------------------------------------------------------

// Hedgehog constructor
Hedgehog :: Hedgehog() : lengthOfSpikes(2.5){
    cout << "Hedgehog constructor run" << endl;
}

// Hedgehog deconstructor
Hedgehog :: ~Hedgehog(){
    cout << "Hedgehog deconstructor run" << endl;
}

// Hedgehog method
void Hedgehog::length() const{
    cout << "Length of all Hedgehog spikes = " <<
    (lengthOfSpikes * distance) << "cm in total!\n" << endl;
}

//------------------------------------------------------

// Superman constructor
Superman :: Superman () : fullBlocksFlown(5){
    cout << "Superman constructor run" << endl;
}

// Superman deconstructor
Superman :: ~Superman(){
    cout << "Superman deconstructor run" << endl;
}

// Superman method
void Superman :: flown() const {
    cout << "Superman has flown " << (fullBlocksFlown * distance) <<
    " blocks!\n" << endl;
}

//------------------------------------------------------

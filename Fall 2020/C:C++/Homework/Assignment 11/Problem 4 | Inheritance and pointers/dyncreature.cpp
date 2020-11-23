#include <iostream>
#include <cstdlib>
#include <string>
#include "Creature.h"
using namespace std;

/*
    CH-230-A
    a11 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){ 
    // user input
    string userInput;
    // pinter for class
    Wizard *ptr_wizard;
    Hedgehog *ptr_hedgehog;
    Superman *ptr_superman;

    do{
        getline(cin, userInput);
        // if user input is quite stop the code
        if(userInput == "quit"){
            exit(0);
        }else if(userInput == "wizard"){
            // pointer to new dynamically allocated instace of wizard
            ptr_wizard = new Wizard;

            // running methods
            ptr_wizard -> run();
            ptr_wizard -> hover();

            // dealocate memory
            delete ptr_wizard;
        }else if(userInput == "Hedgehog"){
            // pointer to new dynamically allocated instace of wizard
            ptr_hedgehog = new Hedgehog;

            // running methods
            ptr_hedgehog -> run();
            ptr_hedgehog -> length();

            // dealocate memory
            delete ptr_hedgehog;
            
            
        }else if(userInput == "Superman"){
            ptr_superman = new Superman;

            // running methods
            ptr_superman -> run();
            ptr_superman -> flown();

            // dealocate memory
            delete ptr_superman;
        }
    
    // run forver unless quit is entered
    }while(1);

    return 0;
} 

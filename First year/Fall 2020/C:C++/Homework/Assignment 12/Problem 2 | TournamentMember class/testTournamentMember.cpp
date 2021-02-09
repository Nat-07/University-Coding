#include <iostream> 
#include "TournamentMember.h"
using namespace std;

/*
    CH-230-A
    a12 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(int argx, char**argv){
    // creating 3 objects
    TournamentMember obj1;
    TournamentMember obj2("John", "Zach", "2001-01-11", 846215363, 53.1);
    // copying object 2 to object 3
    TournamentMember obj3 = obj2;
    
    // new line for formatting
    cout << "\n";

    // print method for instances
    obj1.printer();
    obj2.printer();

    // printing the object 3 instance
    obj3.printer();

    // changing the location
    obj3.newLocationMethod("USA");
    
    // showing how it changes
    obj3.printer();

    return 0;
}

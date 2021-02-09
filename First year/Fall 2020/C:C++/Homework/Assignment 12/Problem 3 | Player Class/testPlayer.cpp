#include <iostream> 
#include "TournamentMember.h"
using namespace std;

/*
    CH-230-A
    a12 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(int argx, char**argv){
    // creating 3 objects
    Player p1;
    Player p2(10, "middle", "Right Footed", 0);
    Player p3(10, "Goal Keeper", "Right Footed", 1);
    // copying object 2 to object 3
    Player p4 = p2;
    
    // new line for formatting
    cout << "\n";

    // print method for instances
    p1.printer();
    p2.printer();
    p3.printer();
    p4.printer();

    // changing the location
    p1.newLocationMethod("Hamburg");
    p2.newLocationMethod("Hamburg");
    p3.newLocationMethod("Hamburg");
    p4.newLocationMethod("Hamburg");

    // showing that adding goals method works
    p1.addGoal();
    p2.addGoal();
    p3.addGoal();
    // adding another goal to 3 (showing how only one changes)
    p3.addGoal();
    p4.addGoal();
    
    // showing how location changes to Hamburg
    p1.printer();
    p2.printer();
    p3.printer();
    p4.printer();

    return 0;
}

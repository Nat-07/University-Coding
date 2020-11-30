/*
    CH-230-A
    a12 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream> 
#include <cstring>
using namespace std;

// default constructors
TournamentMember :: TournamentMember(){
    cout << "Default TournamentMember constructor run!" << endl;
    strcpy(firstName, "default_first");
    strcpy(lastName, "default_last");
    strcpy(dateOfBirth, "default_DO");
    phoneNum = 123456789; 
    age = 0.0;
}

// parametric constructor
TournamentMember :: TournamentMember(const char newFirstname[36], 
    const char newLastName[36], const char newDateOfBirth[11], 
    int newNum, double newAge){
    cout << "Parametric TournamentMember parametric constructor run!" << endl;
    strcpy(firstName, newFirstname);
    strcpy(lastName, newLastName);
    strcpy(dateOfBirth, newDateOfBirth);
    phoneNum = newNum;
    age = newAge;
}

// copy constructor
TournamentMember :: TournamentMember(const TournamentMember &obj){
    cout << "TournamentMember copy constructor run!" << endl;
    // copy firstname to the first name of the obj
    strcpy(firstName, obj.firstName);
    strcpy(lastName, obj.lastName);
    strcpy(dateOfBirth, obj.dateOfBirth);
    phoneNum = obj.phoneNum;
    age = obj.age;
}

// new location method
void TournamentMember :: newLocationMethod(string newLocationM){
    location = newLocationM;
}

// deconstructors
TournamentMember :: ~TournamentMember(){
    cout << "TournamentMember deconstructor run" << endl;
}

void TournamentMember :: printer(){
    cout << "Info:" << endl;
    cout << "Last name: " << lastName << endl;
    cout << "First name: " << firstName << endl;
    cout << "Date of birth: " << dateOfBirth << endl;
    cout << "Location: " << location << endl;
    cout << "Phone #: " << phoneNum << endl;
    cout << "Age: " << age << "\n" << endl;
}

// static member
string TournamentMember :: location = "Germany";


// default constructor
Player :: Player(){
    // setting default values
    cout << "Player default contructor run!" << endl;
    number = 100;
    position = "default_position";
    footed = "default_footed";
    numberOfGoals = 0;
}

// parametric constructor
Player :: Player(int newNumber, string newPos, string newFooted, 
    int newNumGoals){
    cout << "Player parametric constructor run!" << endl;
    number = newNumber;
    position = newPos;
    footed = newFooted;
    numberOfGoals = newNumGoals;
}

// copy constructor
Player :: Player(const Player& obj){
    cout << "Player copy constructor run!" << endl;
    number = obj.number;
    position = obj.position;
    footed = obj.footed;
    numberOfGoals = obj.numberOfGoals;
}

//destructor
Player :: ~Player(){
    cout << "Player destructor run!" << endl;
}

// print method for player
void Player :: printer(){
    cout << "Player info:" << endl;
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Footed: " << footed <<endl;
    cout << "Number of goals: " << numberOfGoals << endl;
    /* 
        Printing the parent's data of location to show the change of location
        in the main file. As well had to create a getter for location
        to accomplish.
    */
    cout << "Location: " << this->getLocation() << "\n" << endl;
    
}

// add goal method
void Player :: addGoal(){
    // add one to the number of goals
    numberOfGoals += 1;
}

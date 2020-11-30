/*
    CH-230-A
    a12 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream> 
using namespace std;

// default constructors
TournamentMember :: TournamentMember(){
    cout << "Default constructors run!" << endl;
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
    cout << "Parametric constructor run!" << endl;
    strcpy(firstName, newFirstname);
    strcpy(lastName, newLastName);
    strcpy(dateOfBirth, newDateOfBirth);
    phoneNum = newNum;
    age = newAge;
}

// copy constructor
TournamentMember :: TournamentMember(const TournamentMember &obj){
    cout << "Copy constructor run!" << endl;
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
    cout << "Deconstructor run" << endl;
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

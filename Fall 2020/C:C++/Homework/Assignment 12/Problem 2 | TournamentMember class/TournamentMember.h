/*
    CH-230-A
    a12 p2.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

#ifndef __testTournamentMember_H
#define __testTournamentMember_H

#include <cstring>
#include <iostream>
using namespace std;

// class name
class TournamentMember{
    private:
        char firstName[36];
        char lastName[36];
        char dateOfBirth[11];
        // static location
        static string location;
        // my two properties
        int phoneNum;
        double age;

    public:
        // default constructor
        TournamentMember();
        // parametric constructor
        TournamentMember(const char newFirstname[], const char newLastName[],
                        const char dateOfBirth[],
                        int newNum, double newAges);
        // deconstructor
        ~TournamentMember();
        // copy constructor
        TournamentMember(const TournamentMember &obj);

        // methods
        void newLocationMethod(string newLocationM);
        void printer();

        //prototype getters and setters
        void setFirstName(char newFirstName[]);
        void setLastName(char newLastName[]);
        void setDateBirth(char newDateOfBirth[]);
        void setPhoneNum(int newPhoneNum);
        void setAge(double newAge);

        string getFirstName();
        string getLastName();
        string getDateBirth();
        int getPhoneNum();
        double getAge();


};  

//--------------------------------------------
// inline setters
inline void TournamentMember :: setFirstName(char newFirstName[]){
    /* 
        copying the string. Using the strncpy even though its c, it
        works in c++. Copying the name to the new string.
    */
    strcpy(firstName, newFirstName);
}

inline void TournamentMember :: setLastName(char newLastName[]){
    // copying new last name to last time
    strcpy(lastName, newLastName);
}

inline void TournamentMember :: setDateBirth(char newDateOfBirth[]){
    // new date of birth coppied to old
    strcpy(dateOfBirth, newDateOfBirth);
}

inline void TournamentMember :: setPhoneNum(int newPhoneNum){
    // new phone #
    phoneNum = newPhoneNum;
}

inline void TournamentMember :: setAge(double newAge){
    // new age
    age = newAge;
}

//--------------------------------------------
// inline getters
inline string TournamentMember :: getFirstName(){
    // convert to string to return
    string temp = firstName;
    return temp;
}

inline string TournamentMember :: getLastName(){
    // convert to string to return
    string temp = lastName;
    return temp;
}

inline string TournamentMember :: getDateBirth(){
    // convert to string to return
    string temp = dateOfBirth;
    return temp;
}

inline int TournamentMember :: getPhoneNum(){
    // return phone #
    return phoneNum;
}

inline double TournamentMember :: getAge(){
    // return age
    return age;
}

#endif

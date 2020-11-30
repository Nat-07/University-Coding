/*
    CH-230-A
    a12 p3.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

#ifndef __testTournamentMember_H
#define __testTournamentMember_H

#include <string>
#include <iostream>
#include <cstring>
using namespace std;

// class name
class TournamentMember{
    private:
        char firstName[36];
        char lastName[36];
        char dateOfBirth[11];
        // static location
        static string location;
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
        string getLocation() const;
        int getPhoneNum();
        double getAge();


};  

//----------------------------------------------------------------------

// derived Player class from TournamentMember class
class Player : public TournamentMember{

    private:
        int number;
        string position;
        string footed;
        int numberOfGoals;

    public:
        // default constructor
        Player();
        // parametric constructor
        Player(int, string, string, int);
        //destructor
        ~Player();
        // copy constructor
        Player(const Player& obj);
        

        // setters and getters
        void setNumber(int nweNumber);
        void setPosition(string newPos);
        void setFooted(string newFooted);

        int getNumber() const;
        string getPosition() const;
        string getFooted() const;

        // methods
        void printer();
        void addGoal();

};

//----------------------------------------------------------------------
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

// player inline setters
inline void Player :: setNumber(int newNumber){
    number = newNumber;
} 

inline void Player :: setPosition(string newPosition){
    position = newPosition;
}

inline void Player :: setFooted(string newFooted){
    footed = newFooted;   
}

//----------------------------------------------------------------------
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

inline string TournamentMember :: getLocation() const{
    return location;
}

// player inline getters
inline int Player :: getNumber() const{
    return number;
}

inline string Player :: getPosition() const{
    return position;
}

inline string Player :: getFooted() const{
    return footed;
}

#endif

#include <iostream>
#include "City.h"

using namespace std;

/*
    CH-230-A
    a10 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/


// setter methods
void City :: setCityName(string& newCityname){
    cityName = newCityname;
}
void City :: setNumInhabitants(int newNumInhabitants){
    numInhabitants = newNumInhabitants;
}
void City :: setMayor(string& newMayorName){
    mayor = newMayorName;
}
void City :: setArea(int newArea){
    area = newArea;
}


// getter methods
float City :: getArea(){
    return area;
}
int City :: getNumInhabitants(){
    return numInhabitants;
}
string City :: getcityName(){
    return cityName;
}
string City :: getMayor(){
    return mayor;
}


// print and formatting
void City :: print(){
	// adapted print
	cout << "In the city of " << cityName << " they have " 
    << numInhabitants << " people with " << mayor <<
    " as their mayor governing over " << area << "km^2." 
    << endl;
}




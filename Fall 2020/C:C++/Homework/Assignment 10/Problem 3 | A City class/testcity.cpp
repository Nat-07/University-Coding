#include <iostream>
#include <cstdlib>
#include "City.h"

/*
    CH-230-A
    a10 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

using namespace std;

int main(int argc, char** argv){
    //init vars
    int inhabitantsInput;
    float areaInput;
    string mayorInput;
    string cityName;
    
    // create instances of City and give them names (user input)

    
    // creating an instance of City named Bremen
	City Bremen;
    cout << "Name of first City: " << endl;
    // getting name of city
    getline(cin, cityName);
    // calling method and giving name of city entered
    Bremen.setCityName(cityName);

    City Paris;
    cout << "Name of second City: " << endl;
    getline(cin, cityName);
    Paris.setCityName(cityName);

    City London;
    cout << "Name of third City: " << endl;
    getline(cin, cityName);
    London.setCityName(cityName);

    // Get info on Bremen and get user input to put into method
    cout << "Bremen information (Number of inhabitants, Mayor, and area " <<
    "in km)" << endl;
    cin >> inhabitantsInput;
    Bremen.setNumInhabitants(inhabitantsInput);

    cin.ignore();
    getline(cin, mayorInput);
    Bremen.setMayor(mayorInput);

    cin >> areaInput;
    Bremen.setArea(areaInput);

    //Get info on Paris and get user input to put into method
    cout << "Paris information (Number of inhabitants, Mayor, and area " <<
    "in km)" << endl;
    cin >> inhabitantsInput;
    Paris.setNumInhabitants(inhabitantsInput);

    cin.ignore();
    getline(cin, mayorInput);
    Paris.setMayor(mayorInput);

    cin >> areaInput;
    Paris.setArea(areaInput);

    // Get info on London and get user input to put into method
    cout << "London information (Number of inhabitants, Mayor, and " << 
    "area in km)" << endl;
    cin >> inhabitantsInput;
    London.setNumInhabitants(inhabitantsInput);

    cin.ignore();
    getline(cin, mayorInput);
    London.setMayor(mayorInput);

    cin >> areaInput;
    London.setArea(areaInput);


    // print method for all instances of the class
	Bremen.print();
    Paris.print();
    London.print();

    return 0;
}

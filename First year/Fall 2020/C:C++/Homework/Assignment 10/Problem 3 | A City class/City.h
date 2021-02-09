#include <string> // defines standard C++ string class

/*
    CH-230-A
    a10 p3.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

// City class
class City{
    private:
        // init of vars for class
        std :: string cityName;
        int numInhabitants;
        std :: string mayor;
        float area;

    public:
        // setters methods
        void setCityName(std::string& newCityname);
        void setNumInhabitants(int newNumInhabitants);
        void setMayor(std::string& newMayorName);
        void setArea(int newArea);

        // getter methods
        std::string getcityName();
        int getNumInhabitants();
        std::string getMayor();
        float getArea();

        // print method
        void print();
};

#include <vector>
using namespace std;

/*
    CH-231-A
    aA2 p3.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class WindGauge{
    private:
        // number of data points in vector
        int numEntries;
        // vector to hold data
        vector<int> windSpeeds;  
        // gets most current windspeed
        int returnWind();  
        
    public:
        // constructor
        WindGauge(int period = 12);
        // print data
        void dumpData();
        // set new speed
        void currentWindSpeed(int speed);
        // highest, lowest, & average getters
        int highest() const;
        int lowest() const;
        int average() const;
};

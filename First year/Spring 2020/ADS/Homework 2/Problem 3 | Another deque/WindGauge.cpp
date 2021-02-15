#include "WindGauge.h"
#include <iostream>
#include <cmath>
using namespace std;

/*
    CH-231-A
    aA2 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// parametric constructor
WindGauge :: WindGauge(int newNumEntries){
    numEntries = newNumEntries;
}

// set new speed
void WindGauge :: currentWindSpeed(int speed){
    // Check if first size is greater than or equal to allowed size
    if (windSpeeds.size() >= this->numEntries){
        // remove first element
        windSpeeds.erase(windSpeeds.begin());
    }
    // add new element at end
    windSpeeds.push_back(speed);
}

// return windspeeds at index 11 (as pushback adds to back)
int WindGauge :: returnWind(){
    return windSpeeds.at(11);
}

// return max speed
int WindGauge :: highest() const{
     // initialize max to value index 0
    int max = windSpeeds.at(0);

    // cycle through vecotr
    for(auto iter = windSpeeds.begin(); iter != windSpeeds.end(); iter++){
        // check if max is smaller than *iter. If so set max to *iter value
        if(max < *iter){
            max = *iter;
        }
    }        
    
    return max;
}

// return min speed
int WindGauge :: lowest() const{
    // initialize min to value index 0
    int min = windSpeeds.at(0);

    for(auto iter = windSpeeds.begin(); iter != windSpeeds.end(); iter++){
        // check if min is bigger than *iter. If so set min to *iter value
        if(min > *iter){
            min = *iter;
        }
    }

    return min;
}

// return average speed
int WindGauge :: average() const{
    // float to round 
    float sum = 0;
    
    // cycle through vector and sum values
    for(auto iter = windSpeeds.begin(); iter != windSpeeds.end(); iter++){
        sum += *iter;
    }

    //use summed value and divide by size of vector to get average
    return round(sum/windSpeeds.size());
}

// print data & format
void WindGauge :: dumpData(){
    cout << "_____________________________________________________" << endl;
    cout << "Highest wind speed:  " << this->highest() << endl;
    cout << "Lowest wind speed:  " << this->lowest() << endl;
    cout << "Rounded average wind speed:  " << this->average() << endl;
}

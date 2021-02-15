#include <iostream>
#include "WindGauge.cpp"
using namespace std;


/*
    CH-231-A
    aA2 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // creating a wind gauge (default size) named randBeach
    WindGauge randBeach;

    // adding the values that were given
    randBeach.currentWindSpeed(15);
    randBeach.currentWindSpeed(16);
    randBeach.currentWindSpeed(12);
    randBeach.currentWindSpeed(15);
    randBeach.currentWindSpeed(15);
    // printing data
    randBeach.dumpData();

    // adding the other ten elements given
    randBeach.currentWindSpeed(16);
    randBeach.currentWindSpeed(17);
    randBeach.currentWindSpeed(16);
    randBeach.currentWindSpeed(16);
    randBeach.currentWindSpeed(20);
    randBeach.currentWindSpeed(17);
    randBeach.currentWindSpeed(16);
    randBeach.currentWindSpeed(15);
    randBeach.currentWindSpeed(16);
    randBeach.currentWindSpeed(20);
    // printing new data
    randBeach.dumpData();

    return 0;
}

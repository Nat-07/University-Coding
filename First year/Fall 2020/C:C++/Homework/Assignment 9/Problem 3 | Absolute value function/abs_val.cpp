#include <iostream>
#include <string>
using namespace std;

/*
    CH-230-A
    a9 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

float absoluteValue(float value) {
    if(value >= 0){
        // return value as it is already positive
        return value;
    }else{
        // return the inverse using - sign if less than 0
        return -value;
    }
}

int main(){

    // init and get value
    float n;
    cin >> n;

    // run function with value of n and print
    cout <<"Absolute value = " <<  absoluteValue(n) << endl;
    
    return 0;
}

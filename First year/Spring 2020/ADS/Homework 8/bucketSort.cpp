#include <iostream>
#include "bucketSort.h"
using namespace std;

/*
    CH-231-A
    a8 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // input 
    double arr[] = {0.9, 0.1, 0.6, 0.7, 0.6, 0.3, 0.1};

    // instance of class
    bucketSort sample(arr, sizeof(arr)/sizeof(arr[0]));

    // print values before bucket sort
    cout << "Values before bucket sort:" << endl;
    sample.printer();

    cout << endl; // formatting

    // run bucket sort
    sample.bucketSortRun();

    // print values after bucket sort
    cout << "Values after bucket sort:" << endl;
    sample.printer();

    return 0;
}

#include <iostream>
#include <time.h>
#include <cstring>
#include "quickSortClass.h"
using namespace std;

/*
    CH-231-A
    a7 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototyped function
void arrRandom(int arr[], int size);

int main(){
    // ----------------------------------------------------------------
    // initialize values

    // size of unsorted and sorted arrays
    int size = 1000;
    // number of runs to be preformed to test average
    int runs = 100000;
    // base array to store data prior to instance of class
    int arrBase[size];
    // values to store time
    long double lomotoTime = 0;
    long double hoareTime = 0;
    long double medianOfThreeTime = 0;
    // initialize random
    srand(time(NULL));

    for (int i = 0; i < runs; i++){
        // randomize values in array
        arrRandom(arrBase, size);

        // ----------------------------------------------------------------
        // lomoto quicksort

        // create instance
        quickSortClass lmootoInstance(arrBase, size);

        // get run time
        auto start = high_resolution_clock::now();
        lmootoInstance.lomotoRunner();
        auto finish = high_resolution_clock::now();

        // calculate run time to take avarage later
        auto elapsed = duration_cast<std::chrono::nanoseconds>(finish-start).count();
        lomotoTime+= elapsed;

        // ----------------------------------------------------------------
        // Hoare quicksort

        // creating instance
        quickSortClass hoareInstance(arrBase, size);

        // get run time
        start = high_resolution_clock::now();
        hoareInstance.hoareRunner();
        finish = high_resolution_clock::now();

        // calculate run time to take avarage later
        elapsed = duration_cast<std::chrono::nanoseconds>(finish-start).count();
        hoareTime+= elapsed;

        // ----------------------------------------------------------------
        // Median-of-three quicksort

        // creating instance
        quickSortClass meadiaOfThreeInstance(arrBase, size);

        // get run time
        start = high_resolution_clock::now();
        meadiaOfThreeInstance.medianOfThreeRunner();
        finish = high_resolution_clock::now();

        // calculate run time to take avarage later
        elapsed = duration_cast<std::chrono::nanoseconds>(finish-start).count();
        medianOfThreeTime+= elapsed;

        // ----------------------------------------------------------------
        // switch statement to print progess every 25% (fixed for 100000 runs)
        
        switch(i){
        case 25000:
            cout << "25% completed" << endl;
            break;
        case 50000:
            cout << "50% completed" << endl;
            break;
        case 75000:
            cout << "75% completed" << endl;
            break;
        case 99999:
            cout << "100% completed" << endl;
            break;
        // if none of the cases suffice, then do nothing
        default:
            break;
        }
    }

    // print average times
    // use fixed to avoid scientific notation
    cout << fixed << "Average time of lomoto: " << lomotoTime/(float)runs << endl;
    cout << fixed << "Average time of Hoare: " << hoareTime/(float)runs << endl;
    cout << fixed << "Average time of median of three: " << medianOfThreeTime/(float)runs << endl;

    return 0;
}

// simple function to print array
void arrRandom(int arr[], int size){
    for (int j = 0; j < size; j++){
            arr[j] = rand() % 10000 + 1;
    }
}

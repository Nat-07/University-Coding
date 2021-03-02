#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

/*
    CH-231-A
    aA2 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

ofstream out;

// help from https://www.geeksforgeeks.org/selection-sort/ for selection sort
void selectionSort(int arr[], int size){
    // run for each number in larger caseBay
    for(int i = 0; i < size-1; i++){

        // set min value index to iterator
        int minIndex = i;

        // find the minimum element
        for (int j = i+1; j < (size); j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }

        // before swapping, make sure not self
        if(minIndex != i){
            int tempSwap = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tempSwap;
        }
    }
}

void caseA(int arr[], int sizeArr){

    // open caseA csv in append mode
    out.open("caseA.csv", ios_base::app);

    int max_arr = 0;

    // find the largest element to make the worst case array
    for (int k = 0; k < sizeArr; k++){
        // check array and set new max if found
        if (arr[k] > max_arr){
            max_arr = arr[k];
        }
    }

    // set first element to make worst case, insert in index 0 max * 2
    arr[0] = (max_arr*2);

    // time execution
    auto startCaseA = high_resolution_clock::now();
    selectionSort(arr, sizeArr);
    // stop time by getting current time and subtract to find total time
    auto stopCaseA = high_resolution_clock::now();
    auto caseA = duration_cast<microseconds>(stopCaseA - startCaseA);

    // write and close file
    out << sizeArr << "," << (double)caseA.count() << endl;
    out.close();        
}

void caseB(int arr[], int sizeArr){

    // open caseB csv in append mode
    out.open("caseB.csv", ios_base::app);

    // get and save current time
    auto startCaseB = high_resolution_clock::now();
    // sort array using selection sort
    selectionSort(arr, sizeArr);
    // get current time and subtract to find execution time
    auto stopCaseB = high_resolution_clock::now();
    auto caseB = duration_cast<microseconds>(stopCaseB - startCaseB);

    // write and close file
    out << sizeArr << "," << (double)caseB.count() << endl;
    out.close();
}


void caseC(int sizeArr){

    // open caseC csv in append mode
    out.open("caseC.csv", ios_base::app);

    // create double to store summed execution time
    double caseCSum = 0.0;

    // run to get reliable average time as noted in question
    for (int m = 0; m < 10; m++){

        // creating array and add elements
        int arr[sizeArr];
        for (int j = 0; j < sizeArr; j++){
            arr[sizeArr] = (rand() % 100 + 1);
        }

        // get and save current time
        auto startCaseC = high_resolution_clock::now();
        // sort array using selection sort
        selectionSort(arr, sizeArr);
        // get current time and subtract to find execution time
        auto stopCaseC = high_resolution_clock::now();
        auto caseCs = duration_cast<microseconds>(stopCaseC - startCaseC);
        // sum execution times
        caseCSum += caseCs.count();
    }

    // write, take average for 15 runs and close 
    out << sizeArr << "," << caseCSum/(float)10 << endl;
    out.close();
}


int main(){

    // cycle through 2000, iterating at 15
    for(int i = 0; i < 2000; i+=15){
        
        // rename the size of the array
        int sizeArr = i; 
        // create the array
        int arr[sizeArr];

        // cycle through the array and insert random elements
        for (int j = 0; j < sizeArr; j++){
            arr[j] = (rand() % 100 + 1);
        }

        // case A
        caseA(arr, sizeArr);
       
        // Case B
        // case B will always be sorted as it is after case A which is sorted
        caseB(arr, sizeArr);
    
        // case C 
        caseC(sizeArr);
    }

    return 0;
}

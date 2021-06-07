#include <iostream>
#include "heapSort.h"
#include <chrono>
using namespace std;
using namespace std::chrono;

/*
    CH-231-A
    a6 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // delete files in string array before append data
    string files[2] = {"heapSortData.csv",
    "variantHeapData.csv"};

    char fileNameChar[20];
    for (int fileIndex = 0; fileIndex < 2; fileIndex++){
        // copying over the string into the char array & removing
        strcpy(fileNameChar, files[fileIndex].c_str());
        remove(fileNameChar);
    }

    for(int sampleSize = 0; sampleSize < 10000; sampleSize+=50){
        // array and object initialize objects 
        int arr[sampleSize];
        heap baseHeapSort(arr, sampleSize, sampleSize);
        heap heapVariant(arr,sampleSize, sampleSize);

        // set elements in base case
        baseHeapSort.setElem();

        // use overloaded opperator to make equal
        heapVariant = baseHeapSort;

        // --------------------------------------------
        // original

        // start time 
        auto begin = chrono::high_resolution_clock::now();
        // heap sort
        baseHeapSort.heapSort();
        // stop time
        auto end = chrono::high_resolution_clock::now();
        // print data to file
        baseHeapSort.printToFile(1, sampleSize ,end, begin);

        // --------------------------------------------
        // variant
        begin = chrono::high_resolution_clock::now();

        heapVariant.heapSort();

        end = chrono::high_resolution_clock::now();

        heapVariant.printToFile(2, sampleSize, end, begin);

    }

    return 0;
}

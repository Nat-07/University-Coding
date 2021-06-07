#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "pivotMod.h"
using namespace std;

/*
    CH-231-A
    a7 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // initialize random
    srand(time(NULL));
    // initialize variables
    int arrSize = 15;
    int toSort[arrSize];
    int randNums[2];
    // fill array
    for(int i = 0; i < arrSize; i++){
        toSort[i] = i;
    }

    // reverse sort to make worst case
    sort(toSort, toSort + arrSize, greater<int>()); 

    // get random numbers for pivots
    randNums[0] = rand() % 11;
    randNums[1] = rand() % 11;
    
    // make sure not equal
    while(randNums[0] == randNums[1]){
        randNums[1] = rand() % 11;
    }

    // create two instaces with the unsorted array and respective pivots
    quickSortTwoPiv firstElem(toSort, arrSize, 0, 1);
    quickSortTwoPiv RandElem(toSort, arrSize, randNums[0], randNums[1]);

    cout << "First two elements as pivots" << endl;
    firstElem.sortPrint();
    firstElem.firstTwoRunner();
    firstElem.sortPrint();

    cout << "\nTwo random elements as pivots" << endl;
    RandElem.sortPrint();
    RandElem.firstTwoRunner();
    RandElem.sortPrint();

    return 0;
}

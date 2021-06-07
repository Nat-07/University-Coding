#include <iostream>
using namespace std;

/*
    CH-231-A
    a7 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// class to store all data and methods
class quickSortTwoPiv{

    private:
        // prt to hold sorted and unsorted data
        int *ptr;
        // hold size (scalable if wanted to see increasing effect)
        int size;
        int firstPivot;
        int secondPivot;

    public: 
        // constructor & destructor
        quickSortTwoPiv(int arr[], size_t newSize, int newFirstPiv, int newSecondPiv);
        ~quickSortTwoPiv();

        // dual pivot quicksort
        void firstTwoRunner();
        void firstTwoSort(int *array, int left, int right);
        void firstTwoPartition(int *array, int left, int right);

        // utility method
        void sortPrint();
};

// ---------------------------------------------------------------------------
// constructor & destructor
quickSortTwoPiv :: quickSortTwoPiv(int arr[], size_t newSize, int newFirstPiv, int newSecondPiv){
    size = newSize;

    ptr = new int[size]; 

    for (int i = 0; i < size; i++){
        ptr[i] = arr[i];
    }

    newFirstPiv = 0;
    newSecondPiv = 1;
}

quickSortTwoPiv :: ~quickSortTwoPiv(){
    // dealocate memory
    delete[] ptr;
}

// ---------------------------------------------------------------------------
// duel pivot quicksort

// entry method
void quickSortTwoPiv :: firstTwoRunner(){
    firstTwoSort(this->ptr, 0, size-1);
}

// help from https://www.geeksforgeeks.org/dual-pivot-quicksort/
void quickSortTwoPiv :: firstTwoSort(int *array, int left, int right){
    if (left < right){ 
        firstTwoPartition(array, left, right);
        firstTwoSort(array, left, this->secondPivot - 1);
        firstTwoSort(array, this->secondPivot + 1, this->firstPivot - 1);
        firstTwoSort(array, this->firstPivot + 1, right);
    }
}

// understanding descriptions from https://codeblab.com/wp-content/uploads/2009/09/DualPivotQuicksort.pdf
void quickSortTwoPiv :: firstTwoPartition(int *array, int oldLeftPiv, int oldRightPiv){
    // if pivots are in the wrong order, swap
    if (array[oldLeftPiv] > array[oldRightPiv]){
        swap(array[oldLeftPiv], array[oldRightPiv]);
    }
    
    // setting the boundaries of elements
    // pivot element indices
    int pivElemIndx = oldLeftPiv + 1;
    int pivElemIndx2 = oldRightPiv - 1;
    int cyclerIndx = oldLeftPiv + 1;

    // pivot elements values
    int leftPivot = array[oldLeftPiv];
    int rightPivot = array[oldRightPiv];

    // while we have not gone through all items
    while(cyclerIndx <= pivElemIndx2){

        // if element is smaller than pivot, swap
        if(array[cyclerIndx] < leftPivot){
            swap(array[cyclerIndx], array[pivElemIndx]);
            // change boundary
            pivElemIndx++;
            
        // else if they are equal or greater,
        }else if (array[cyclerIndx] >= rightPivot){
            // while element does not satisfy conditions...
            while(array[pivElemIndx2] > rightPivot && cyclerIndx < pivElemIndx2){
                // change boundary after finding where elment satisfies
                pivElemIndx2--;
            }

            // swap as we have new boundaries
            swap(array[cyclerIndx], array[pivElemIndx2]);
            
            // change boundary
            pivElemIndx2--;

            // if we find current element greater than pivot...
            if(array[cyclerIndx] < leftPivot){
                swap(array[cyclerIndx], array[pivElemIndx]);
                // change boundary
                pivElemIndx++;
            }
        }
        // increment k
        cyclerIndx++;
    }
    
    // change positions of new pivots that will be passed
    pivElemIndx--;
    pivElemIndx2++;

    swap(array[oldLeftPiv], array[pivElemIndx]);
    swap(array[oldRightPiv], array[pivElemIndx2]);

    // save the data in the class
    this->firstPivot = pivElemIndx2;
    this->secondPivot = pivElemIndx;
}

// utility method
void quickSortTwoPiv :: sortPrint(){
    // cycle through & print  
    for (int i = 0; i < size; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
}

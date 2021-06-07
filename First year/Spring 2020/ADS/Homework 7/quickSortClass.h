#include <iostream>
#include <fstream>
#include <chrono>
#include <time.h>
#include <cmath>
using namespace std;
using namespace chrono;

// class to store all data and methods
class quickSortClass{

    private:
        // prt to hold sorted and unsorted data
        int *ptr;
        // hold size (scalable if wanted to see increasing effect)
        int size;

    public: 
        // constructor & destructor
        quickSortClass(int arr[], size_t newSize);
        ~quickSortClass();

        // the three versions of quicksort & partition algorithms
        void lomotoQuickSort(int *array, int left, int right);
        int lomotoPartition(int *array, int left, int right);

        void hoareQuickSort(int *array, int left, int length);
        int hoarePartition(int *array, int left, int length);

        void medianOfThreeQuickSort(int *array, int left, int length);
        int medianOfThreePartition(int *array, int left, int length);

        // jump point for all quicksort variants
        void lomotoRunner();
        void hoareRunner();
        void medianOfThreeRunner();

        // utility method
        void sortPrint();
};

// ---------------------------------------------------------------------------
// constructor & destructor
quickSortClass :: quickSortClass(int arr[], size_t newSize){
    size = newSize;

    ptr = new int[size]; 

    for (int i = 0; i < size; i++){
        ptr[i] = arr[i];
    }
}

quickSortClass :: ~quickSortClass(){
    // dealocate memory
    delete[] ptr;
}

// ---------------------------------------------------------------------------
// lomoto quicksort methods

// method to be called when wanting to envoke lomoto quicksort
void quickSortClass :: lomotoRunner(){
    lomotoQuickSort(this->ptr, 0, size);
}

void quickSortClass :: lomotoQuickSort(int *array, int left, int right){
    // only run if the right index is greater than left
    if(left < right){
        // finding index to pivot around
        int pivot = lomotoPartition(array, left, right);
        // run quicksort on right and left of pivot
        lomotoQuickSort(array, left, pivot-1);
        lomotoQuickSort(array, pivot+1, right);
    }
}

int quickSortClass :: lomotoPartition(int *array, int left, int right){
    // get pivot point
    int pivot = array[right];
    // index of smallest element
    int i = left;

    for (int j = left; j < right; j++){
        if(array[j] < pivot){
            // add 1 to i as we are changing where the boarder of the pivot is
            i++;
            // moving elements smaller to the left and greater to the right
            swap(array[i], array[j]);
        }        
    }
    // swap elements
    swap(array[right], array[i+1]);

    // return position of pivot
    return i+1;
}

// ---------------------------------------------------------------------------
// hoare quicksort methods

// method to be called when wanting to envoke Hoare quicksort
void quickSortClass :: hoareRunner(){
    hoareQuickSort(this->ptr, 0, size);
}

// used pseudo code https://en.wikipedia.org/wiki/Quicksort#Hoare_partition_scheme
void quickSortClass :: hoareQuickSort(int *array, int left, int length){
    // only run if the right index is greater than left
    if(left < length){
        // finding index to pivot around
        int pivot = hoarePartition(array, left, length);
        // run quicksort on right and left of pivot
        hoareQuickSort(array, left, pivot);
        hoareQuickSort(array, pivot+1, length);
    }
}

// used pseudo code from https://en.wikipedia.org/wiki/Quicksort#Hoare_partition_scheme
int quickSortClass :: hoarePartition(int *array, int left, int right){
    // find pivot
    int pivot = array[(int)floor(right+left)/2];
    // left element and right element
    int i = left-1;
    int j = right + 1;

    while(true){
        // do while cycling forwards
        do{
            i++;
        // keep cycling till find element that is equal to or greater than pivot
        }while(array[i] < pivot);
        
        // do while cycling backwards
        do{
            j--;
        // keep cycling till find element that is equal to or greater than pivot
        }while(array[j] > pivot);

        // break out of function when indicies meet
        if(i >= j){
            return j;
        }

        // swap if in wrong order
        swap(array[i], array[j]);
    }
}


// ---------------------------------------------------------------------------
// meadian of three quicksort methods

// method to be called when wanting to envoke meadian of three quicksort
void quickSortClass :: medianOfThreeRunner(){
    medianOfThreeQuickSort(this->ptr, 0, size);
}

// help from: https://stackoverflow.com/a/7199398
int quickSortClass :: medianOfThreePartition(int *array, int left, int length){
    // first element
    int front=array[left];
    // middle element
    int middle=array[(length-left)/2+left];
    // last element
    int end=array[length-1];

    int i=left-1;
    int j=length;
    int pivot;
    
    // looking at the first and last elements in array and choosing median to be pivot
    if((middle>front && middle<end) || (middle>end && middle<front)){
        pivot=middle;
    }else if((end>front && end<middle) || (end>middle && end<front)){
        pivot=end;
    }else{
        pivot = array[left];
    }

    while(true){

        do{
            i++;
        // keep cycling till find element that is greater than pivot
        }while (array[i] < pivot);

        do{
            j--;
        // keep cycling till find element that is greater than pivot
        }while(array[j] > pivot);

        if(i < j){
            swap(array[i],array[j]);
        }
        else return j+1;
    }
}

void quickSortClass :: medianOfThreeQuickSort(int *array, int left, int right){
    if(right - left < 2){
        return;
    }else{
        // finding index to pivot around
        int pivot = medianOfThreePartition(array, left, right);
        // run quicksort on right and left of pivot
        medianOfThreeQuickSort(array, left, pivot);
        medianOfThreeQuickSort(array, pivot, right);
    }
}

// ---------------------------------------------------------------------------
// utility method

void quickSortClass :: sortPrint(){
    // cycle through & print  
    for (int i = 0; i < size; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
}

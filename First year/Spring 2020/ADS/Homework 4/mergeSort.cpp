#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

/*
    CH-231-A
    aA4 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototyped functions
void merge(int arr[], int left, int middle, int right);
void insertionSort(int arr[], int front, int end);
void mergeSort(int arr[], int front, int end, int k);
void randomizeArr(int arr[], int size);
void arrFill(int arr[], int size);

int main(){

    // delete files in string array before append data
    string files[3] = {"avgCase.csv", "bestCase.csv", "worstCase.csv"};
    char fileNameChar[15];
    
    for (int fileIndex = 0; fileIndex < 3; fileIndex++){
        // copying over the string into the char array & removing
        strcpy(fileNameChar, files[fileIndex].c_str());
        remove(fileNameChar);
    }
    
	ofstream outFile;
    // setting sample size to 3000 & init array with sampleSize
    int sampleSize = 3000;
    int arr[sampleSize];

    // loop for different k values
    for(int k = 0; k < sampleSize; k+=15){

        // -------------------------------------------------------------------
        // best case

        // open file in append mode
        outFile.open("bestCase.csv", ios_base::app);
        
        // get array of elements
        arrFill(arr, sampleSize);

        // get current time
        auto startCaseBest = high_resolution_clock::now();

        // run merge sort (array passed, front index, end index, k value)
        mergeSort(arr, 0, sampleSize, k);

        //stop time by getting current time and subtract to find total time
        auto stopCaseBest = high_resolution_clock::now();
        auto caseBest = duration_cast<microseconds>(stopCaseBest - startCaseBest);

        outFile << k << "," << (double)caseBest.count() << endl;

        outFile.close();

        // -------------------------------------------------------------------
        // average case

        // open file in append mode
        outFile.open("avgCase.csv", ios_base::app);

        // get random array to be sorted
        randomizeArr(arr, sampleSize);

        // get current time
        auto startCaseAvg = high_resolution_clock::now();
        
        // run merge sort
        mergeSort(arr, 0, sampleSize, k);
        
        //stop time by getting current time and subtract to find total time
        auto stopCaseAvg = high_resolution_clock::now();
        auto caseAvg = duration_cast<microseconds>(stopCaseAvg - startCaseAvg);

        outFile << k << "," << (double)caseAvg.count() << endl ;

        outFile.close();

        // -------------------------------------------------------------------
        //Worst case

        // open file in append mode
        outFile.open("worstCase.csv", ios_base::app);

        // get ordered array
        arrFill(arr, k);

        // sort in decending order
        sort(arr, arr + k, greater<int>()); 

        // get current time
        auto startCaseWorst = high_resolution_clock::now();

        // run merge sort
        mergeSort(arr, 0, sampleSize, k);
        
        //stop time by getting current time and subtract to find total time
        auto stopCaseWorst = high_resolution_clock::now();
        auto caseWorst = duration_cast<microseconds>(stopCaseWorst - startCaseWorst);

        outFile << k << "," << (double)caseWorst.count() << endl;
        
        outFile.close();
    }

    return 0;
}

/* 
much help with understanding and implementing merge sort,
https://www.geeksforgeeks.org/merge-sort/
*/
void merge(int arr[], int left, int middle, int right){

    // get sizes to use for arrays
    int size1 = middle - left + 1;
    int size2 = right - middle;

    // Create temp arrays
    int tempArrLeft[size1];
    int tempArrRight[size2];
 
    // move data into the temp arrays
    for(int i = 0; i < size1; i++){
        tempArrLeft[i] = arr[left+i];
    }
    for(int j = 0; j < size2; j++){
        tempArrRight[j] = arr[middle+1+j];
    }
 
    // Initial index of first subarray
    int index1 = 0;
    // Initial index of second subarray
    int index2 = 0;
    // Initial index of merged subarray
    int index3 = left;
    
    // cycle through arrays sorting elements
    while(index1 < size1 && index2 < size2){
        if(tempArrLeft[index1] <= tempArrRight[index2]){
            
            arr[index3] = tempArrLeft[index1];
            index1++;
        }else{
            arr[index3] = tempArrRight[index2];
            index2++;
        }
        index3++;
    }
    
    // copy data over back into main arr from right and left arrays
    while(index1 < size1){
        arr[index3] = tempArrLeft[index1];
        index1++;
        index3++;
    }
    while(index2 < size2){
        arr[index3] = tempArrRight[index2];
        index2++;
        index3++;
    }
}

/* 
much help with understanding and implementing merge sort,
https://www.geeksforgeeks.org/merge-sort/
*/
void mergeSort(int arr[], int front, int end, int k){
    
    /*
    when mergesort reaches sequences of k (k is variable, 
    thus changes in main), we run insertion sort.  
    */
    if((end-front) <= k){
        insertionSort(arr, front, end);

    // else continue merge sort
    }else{
        // calculate middle value
        int middle = front+(end-front)/2; 

        // call mergeSort function on front to middle part array
        mergeSort(arr, front, middle, k);
        // call mergeSort function on middle to end part array
        mergeSort(arr, middle+1, end, k);
        // call merge function
        merge(arr, front, middle, end);
    }
}

// help with insertion sort from https://www.geeksforgeeks.org/insertion-sort/
void insertionSort(int arr[], int front, int end){
    int i, key, j;

    /* 
        start at the first element to the end element (as only want 
        to sort these elements in the larger array). If wanted to sort all
        elements start at index 0.
    */
    for(i = front; i < end; i++){

		j = i;
        key = arr[i]; 
        j = i-1; 

        while(j >= front && arr[j] > key){ 
            arr[j+1] = arr[j]; 
            j--; 
        }

        arr[j+1] = key; 
    } 
} 

// function to fill array with random values
void randomizeArr(int arr[], int size){
    // initialize random
    srand(static_cast <unsigned int>(time(0)));

    for (int i = 0; i < size; i++){
        arr[i] = rand() % 100 + 1;
    }
}

// function to fill array with index times 2
void arrFill(int arr[], int size){
    for (int i = 0; i < size; i++){
            arr[i] = i*2;
    }
}

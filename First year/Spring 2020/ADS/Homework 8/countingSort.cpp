#include <iostream>
using namespace std;

/*
    CH-231-A
    a8 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype functions
void arrayPrint(int arr[], int size);
void countSort(int arr[], int size);

int main(){
	// array to be sorted
	int arr[] = {9,1,6,7,6,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);

	// print array before
	arrayPrint(arr, size);

	// preform count sort
	countSort(arr, size);

	// print array after
	arrayPrint(arr, size);

	return 0;
}

// function to print array
void arrayPrint(int arr[], int size){
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

// help from https://www.programiz.com/dsa/counting-sort
void countSort(int arr[], int size){
	//initialize max
	int max = arr[0];

	// find max in array
	for(int i = 0; i < size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	
	int countArr[max];
	int output[max];

	// set all elements to zero
	for (int i = 0; i <= max; ++i){
		countArr[i] = 0;
	}

	// add one to all counts
	for (int i = 0; i < size; i++){
		countArr[arr[i]]++;
	}
	
	// cycle through array adding the current element to the previous
	for (int i = 1; i <= max; i++){
		countArr[i] += countArr[i-1];
	}

	for (int i = size - 1; i >= 0; i--) {
		// get proper index of and place into the output array
		output[countArr[arr[i]] - 1] = arr[i];
		// decrease by one to signify we have used it
		countArr[arr[i]] = countArr[arr[i]] - 1;
	}

	// copy elements back to arr to be accessed outside of function
	for (int i = 0; i < size; i++) {
		arr[i] = output[i];
	}
}

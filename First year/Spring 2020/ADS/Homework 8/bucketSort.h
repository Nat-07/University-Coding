#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
using namespace std; 

/*
    CH-231-A
    a8 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

class bucketSort{
    private:
        double *ptr;
        int size;

    public:
        bucketSort(double arr[], int size);
        ~bucketSort();

        void bucketSortRun();
        void printer();  
};

// parametric constructor
bucketSort::bucketSort(double arr[], int newSize){
    // set values for object properties
    size = newSize;
    ptr = new double[size];
    for (int i = 0; i < size; i++){
        // copy over data
        ptr[i] = arr[i];
    }
}

// dealocator
bucketSort::~bucketSort(){
    // dealocate memory
    delete[] ptr;
}

// help from https://www.geeksforgeeks.org/bucket-sort-2/
void bucketSort::bucketSortRun(){

    // creating bucket using vector
    vector<double> bucketVector[size];

    // cycle through all elements
	for (int i = 0; i < size; i++){
        // finding correct index in bucket and inserting
		int bi = size * ptr[i];
		bucketVector[bi].push_back(ptr[i]);
	}

	// sort each bucket individually
	for (int i = 0; i < size; i++){
		sort(bucketVector[i].begin(), bucketVector[i].end());
    }

	// bring back all buckets into single array ptr
	int index = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < bucketVector[i].size(); j++){
			ptr[index++] = bucketVector[i][j];
        }
    }
}

// print ptr array 
void bucketSort :: printer(){
    for (int i = 0; i < size; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
}

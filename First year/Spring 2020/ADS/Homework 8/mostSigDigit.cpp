#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

/*
    CH-231-A
    a8 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype functions
// having to use address of vector array 
void bucketSort(vector<int>& array, int power);
void RadixSort(vector<int>& array);
void printarray(vector<int>& array);

int main(){
    // values that are to be sorted and size
	int initVal[]= {39,26,65,61,77,52,45,84,54,60};
    int size = sizeof(initVal) / sizeof(initVal[0]);
    
    // create vector to sort and pass
    vector<int> array(size);
    // fill vector
    for (int i = 0; i < size; i++){
        array[i] = initVal[i];
    }
    
    cout << "Pre sort:" << endl;
    printarray(array);

    // run sort and print
    RadixSort(array);

    cout << "\nPost sort:" << endl;
    printarray(array);

	return 0;
}

// help from https://www.geeksforgeeks.org/bucket-sort-2/ and much from TA for pseudo code
void bucketSort(vector<int>& array, int power){
    // catching base condition
    if(power == 0){
        return;
    }else{
        // The reason why I believe I have to manually set size, https://stackoverflow.com/a/38341284
        // creating vector of buckets
        vector<int> bucket[10];

        // putting items into appropriate buckets
        for (int i = 0; i < array.size(); i++) {
            int position = (array[i]/power) % 10; 
            bucket[position].push_back(array[i]);
	    }

        // Determine if bucket has more than on element and then move right and call recursively
        for(int i = 0; i < array.size(); i++){
            if(bucket[i].size() > 1){
                bucketSort(bucket[i], power/10);
            } 
        }

        // concatenate arrays back into main array
        int index = 0;
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < bucket[i].size(); j++){
                array[index++] = bucket[i][j];
            }
        }
    }
}

void RadixSort(vector<int>& array){
    // find max element in vector
    int max = array[0];
    for (int i = 0; i < array.size(); i++){
        if(max < array[i]){
            max = array[i];
        }
    }

    // Help from TA session and pseudo code
    int power = 1;
    while(max/power >= 10){
        power = power * 10;
    }

    // calling bucketSort function
    bucketSort(array, power);
}

// print function to print array
void printarray(vector<int>& array){
    // cycle through and print
    for (int i = 0; i < array.size(); i++){
		cout << array[i] << " ";
    }
    cout << endl;
}

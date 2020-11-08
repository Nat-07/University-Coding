#include <iostream>

using namespace std;

/*
    CH-230-A
    a9 p8.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void subtract_max(int arr[], int n){
    // init vars
    bool first = true;
    int max;
    int sum = 0;

    for (int i = 0; i < n; i++){
        // if first time through for loop
        if(first){
            max = arr[i];
            first = false;
        }
        // detect new max
        if(arr[i] > max){
            max = arr[i];
        }
        // add to sum
        sum += arr[i];
    }
    // print on the screen the sum minus the max element
    cout << "All elements minus greatest value = " << sum-max << endl;
}

// deallocate the memory from the pointer
void deallocate(int a[]){
    delete a;
}

int main(){

    // init vars
    int n;
    int *a;

    // get length
    cin >> n;
    
    // allocating memory
    a = new int [n];

    // give values to array
    for (int i = 0; i < n; i++){
       cin >>  a[i];
    }
    
    // call functions
    subtract_max(a,n);
    deallocate(a);
   
   return 0;
}


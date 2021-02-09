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

    for(int i = 0; i < n; i++){
        // if first time through for loop
        if(first){
            max = arr[i];
            first = false;
        }
        // detect new max
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // going through array and current_item = max - current_item 
    for (int j = 0; j < n; j++){
        arr[j] = max - arr[j];
    } 
}

// deallocate the memory from the pointer
void deallocate(int a[]){
    delete[] a;
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

    // new line for readability + info
    cout << "\n\nAfter All values were subtracted by max:" << endl;

    // print all items in changed array
    for (int j = 0; j < n; j++){
        cout << a[j] << endl;
    }

    // run deallocation function
    deallocate(a);
   
   return 0;
}


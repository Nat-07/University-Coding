#include <iostream>
#include <cmath>
using namespace std;

/*
    CH-230-A
    a9 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int myfirst(int arr[]){
    int i;
    // cycle through passed array and check if bigger than 0 and even
    for(i = 0; i < 5; i++){
        if(arr[i] > 0 && arr[i] % 2 == 0){
            // return first instance
            return arr[i];
        }
    }
    // return -1 as requested
    return -1;
};

double myfirst(double arr2[]){
    int i;
    /*
        iterate through passed array and check if smaller than 0
        and not a fraction by using the floor function that returns 
        the largest int value which is smaller than the given value.

        Hence, we are checking if it the original value is equal to the
        floored value.
    */
    for (i = 0; i < 5; i++){
        if (arr2[i] < 0 && floor(arr2[i]) == arr2[i]){
            // return first instance
            return arr2[i];
        }
        
    }
    // return -1.1 as requested
    return -1.1;
};

char myfirst(char arr[]){
    int i;
    // cycle through array and check if given element is not equal to vowels
    for (i = 0; i < 5; i++){
        if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] 
        != 'o' && arr[i] != 'u'){
            // return first instance
            return arr[i];
        }
    }

    // return '0' otherwise
    return '0';
};

int main(){
    // init arrays
    int arrInt[5] = {-9, -2, 4, 3, 8};
    double arrDouble[5] = {100, -100.6, -90, 49, 2};
    char arrChar[5] = {'a', 'e', 'p', 'd', 'i'};
   
    // check return value against supplied value and print
    if(myfirst(arrInt) != -1){
        cout << "First positive and even value from array: " <<
        myfirst(arrInt) << endl;
    }
    
    if(myfirst(arrDouble) != -1.1){
        cout << "First negative and non fractional value from array: " <<
        myfirst(arrDouble) << endl;
    }
    
    if(myfirst(arrChar) != '0'){
        cout << "First consonant is: " << myfirst(arrChar) << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
    CH-231-A
    aA1 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// complex object class
class complexObject{

    private:
        int real;
        int imagine; 

    public:
        // parmetric constructor
        complexObject(int newReal, int newImagin);
        // overloaded == 
        bool operator == (const complexObject& obj);
         
};

// parametric constructor
complexObject:: complexObject(int newReal, int newImagine){
    this->real = newReal;
    this->imagine = newImagine;
};

// overloaded == so we can compare to check if in array
bool complexObject :: operator == (const complexObject& obj){
    // check if imagineary part & real of passed object is equal
    if (this->imagine ==  obj.imagine && this->real == obj.real){
        return true;
    }else{
        return false;
    }
    
}

// creating a template function
template <class universal>
int array_search(universal array[], int size, universal lookItem){
    for(int i = 0; i < size; i++){
        // if found then return the index (which is the iterator)
        if(array[i] == lookItem){
            return i;
        }
    }
    // return -1 if not found
    return -1;
}

int main(){
    // arrays of different data types
    int intArray[9] = {1,2,3,4,5,6,7,8,9};
    char charArray[8] = "testing";
    double doubleArray[9] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    complexObject complexArray[5] = {complexObject(1,2), complexObject(3,4), 
    complexObject(5,6), complexObject(2,8), complexObject(9,10)};
    
    cout << "Return a valid index as they exist in the array\n" << endl;
    // these will return a valid index as their contents are in the arrays
    cout << "5 found at index:    " << array_search(intArray, 9, 5) << endl;
    cout << "'g' found at index:  " << array_search(charArray, 7, 'g') << endl;
    cout<<"6.6 found at index:  " << array_search(doubleArray, 9, 6.6) << endl;
    // split to not break 80 char in line
    cout << "complexObject(5,6) found at index:   " <<
    array_search(complexArray, 4, complexObject(5,6)) << endl;

    cout << "__________________________________________________\n" << endl;
    cout << "Return -1 as they don't exist in the array" << endl;
    // as 100 is not in the array, we get returned -1
    cout << array_search(intArray, 9, 100) << endl;
    // w is not in the array so return -1
    cout << array_search(charArray, 7, 'w') << endl;
    // 0.5 not in array so return -1
    cout << array_search(doubleArray, 9, 0.5) << endl;
    // as the complex number 1,5 is not in the array, -1
    cout << array_search(complexArray, 4, complexObject(1,5)) << endl;

    return 0;
}

#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;

/*
    CH-230-A
    a11 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// default constructor
Vector :: Vector(){
    size = 3;
    ptr_Vector = new double[size];
    for(int i=0 ; i<size ; i++){
        // giveing a value to default
        ptr_Vector[i] = (i*2);
    }
}

// param constructor (passing size & vector values through ptr)
Vector :: Vector(int newSize, double *newPtr){
    // first setting size for allocation
    size = newSize;

    // dynamically allocating memory 
    ptr_Vector = new double[size];

    // copy values from oldptr to new allocated one
    for(int i=0 ; i<size ; i++){
        ptr_Vector[i] = newPtr[i];
    }
}

// copy constructor
Vector :: Vector(const Vector& info){
    size = info.size;
    ptr_Vector = new double[size];

    for (int i = 0; i < info.size; i++){
        ptr_Vector[i] = info.ptr_Vector[i];
    }
}

// deconstructor
Vector :: ~Vector(){
    cout << "Deconstructor run!" << endl;
    delete[] ptr_Vector;
}

// print the values with a space
void Vector :: print() const{
    for (int i = 0; i < size; i++){
        cout << ptr_Vector[i] << " ";
    }
    cout << "\n";
}

// getters
double Vector :: getPointer() const{
    return *ptr_Vector;
}

double Vector :: getSize() const{
    return size;
}

// self made value to get index value
double Vector :: getValue(int index) const{
    return ptr_Vector[index];
}

// setters
void Vector :: setPointer(double *ptr){
    ptr_Vector = ptr;
}

void Vector :: setSize(double newSize){
    size = newSize;
}

// adding method
Vector Vector :: add(const Vector fourthVector){

    // creating a new object
    Vector summedValues;

    // cycle through setting value of of summedValue index to obj1 + obj2
    for (int i = 0; i < 3; i++){
        summedValues.ptr_Vector[i] = ptr_Vector[i] + fourthVector.getValue(i);
    }
    
    // passing back object we are workign with
    return summedValues;
    
}

// subtract method
Vector Vector :: sub(const Vector fourthVector){

    // creating a new object
    Vector subValues;

    // cycle through setting value of of summedValue index to obj1 + obj2
    for (int i = 0; i < 3; i++){
        subValues.ptr_Vector[i] = ptr_Vector[i] - fourthVector.getValue(i);
    }
    
    // passing back object we are workign with
    return subValues;
    
}

// scaler method
Vector Vector :: scaler(const Vector fourthVector){

    // creating a new object
    Vector scaleValues;

    // cycle through setting value of of summedValue index to obj1 + obj2
    for (int i = 0; i < 3; i++){
        scaleValues.ptr_Vector[i] = ptr_Vector[i] * fourthVector.getValue(i);
    }
    
    // passing back object we are workign with
    return scaleValues;
    
}

// 
double Vector :: norm(){
    // temp value to add
    double temp = 0;
    // cycle through
    for (int i = 0; i < size; i++){
        temp += ptr_Vector[i] * ptr_Vector[i];
    }

    // squareroot value
    return sqrt(temp);
}

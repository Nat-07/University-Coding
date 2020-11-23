
#include <iostream>
#include "Vector.h"
using namespace std;

/*
    CH-230-A
    a11 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(int argc, char** argv){
    // initaiting values for our vectors
    double vector2[3] = {4,5,6};
    double vector4[3] = {11,13,19};

    // setting pointers to vectors
    double *ptr2 = vector2;
    double *ptr4 = vector4;

    // default constructor for first object
    Vector v1;
    // given params for second object
    Vector v2(3, ptr2); 
    // running the copy constructor method for third object
    Vector v3 = v2;
    // given params for fourth object
    Vector v4(3, ptr4);

    // call the norm method and print on the screen the answer
    cout << "Norm of 2nd vector = " << v2.norm() << "\n" << endl;

    // scaler product + print
    cout << "Scaler product of 2nd and 4th vectors = ";
    (v2.scaler(v4)).print();

    
    cout << "\n" << endl;

    // Adition + print
    cout << "Adition of 2nd and 4th vectors = ";
    (v2.add(v4)).print();
    
    cout << "\n" << endl;

    // subtract + print
    cout << "Subtraction of 2nd and 4th vectors = ";
    (v2.sub(v4)).print();

    cout << "\n" << endl;

    return 0;
}

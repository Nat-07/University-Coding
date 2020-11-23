#include <iostream>
#include <cstdlib>
#include "Box.h"
using namespace std;

/*
    CH-230-A
    a11 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/


int main(int argc, char** argv){
    // init vars
    int n;
    Box *ptr;
    double mainWidth, mainHeight, mainDepth;

    // input for n
    cin >> n;

    // dynamic allocation
    ptr = new Box [2*n];

    // get values for all boxes and set them for respective instance
    for (int i = 0; i < n; i++){
        cin >> mainWidth;
        ptr[i].setWidth(mainWidth);

        cin >> mainHeight;
        ptr[i].setHeight(mainHeight);

        cin >> mainDepth;
        ptr[i].setDepth(mainDepth);

    }

    // copy other half 
    for(int j = n; j < (n*2); j++){
       ptr[j] = Box(ptr[j-n]);
    }

    // print the volume for each instance 
    for(int k = 0; k < (n*2); k++){
        cout << "Volume = " << 
        (ptr[k].getDepth() * ptr[k].getHeight() * ptr[k].getWidth()) << endl;
    }
    
    // deallocate memory
    delete[] ptr;

    return 0;
}
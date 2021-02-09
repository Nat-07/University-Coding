#include <iostream>
#include "Box.h"
using namespace std;

/*
    CH-230-A
    a11 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// default
Box :: Box(){
    
}

// Constructor
Box :: Box(double heightParam, double widthParam, double depthParam){
    height = heightParam;
    width = widthParam;
    depth = depthParam;
}

// copy Constructor
Box :: Box(const Box &b){
    height = b.height;
    width = b.width;
    depth = b.depth;
}

// Destructor
Box :: ~Box(){
    cout << "Destructor run" << endl;
}

// setters
void Box :: setHeight(double newHeight){
    height = newHeight;
}

void Box :: setWidth(double newWidth){
    width = newWidth;
}

void Box :: setDepth(double newDepth){
    depth = newDepth;
}

// getters
double Box :: getHeight(){
    return height;
}

double Box :: getWidth(){
    return width;
}

double Box :: getDepth(){
    return depth;
}
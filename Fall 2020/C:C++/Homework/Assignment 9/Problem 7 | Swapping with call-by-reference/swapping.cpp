#include <iostream>
using namespace std;

/*
    CH-230-A
    a9 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// switching which address they are associated with
void swapping(int &a, int &b){
    // creating a temp int and setting to b
    int temp = b;
    b = a;
    a = temp;   
}

// switching which address they are associated with
void swapping(float &a, float &b){
    // init temp float as a temperary storage for b
    float temp = b;
    b = a;
    a = temp;  
}

// switching which address they are associated with
void swapping(const char *&str1, const char  *&str2){
    // making a temp const char pointer to hold when switching
    const char *temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(void){
    // init all vars
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    // printing before
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    // running functions
    swapping(a,b);
    swapping(x,y);
    swapping(str1,str2);

    // printing after
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}

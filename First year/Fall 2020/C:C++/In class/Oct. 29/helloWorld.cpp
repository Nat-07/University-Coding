#include <iostream>

/*

    either use: 

    using namespcae std;

    or have to write std ::

*/

int main(){

    // print Hello World
    std :: cout << "Hello World!" << std:: endl;

    // << sends var to object
    // endl is new line

    std :: cout << 11 << std:: endl;

    std :: cout << 1.2455 << std :: endl;

    // multiple in the same line
    std :: cout << 1.2455 << " " << "test" << " " << 1 << std :: endl;

    // define x and print
    int x = 5;

    std :: cout << x << std :: endl;

    return 0;
}
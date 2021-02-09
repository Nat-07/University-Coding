#include <stdio.h>
#include <stdlib.h>


/*
    Define macro:
    Setting bitValue equal to the resulting value of char bitwise 
    AND opperator. If the least significant bit 1, then it will result 1.
    Otherwise it will result 0.
*/

#define leastSigBit(inputChar,bitValue) {bitValue = inputChar & 1;}

/*
    CH-230-A
    a6 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    
    // init unsigned char and then scan for it
    unsigned char inputChar;
    scanf("%c", &inputChar);

    int bitValue; 
    
    // run macro
    leastSigBit(inputChar, bitValue);

    // print the decimal representation and least significant bit
    printf("The decimal representation is: %d\n", inputChar);
    printf("The least significant bit is: %d\n", bitValue);

    return 0;
}

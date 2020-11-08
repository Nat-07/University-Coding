#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    CH-230-A
    a6 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init input
    unsigned char input;
    
    // get value of input and print
    scanf("%c", &input);

    // print out the decimal representation
    printf("The decimal representation is: %d\n", input);

    // get the # of bits that we will have
    const int maxbit = log2(input)+1;

    /*
        Print out backwards the binary representation by for maxbit # of times
        Test if 1 or 0 and then print result
    */
    printf("The backwards binary representation is: "); 
    for (int i = 0; i < maxbit; i++){
        printf("%d", ((input >> i)&1));
    }

    printf("\n");

    return 0;
}

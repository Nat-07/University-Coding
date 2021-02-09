#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
    CH-230-A
    a6 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init the input
    unsigned char input;
    
    // get value of input and print
    scanf("%c", &input);

    // print out the decimal representation
    printf("The decimal representation is: %d\n", input);

    // get the # of bits that we will have and add 2 (as test case requested)
    int maxbit = log2(input)+2;

    // print through. But as we are starting from the last we have to subtract
    printf("The binary representation is: "); 
    for (int i = maxbit; i >= 0; i--){
        printf("%d", (input >> i)&1);
    }

    printf("\n");

    return 0;
}
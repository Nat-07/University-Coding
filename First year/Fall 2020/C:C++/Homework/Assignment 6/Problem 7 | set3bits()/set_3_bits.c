#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a6 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototyping function
void set3bits(unsigned char *input, int b, int c, int d);

int main(){

    // init vars
    unsigned char unChar, *ptr;
    int bit1, bit2, bit3;

    // get values and negate \n with getchar
    scanf("%c", &unChar);
    getchar();
    scanf("%d", &bit1);
    getchar();
    scanf("%d", &bit2);
    getchar();
    scanf("%d", &bit3);

    // set pointer to print
    ptr = &unChar;

    // simple decimal representation print
    printf("The decimal representation is: %d\n", unChar);

    // print the binary values before minipulated
    printf("The binary representation is: ");
        for (int i = 8; i > 0; i--){
        printf("%d", (unChar >> (i-1))&1);
    }
    printf("\n");

    // run function to change bits
    set3bits(ptr, bit1, bit2, bit3);

    // print all bits (after edited)
    printf("After setting the bits: ");
    for (int i = 8; i > 0; i--){
        printf("%d", (unChar >> (i-1))&1);
    }
    printf("\n");

    return 0;
}

// function that changes specific bits
void set3bits(unsigned char *input, int b, int c, int d){
    /*
        Chanage the value of the bits, of the pointer's corresponding 
        value at index b,c and d.

        Template:

        var_to_change |= (new value << index);
    */

    *input |= (1 << b);
    *input |= (1 << c);
    *input |= (1 << d);

}

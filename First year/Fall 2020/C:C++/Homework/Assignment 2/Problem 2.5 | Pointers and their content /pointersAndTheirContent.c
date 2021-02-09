#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a2 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    int userInput;

    scanf("%d", &userInput);
    printf("Value inputted: %d\n", userInput);

    // declare pointer and map it to user input
    int *ptr_a;
    ptr_a = &userInput;

    printf("Address: %p\n", ptr_a);

    // add 5 to a using address
    *ptr_a = *ptr_a + 5;

    printf("New value = %d\n", *ptr_a);
    printf("Address: %p\n", ptr_a);

    return 0;
}
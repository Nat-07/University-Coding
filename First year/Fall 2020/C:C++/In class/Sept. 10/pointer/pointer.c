#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 10;
    // use &a to get memory address

    printf("Address of a: %p\n", &a);


    // --------------------------------------


    // delcare pointers using "*"
    int *ptr;

    printf("Address of ptr: %p\n", &ptr);


    // --------------------------------------

    //using pointer to add 10 to 5
    int b = 10;
    int *ptr_2;
    ptr_2 = &b;
    *ptr_2 = *ptr_2 + 5;
    printf("Value of b = %d", *ptr_2);


    return 0;
}
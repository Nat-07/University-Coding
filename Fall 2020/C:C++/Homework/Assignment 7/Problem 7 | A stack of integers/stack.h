/*
    CH-230-A
    a7 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

//Imports
#include <stdio.h>
#include <stdlib.h>

//struct definition
struct stack {
    unsigned int count;
    int array[12];
};

//Function prototypes
struct stack *init();
struct stack *push(int n, struct stack *s);
struct stack *pop(struct stack *s);
struct stack *empty(struct stack *s);
int isEmpty(struct stack *s);
int isFull(struct stack *s);
/*
    CH-230-A
    a7 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

//Imports
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    //Variable decleration and implementation
    char c;
    int n;
    struct stack *s = init();
    //Userinput
    while(1){
        scanf("%c", &c);
        switch (c){

        case 's':
            scanf("%d", &n);
            printf("Pushing ");
            s = push(n,s);
            printf("\n");
            break;

        case 'p':
            printf("Popping ");
            s = pop(s);
            printf("\n");
            break;

        case 'e':
            s = empty(s);
            break;

        case 'q':
            printf("Quit");
            exit(0);
            break;
        }
    }

    return 0;
}

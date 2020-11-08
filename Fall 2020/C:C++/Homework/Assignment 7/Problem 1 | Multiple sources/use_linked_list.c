// for exit
#include <stdlib.h>
// for scanf
#include <stdio.h>
// "import" to use my_list
#include "linked_list.h"

/*
    CH-230-A
    a7 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    /* When using self-referential structures, NULL is used to
    indicate end of info */
    a.next = NULL; 

    // init user values
    char charInput;
    int intInput;

    do{
        scanf("%c", &charInput);

        //free list and quit
        switch (charInput){
        case 'q':
            dispose_list(my_list);
            exit(0);
            break;
        
        // print linked list
        case 'p':
            print_list(my_list);
            break;
        
        // dispose of first element
        case 'r':
            my_list = dispose_firstElem(my_list);
            break;
        }
        
        // if not others we need another input
        scanf("%d", &intInput);

        switch(charInput){
        // add to front
        case 'b':
            my_list = push_front(my_list, intInput);
            break;
        
        // add to back
        case 'a':
            my_list = push_back(my_list, intInput);
            break;
        default:
            break;
        }

    // run forever (or until q with exit(0))
    }while (1);
}

#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a6 p8.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype
struct list *push_back(struct list * my_list, int value);
struct list *push_front(struct list *my_list, int value);
void print_list(struct list *my_list);
void dispose_list(struct list *my_list);
struct list *dispose_firstElem(struct list *my_list);


// set struct
struct list{
    int info;
    struct list *next;
};

// building linked list
struct list a;
struct list *my_list;


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


//insert at end
struct list *push_back(struct list * my_list, int value){
    struct list *cursor, *newel;
    // allocate memory
    cursor = my_list;
    newel = (struct list *)malloc(sizeof(struct list));
    
    // if problem arises, throw error
    if (newel == NULL){
        printf ("Error allocating memory \n");
        return my_list;
    }
    newel -> info = value;
    newel -> next = NULL;
    if (my_list == NULL){
        return newel;
    }
    while (cursor -> next != NULL){
        cursor = cursor -> next;
    }
    cursor -> next = newel;
    return my_list;
}

// insert at beginning
struct list *push_front(struct list *my_list, int value){
    struct list *newel;
    // allocate memory
    newel = (struct list *)malloc(sizeof(struct list));
    // if problem arises, throw error
    if (newel == NULL){
        printf ("Error allocating memory\n");
        return my_list;
    }
    // modifing structure, just as would with pointer  
    newel -> info = value;
    newel -> next = my_list;
    return newel;
}

// print list
void print_list(struct list *my_list){
    struct list *p;
    // loop through list and print
    for (p = my_list; p; p = p -> next){
        printf("%d ", p -> info);
    }
    printf("\n");
}

// free whole list
void dispose_list(struct list *my_list){
    struct list *nextelem;
    // not until it is free, loop through and free
    while(my_list != NULL){
        // modifing structure
        nextelem = my_list -> next;
        free(my_list);
        my_list = nextelem;
    }
}

// free first element of list
struct list *dispose_firstElem(struct list *my_list){
    struct list *nextelem;
    // making sure not NULL, and if not, free
    if (my_list != NULL){
        // modifing structure
        nextelem = my_list -> next;
        free(my_list);        
        return nextelem;
    }else{
        return my_list;
    }
}
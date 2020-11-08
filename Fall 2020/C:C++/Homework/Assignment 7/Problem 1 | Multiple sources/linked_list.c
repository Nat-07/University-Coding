// "import" structs 
#include "linked_list.h"
// include for malloc
#include <stdlib.h>
// for printf
#include <stdio.h>

/*
    CH-230-A
    a7 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

//insert at end
struct list *push_back(struct list *my_list, int value){
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

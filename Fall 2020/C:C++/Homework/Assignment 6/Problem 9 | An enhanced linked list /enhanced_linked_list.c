#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a6 p9.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// init struct
struct list{
    int info;
    struct list *next;
};

struct list a;
struct list *my_list;

//Function prototypes
struct list *push_back(struct list *my_list, int value);
struct list *push_front(struct list *my_list, int value);
void print_list(struct list *my_list);
void dispose_list(struct list *my_list);
struct list *dispose_firstElem(struct list *my_list);
struct list *addInList(struct list *my_list, int value, int pos);
struct list *reverse_list(struct list *my_list, int n);
int getLength_list(struct list *my_list);

int main(){
    /* When using self-referential structures, NULL is used to
    indicate end of info */
    a.next = NULL;

    do{
        char charInput;
        scanf("%c", &charInput);
        int intInput;
        int index;

        switch(charInput){
            
            // add to front
            case 'b':
                scanf("%d", &intInput);
                my_list = push_front(my_list, intInput);
                break;
            
            // add to back
            case 'a':
                scanf("%d", &intInput);
                my_list = push_back(my_list, intInput);
                break;
            
            // reverse list
            case 'R':
                my_list = reverse_list(my_list,getLength_list(my_list));
                break;

            //free list and quit
            case 'q':
                dispose_list(my_list);
                // stop the program
                exit(0);

                break;

            // dispose of first element
            case 'r':
                my_list = dispose_firstElem(my_list);
                break;

            // print linked list
            case 'p':
                print_list(my_list);
                break;

            // insert into index
            case 'i':
                //get user input for index and value
                scanf("%d", &index);
                scanf("%d", &intInput);
                
                /* 
                    test less than 0 and using length function
                    to check if possbile. If not then we print that its in 
                    invalid.

                    Otherwise we run the function and give our list the result
                */
                if(index < 0 || index > getLength_list(my_list)){
                    printf("Invalid position!\n");
                    break;

                }else{
                    
                    my_list = addInList(my_list, intInput, index);
                    break;
                }

                break;
        }

    }while(1);

    return 0;
}


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

struct list *addInList(struct list *my_list, int value, int pos){

    /*
        To add an element in a list we need to move through the list.
        Thus why we have 2 cursors and one pointer for the value
    */

    struct list *cursor, *cursor_after, *newel;
    cursor = my_list;
    cursor_after = my_list;

    // allocate memory
    newel = (struct list *)malloc(sizeof(struct list));

    // make sure not null
    if (newel == NULL){

        //abort if fail
        return my_list;
    }

    // if pos is zero we take a new route
    if(pos == 0){

        newel->info = value;
        newel->next = cursor;
        my_list = newel;
        return my_list;

    // if not zero then we take another course
    }else{

        // find the position and add
        
        for(int i = 0; i<pos-1; i++){
            cursor = cursor -> next;
        }
        for(int i = 0; i<pos; i++){   
            cursor_after = cursor_after -> next;
        }
        
        cursor->next = newel;
        newel->info = value;
        newel->next = cursor_after;
    }
    
    // return changed list
    return my_list;
}

struct list *reverse_list(struct list *my_list, int n){

    // init pointers
    struct list *first_cursor, *second_cursor, *third_cursor;
    first_cursor = my_list;
    second_cursor = my_list;
    third_cursor = my_list;

    // check if empty, then return
    if(n == 0){
        return my_list;
    }

    // iterate through list
    for(int i = 0; i<n; i++){
        if(i == 0){

            // if the element, then more cursor through
            first_cursor = first_cursor->next;
            second_cursor->next = NULL;
        }
        else{

            second_cursor= first_cursor;
            first_cursor = first_cursor->next;
            second_cursor->next = third_cursor;
            third_cursor = second_cursor;
        }
    }
    
    my_list = second_cursor;
    return my_list;
}

int getLength_list(struct list *mylist){
    struct list *cursor;
    cursor = my_list;
    int count=1;

    //Should the pointer point to NULL return 0
    if(cursor == NULL){
        return 0;
    }
    
    // keep going until we find NULL
    do{
        // move curser and add count
        cursor = cursor ->next;
        count++;
    }while(cursor->next != NULL);

    return count;
}
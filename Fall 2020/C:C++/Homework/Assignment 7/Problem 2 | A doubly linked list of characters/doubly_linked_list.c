#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

/*
    CH-230-A
    a7 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// Much help from: https://www.geeksforgeeks.org/doubly-linked-list/

// init list
struct Node { 
	char data; 
	struct Node* next; 
	struct Node* prev; 
};

// prototyped functions
void addFront(struct Node** head, char userChar);
void printList(struct Node *node);
void printListBack(struct Node* node);
struct Node* deleteSpecificElem(struct Node *head, char userChar);
void disposeAllList(struct Node *head);


int main(){ 
	/* Start with the empty list */
	struct Node* head = NULL; 

    char charInput;
    int intInput;

    do{
        // get user input
        scanf("%d", &intInput);

        // check which case
        switch(intInput){
            case 1:
                // scan and add char to front
                scanf(" %c", &charInput);
                addFront(&head, charInput);
                break;
            
            case 2:
                // scan item and delete all occurrences of such item
                scanf(" %c", &charInput);
                head = deleteSpecificElem(head, charInput);
                break;
            
            case 3:
                // print forwards
                printList(head);
                break;
            
            case 4:
                // print backwards
                printListBack(head);
                break;
            
            case 5:
                // delete nodes and exit
                disposeAllList(head);
                exit(0);
                break;
            
            default:
                break;
        }
        
    // always run. Only breaks by case 5, exit(0)
    }while (1);

	return 0; 
} 

void addFront(struct Node** head, char userChar){
    /* allocate node */
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 
    /* put in the data  */
    newNode->data = userChar;
 
    /* since we are adding at the beginning,
    prev is always NULL */
    newNode->prev = NULL;
 
    /* link the old list off the new node */
    newNode->next = (*head);
 
    /* change prev of head node to new node */
    if ((*head) != NULL)
        (*head)->prev = newNode;
 
    /* move the head to point to the new node */
    (*head) = newNode;
}

// print list
void printList(struct Node *node){ 
    
        // cycle through list while node is not empty and print
        while (node != NULL){
            printf("%c ", node->data);
            
            // shift position
            node = node->next;
        }

    // get new line
    printf("\n");
}

// This function prints contents of linked list starting from the given node
void printListBack(struct Node* node){ 
	struct Node* last; 

    // traverse forwards to set up list for backwards
    while(node != NULL){ 
        last = node; 
        node = node->next; 
    }

    // traverse backwards
	while(last != NULL){
        // print item
		printf("%c ", last->data); 
		last = last->prev; 
	}
    // new line
    printf("\n");
}

// delete all elements form list if they match passed char
struct Node* deleteSpecificElem(struct Node *head, char userChar){
    // set up our movement pointers
    struct Node *prev = NULL;
    struct Node *cursor = head;
    struct Node *next = cursor -> next;

    // bool for print statement later
    bool nothingFound = true;

    // while we have not gone through whole list
    while(next != NULL){

        //move through list
        prev = cursor -> prev;
        next = cursor -> next;
        
        // check if equal to user inputted value
        if (cursor -> data == userChar){
            // set bool to false
            nothingFound = false;

            // move next pointer
            if (cursor -> next != NULL){
                next -> prev = cursor -> prev;
            }

            // move prev pointer
            if (cursor -> prev != NULL){
                prev -> next = cursor -> next;
            }

            // free memory of such element
            free(cursor);
        }

        // move cursor
        cursor = next;
    }
    
    // if nothing is found print
    if(nothingFound){
        printf("The element is not in the list!\n");
    }

    // move pointer back
    while (prev != NULL){
        cursor = prev;
        prev = cursor -> prev;
    }

    return cursor;
}

void disposeAllList(struct Node *head){
    struct Node *cursor;

    // not until it is free, loop through and free
    while(head != NULL){

        // use pointer to move through
        cursor = head -> next;

        // free first elem
        free(head);

        // cycle to next elem
        head = cursor;
    }
}

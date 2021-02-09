#include <stdlib.h>
#include <stdio.h>


struct Node{
    int data;
    struct Node* next;
};

void printer(struct Node* n){
    
    while(n != NULL){
        printf("%d\n", n->data);
        n = n-> next;

    }
    

}


struct Node* add(struct Node* node){

    struct Node* temp;

    temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("ERROR!");
    }

    temp -> next = node;
    temp -> data = 9;

    return temp;
}


int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    head = add(head);

    printer(head);


    return 0;
}
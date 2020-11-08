/**
* @file queue.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
    CH-230-A
    a8 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void initialize_queue(Queue *pq){
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq){
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq){
	return pq->items == 0;
}

int queue_item_count(const Queue *pq){
	return pq->items;
}

int enqueue(Item item, Queue *pq){

    if (queue_is_full(pq) == 1){
		return -1;
		
	}else{
		// new node
		Node* tempNewNode;
		
		// allocate memory and check if there was error
		tempNewNode = (Node*)malloc(sizeof(Node));
		if (tempNewNode == NULL){
			// error, so quit
			return -1;
		}

		// item to new node
		tempNewNode -> item = item;

		// at end of list, and set to NULL
		tempNewNode -> next = NULL;

		if(queue_is_empty(pq) == 1){

			// if there is no tail, connect
			pq -> front = tempNewNode;
		}else{

			// else there is a tail, connect it to the tail
			pq -> rear -> next = tempNewNode;
		}

		// setting the rear to our new node
		pq -> rear = tempNewNode;

		// add one
		pq -> items++;

		// return 0 as requested in queue.h
		return 0;
	}
}

int dequeue(Item *pitem, Queue *pq){

	// checking if queue is empty
	if(queue_is_empty(pq)){
		// as asked by queue.h
		return -1;
	}else{
		
		*pitem = pq -> front -> item;

		// allocate memory to tempNewNode and check if failed
		Node* tempNewNode;
		tempNewNode = (Node*)malloc(sizeof(Node));
		if(tempNewNode == NULL){
			exit(1);
		}else{

			// give tempNewNode a value
			tempNewNode = pq -> front;

			// remove from list. Moving to the front of the list
			pq -> front = pq -> front -> next;
			
			// decrementing count 
			pq -> items--;

			// setting pointers to null
			if(pq -> front == 0){
				pq -> rear = NULL;
				pq -> front = NULL;
			}
			
		}

		// freeing tempNewNode
		free(tempNewNode);
		return 0;
	}
	
    return -1;
}

void printq(Queue *pq){
		
	// init and allocate new node
	Node *tempNewNode = (Node*)malloc(sizeof(Node));

	tempNewNode = pq -> front;
	
	// while the pointer is not NULL cycle through
	while(pq -> front != NULL){
		// print item in that location
		printf("%i ", pq -> front -> item);
		// next item
		pq -> front = pq -> front -> next;
	}

	// new line for test cases
	printf("\n");

	// reset pointer
	pq -> front = tempNewNode;
	
}

void empty_queue(Queue *pq){
	Item dummy;
	while (!queue_is_empty(pq)){
		dequeue(&dummy, pq);
	}
}
/**
* @file queue.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
    CH-230-A
    a8 p1.[c]
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

	//As per requested in lecture 8 slide 12

    if (queue_is_full(pq)){
		return -1;
		
	}else{
		// new node
		Node* newNode;
		
		// allocate memory and check if there was error
		newNode = (Node*)malloc(sizeof(Node));
		if (newNode == NULL){
			// error, so quit
			return -1;
		}

		// item to new node
		newNode -> item = item;

		// at end of list, and set to NULL
		newNode -> next = NULL;

		if(queue_is_empty(pq)){

			// if there is no tail, connect
			pq -> front = newNode;
		}else{

			// else there is a tail, connect it to the tail
			pq -> rear -> next = newNode;
		}

		// setting the rear to our new node
		pq -> rear = newNode;

		// add one
		pq -> items++;

		// free memory
		free(newNode);

		// return 0 as requested in queue.h
		return 0;
	}
}

int dequeue(Item *pitem, Queue *pq){

    return 0;
}

void empty_queue(Queue *pq){
	Item dummy;
	while (!queue_is_empty(pq)){
		dequeue(&dummy, pq);
	}
}
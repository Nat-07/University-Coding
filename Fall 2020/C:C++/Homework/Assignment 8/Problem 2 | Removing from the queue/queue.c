/**
* @file queue.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
    CH-230-A
    a8 p2.[c]
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

		if(queue_is_empty(pq)){

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

	//As per directed in lecture 8 slide 13

	// checking if queue is empty
	if(queue_is_empty(pq)){
		// as asked by queue.h
		return -1;
	}else{
		
		// allocate memory to tempNewNode and check if failed
		Node* tempNewNode;
		tempNewNode = (Node*)malloc(sizeof(Node));
		if(tempNewNode == NULL){
			exit(1);

		}else{
			/* 
				set the next item at the front of the queue. Without this
				we would be deleting elements but the print statement would
				not function
			*/
			*pitem = pq -> front -> item;

			/*
				Give tempNewNode a value so when freeing we are freeing
				that item. 
			*/
			tempNewNode = pq -> front;

			// remove from list. Moving to the front of the list
			pq -> front = pq -> front -> next;

			// setting pointers to null
			if(pq -> front == 0){
				pq -> rear = NULL;
				pq -> front = NULL;
			}

			// decrementing item count 
			pq -> items--;
			
		}

		// freeing tempNewNode (outside of else as initted outside of else)
		free(tempNewNode);
		return 0;
	}
	// if for somereason it gets here, return -1
    return -1;
}

void empty_queue(Queue *pq){
	Item dummy;
	while (!queue_is_empty(pq)){
		dequeue(&dummy, pq);
	}
}
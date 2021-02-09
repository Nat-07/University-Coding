/**
    * @file testqueue.c
*/

#include <stdio.h>
#include "queue.h"

/*
    CH-230-A
    a8 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
	Queue line;
	Item temp;
	char ch;
	
	initialize_queue(&line);
	
	while (((ch = getchar()) != EOF) && (ch != 'q')){
        
		switch (ch)	{
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);

				if (!queue_is_full(&line)){
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}else{
					puts("Queue is full");
                }
				break;
			
			case 'p':
				
				// run the function only if not empty
				if(queue_is_empty(&line)){
					// print for grader
					printf("content of the queue: \n");
					
				}else{
					// print for grader
					printf("content of the queue: ");
					printq(&line);
				}
				break;
			
			case 'd':
				if(queue_is_empty(&line)){
					puts("Nothing to delete!");
				}else{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, p to print, q to quit:");
		}
	}

	empty_queue(&line);
    
	puts("Bye.");

	return 0;
}
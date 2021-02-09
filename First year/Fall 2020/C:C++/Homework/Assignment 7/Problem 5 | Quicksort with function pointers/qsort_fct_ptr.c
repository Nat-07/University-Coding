#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a7 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

//Function prototypes
int funcAscending(const void *constA, const void *constB);
int funcDescending(const void *constA, const void *constB);

int main(){
    // init vars
    int i, j;
    int length;

    // init array at length of inputted value
    scanf("%d", &length);
    int array[length];

    // cycle through and assign values
    for(i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    // while loop for infinite loop till e (exit(0))
    while(1){

        // init and scan for char from user
        char userChar;
        scanf("%c", &userChar);
        
        switch(userChar){
            case 'a':
                
                // run qsort from library
                qsort(array, length, sizeof(array[0]), funcAscending);
                
                // cycle through array and print
                for (int i = 0; i < length; i++){
                    printf("%d ", array[i]);
                }

                // new line
                printf("\n");
                break;

            case 'd':

                // run qsort from library
                qsort(array, length, sizeof(array[0]), funcDescending);

                // cycle through array and print
                for (j = 0; j < length; j++){
                    printf("%d ", array[j]);
                }

                // new line
                printf("\n");
                break;

            case 'e':
                // quit the program
                exit(0);
                break;
        }
    }
    return 0;
}

// Referenced https://www.geeksforgeeks.org/comparator-function-of-qsort-in-c/

/* 
    This function compares the respective integers and pass (return) along
    the correct value back to qsort. This result tells qsort which number 
    is lesser than the other.
*/ 
int funcAscending(const void *constA, const void *constB) {
   const int* a = (const int*) constA;
   const int* b = (const int*) constB;

    if (*a < *b){
        return  -1;
    }else if (*a > *b){
        return  1;
    }else{
        return  0;
    }
}

/* 
    This function has the same utilization, but the signs are switched and we 
    are descending instead of ascending. This function compares the 
    respective integers and pass (return) along the correct value back 
    to qsort. This result tells qsort which number is lesser than the other.
*/ 
int funcDescending(const void *constA, const void *constB) {
    const int* a = (const int*) constA;
    const int* b = (const int*) constB;

    if (*a < *b){
        return 1;

    }else if (*a > *b){
        return  -1;
    }else{
        return  0;
    }
}
#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void divby5(float arr[], int size);

int main(){
    int i, j;

    // init array
    float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    
    // print before division by 5
    printf("Before:\n");
    for (i = 0; i < 6; i++){
        printf("%.3f ", arr[i]);
    }

    // function for div
    divby5(arr, 6);

    // print after div by 5
    printf("\nAfter:\n");
    for (j = 0; j < 6; j++){
        printf("%.3f ", arr[j]);
    }
    printf("\n");

    return 0;
}

void divby5(float arr[], int size){
    int i;

    // divide values by 5 and write back to array
    for (i = 0; i < size; i++){        
        arr[i] = arr[i]/5;   
    }   
}
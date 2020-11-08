#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void divby5(float arr[], int size);

int main(){
    int n, i, j, k;
    float *arr;

    scanf("%d", &n);

    // allocation of memory to the size of int * n
    arr = (float *)malloc(sizeof(float) * n);
    if (arr == NULL){
        exit(1);
    }
    
    for (i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    
    // print before division by 5
    printf("Before:\n");
    for (j = 0; j < n; j++){
        printf("%.3f ", arr[j]);
    }

    // function for div
    divby5(arr, n);

    // print after div by 5
    printf("\nAfter:\n");
    for (k = 0; k < n; k++){
        printf("%.3f ", arr[k]);
    }
    printf("\n");

    // free memory
    free(arr);

    return 0;
}

void divby5(float arr[], int size){
    int i;

    // divide values by 5 and write back to array
    for (i = 0; i < size; i++){        
        arr[i] = arr[i]/5;   
    }   
}
#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a4 p9.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype
int prodminmax(int arr[], int n);

int main(){

    int i, n, *ptr;
    int userInputNum;

    // get n and init arr with n len
    scanf("%d", &n);

    // dynamic allocate memory 
    ptr = (int *) malloc (sizeof (int) * n);
    int arr[n];

    // for loop to get values from user
    for (i = 0; i < n; i++){
        scanf("%d", &userInputNum);
        arr[i] = userInputNum;
    }
    
    printf("Product = %d\n", prodminmax(arr, n));

    // free memory that ptr was using
    free(ptr);
    
    return 0;
}

int prodminmax(int arr[], int n){

    int max = 0;
    // start min as first element
    int min = arr[0];

    int i, j;
    // find max of array
    for (i = 0; i < n; i++){
        // check current against largest so far
        if(arr[i] > max){
            max = arr[i];
        }
        
    }

    // loop through and find min of array
    for (j = 0; j < n; j++){
        if(arr[j] < min){
            min = arr[j];
        }
    }

    return min*max;
}
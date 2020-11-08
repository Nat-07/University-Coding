// import libraries
#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a4 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void sort(int arr[], int n, int *ptr1, int *ptr2);

int main(){
    
    // pointer for malloc
    int *ptr, *ptr2, *ptr_max1, *ptr_max2;
    int n, i, userinput;
    int max1 = 0;
    int max2 = 0;

    // use pointers for passing max 1 and max 2 between function and main
    ptr_max1 = &max1;
    ptr_max2 = &max2;
    
    // scan for n
    scanf("%d", &n);
    
    // set out pointer, ptr, equal to malloc of size int * n
    ptr = (int *) malloc (sizeof (int) * n);
    ptr2 = (int *) malloc (sizeof (int) * 2);

    // create the array
    int array[n];
    
    // for loop to enter values into array
    for(i = 0; i < n; i++){
        scanf("%d", &userinput);
        array[i] = userinput;
    }
    
    sort(array, n, ptr_max1, ptr_max2);

    printf("Max 1 = %d\n", *ptr_max1);
    printf("Max 2 = %d\n", *ptr_max2);

    // free memory that ptr was using
    free(ptr);
    // free memory from the answers array
    free(ptr2);
    return 0;
}

void sort(int arr[], int n, int *ptr1, int *ptr2){
    int j;

    for(j = 0; j < n; j++){   
        // if first item
        if (j==0){
            *ptr1 = arr[j];
        }else{
            // // if item in array is larger than ptr1 assign value
            if (arr[j] > *ptr1){
                *ptr2 = *ptr1;
                *ptr1 = arr[j];

            // if item in array is larger than ptr2, we assign it value
            }else if (arr[j] > *ptr2){
                *ptr2 = arr[j];
            }
        }
    }
}
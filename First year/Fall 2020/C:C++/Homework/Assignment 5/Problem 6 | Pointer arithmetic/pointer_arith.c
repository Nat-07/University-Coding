#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    int i;
    int len;
    // init pointer for loop
    float *ptr_arr;
    
    scanf("%d", &len);

    // make array
    float arr[len];

    // get user inputs
    for (i = 0; i < len; i++){
        scanf("%f", &arr[i]);
    }

    // pointer arithmetic loop
    for(ptr_arr = arr; ptr_arr < arr + len; ptr_arr++) {
        // if value is less than zero, print
        if (*ptr_arr < -1){
            // split to another line to not go over 80 chars
            printf("Before the first negative value: %ld elements\n", 
            ptr_arr-arr);
            // no need to continue, so break
            break;
        }
        
    }
    return 0;
}

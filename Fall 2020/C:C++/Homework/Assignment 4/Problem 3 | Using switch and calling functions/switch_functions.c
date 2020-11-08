#include <stdio.h>
#include <math.h>

/*
    CH-230-A
    a4 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype functions
float geometric_mean(float arr[], int num);
float maxOfArray(float arr[]);
float minOfArray(float arr[]);
float sum(float arr[]);

int main(){
    // init variables
    float array[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char userInputChar;
    int i, j;
    float userInputNum;
    int counter = 0;

    // for loop to get values from user
    for (i = 0; i < 15; i++){
        scanf("%f", &userInputNum);
        // check if over 0
        if (userInputNum <= -1){
            break;
        }else{
            if(userInputNum == 0){
                /* 
                    Method for finding length of array, checks for zeros.
                    But if user inputs a zero, it will be skipped over. 

                    Catch this by putting a unique value into the 
                    array (-1, as all values should be greater than -1).
                    So when -1 is found in array in functions we deal 
                    with it appropriately by assuming that it is 
                    actually a zero. Thus it is not skipped over.

                */
                array[i] = -1;
            }else{
                // if value is not zero, then normally insert into array
                array[i] = userInputNum;
            }
        }
    }

    // char for switch statement
    scanf(" %c", &userInputChar);

    switch (userInputChar){
    // run functions and print return depending on char
    case 'm':

        /*
            initially had the for loop below in the function, 
            but moved it as we needed to pass two arguments 
            to the function. Thus it is passed in
        */

        for (j = 0; j < 15 && array[j] != '\0'; j++){

            // increment counter for geometric mean equation
            counter++;
        }

        printf("Geometric mean = %f\n", geometric_mean(array, counter));
        break;

    case 'h':
        printf("Max = %f\n",maxOfArray(array));
        break;

    case 'l':
        printf("Min = %f\n",minOfArray(array));
        break;

    case 's':
        printf("Sum = %f\n", sum(array));
        break;

    default:
        break;
    }
    return 0;
}

// geometric mean function
float geometric_mean(float arr[], int num){
    float product = 1;
    float answer;
    int i;

    // go through array and stop at null char
    for (i = 0; i < 15 && arr[i] != '\0'; i++){
        // multiply product variable with index of array
        product *= arr[i];

        /* 
            if -1 (0) is in arr[i] we know geometric mean equals 0.
            In the name of efficiency + fixing a bug in the code we
            stop here and return as we already know the return value
            is zero.
        */

        if (arr[i] == -1){
            answer = 0;
            return answer;
        }       
    }

    /*
        -used power function to root the value of product
        -Cast as float to evade incorrect answers
    */

    answer = powf(product, (1/(float)num)); 
    return answer;
}

// max item in array function
float maxOfArray(float arr[]){
    float max = 0;
    int i;
    // find max of array
    for (i = 0; i < 15 && arr[i] != '\0'; i++){
        // check current against largest so far
        if(arr[i] > max){
            // theoretically never used, implemented for proof of theory
            if (arr[i] == -1){
                // implementation of placeholder of 0 with -1
                max = 0;
            }else{
                max = arr[i];
            }
        }
    }
    return max;
}

// min of array
float minOfArray(float arr[]){
    int i,j;
    float min;

    /*
        run through array and find the last elem in array that 
        is not null and set it equal to min. Thus we will cycle 
        through list comparing it to each elem. When find it break, 
        else pass.
    */

    for (j = 15; j > 0; j--){
        if (arr[j] == '\0'){
            continue;
        }else{
            min = arr[j];
            break;
        }   
    }

    // loop through and find min of array
    for (i = 0; i < 15 && arr[i] != '\0'; i++){
        /* 
            Check current against smallest so far.

            Assume min = 0. Only instance of min being greater arr[i]
            is if arr[i] equals -1. But -1 is is placeholder for 0. 
            So we could just treat -1 as 0.
        */
        if(arr[i] < min){
            // implementation of placeholder of 0 with -1
            if (arr[i] == -1){
                min = 0;
                /* 
                    we know nothing will be smaller than 0, 
                    so no need to continue
                */
                return min;
            }else{
                min = arr[i];
            }
        }
    }
    return min;
}

// sum of array
float sum(float arr[]){
    int i;
    float sum = 0;
    // loop through + sum array 
    for (i = 0; i < 15 && arr[i] != '\0'; i++){

        /*
            -1 is placeholder 0. So if our value is 
            -1 we just pass over it as adding 0 does 
            not change sum.
        */

        if (arr[i] == -1){
            continue;
        }else{
            // sum is equal to sum + current element in array
            sum += arr[i];
        }        
    }
    return sum;
}
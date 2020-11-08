/*
    CH-230-A
    a3 p8.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


// prototype functions
float sum(float values[]);
float avarage(float sum, float averageCount);


int main(){

    // array to hold values
    float arr[10] = {0,0,0,0,0,0,0,0,0,0};

    int i;
    int averageCount = 0;
    float temp, sumValues;
    
    // get 10 values unless -99 inputted, then break
    for (i = 0; i < 10; i++){

        // use temp to test value for -99
        scanf("%f", &temp);
        
        if (temp == -99){
            break;
        }else{
            // if not -99, give array at index i temp val
            arr[i] = temp;
            averageCount++;
        }
        
    }    

    // run the sum function
    sumValues = sum(arr);

    printf("Sum = %f\n", sumValues);

    // pass the sum and the number of values user gave to get the avarage function
    printf("Avarage = %f\n", avarage(sumValues, averageCount));

    return 0;
}


float sum(float values[]){

    float sumArr = 0;
    int j;

    // sum array
    for (j = 0; j < 10; j++){
        
        sumArr += values[j];

    }
    
    // return the sum of the array to main function
    return sumArr;
}

float avarage(float sum, float averageCount){

    float avarageAnswer;

    // calculate avarage (sum/# of values)
    avarageAnswer = sum / averageCount;
    
    // return the avarage to main function
    return avarageAnswer;
}
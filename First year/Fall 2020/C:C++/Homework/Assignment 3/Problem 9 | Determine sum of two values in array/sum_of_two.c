#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a3 p9.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

double sum25(double v[], int n);

int main(){
    
    int n, i;
    float userValue, answer;

    // get value from user
    scanf("%d", &n);

    // double array size of n
    double array[n];

    // give array values
    for (i = 0; i < n && i < 20; i++){

        scanf("%f", &userValue);
        array[i] = userValue;

    }

    // run function and access return 
    answer = sum25(array, n);
    if(answer != -111){
        printf("sum=%f\n", answer);
    }else{
        printf("One or both positions are invalid\n");
    }

    return 0;
}

double sum25(double v[], int n){

    float sum;
    
    // check if index has a value
    if (n > 5){

        //at position 2 and position 5
        sum = v[2] + v[5];

        // return the sum of two indexes
        return sum;

    }else{
        
        return -111;
    }   
}

#include <stdio.h>
#include <math.h>

/*
    CH-230-A
    a4 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    float upperLimit, lowerLimit, stepSize;

    // user input
    scanf("%f", &lowerLimit);
    scanf("%f", &upperLimit);
    scanf("%f", &stepSize);

    // make i a float and equal to lower limit
    float i = lowerLimit;

    // start at lower limit, go till upper limit, increment by step
    for (i = lowerLimit; i <= upperLimit; i+=stepSize){
        // print table
        printf("%f ", i);
        printf("%f ", M_PI*(i*i));
        printf("%f\n", (2*M_PI)*i);
    }

    return 0;
}
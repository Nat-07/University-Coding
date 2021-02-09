/*
    CH-230-A
    a3 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

// function that converts
float cmToKm(int cm){
    float km;

    km = (float)cm / 100000;

    // return km back to print in main
    return km;
}

int main(){

    int initCM;

    scanf("%d", &initCM);

    // run + print function
    printf("Result of conversion: %f\n", cmToKm(initCM));

    return 0;
}

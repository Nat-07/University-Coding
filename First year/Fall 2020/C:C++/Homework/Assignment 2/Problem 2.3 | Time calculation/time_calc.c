#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a2 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    int weeks, days, hours, sum;

    // user inputs
    printf("Number of weeks: ");
    scanf("%d", &weeks);

    printf("Number of days: ");
    scanf("%d", &days);

    printf("Number of hours: ");
    scanf("%d", &hours);

    // sum our hours
    sum = (weeks * 168) + (days * 24) + hours; 

    printf("Total number of hours: %d\n", sum);

    return 0;
}
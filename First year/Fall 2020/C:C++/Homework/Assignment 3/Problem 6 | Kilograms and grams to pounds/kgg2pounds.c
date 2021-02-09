/*
    CH-230-A
    a3 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g){

    double lb;

    // init double kg 
    double kg2;
    kg2 = kg;

    // real div
    kg2 += g / (float)1000;

    lb = kg2 * 2.2;

    return lb;
}

int main() {
    int kg, g;

    scanf("%d", &kg);
    scanf("%d", &g);

    // print + run function
    printf("Result of conversion: %f\n", to_pounds(kg, g));

    return 0;
}
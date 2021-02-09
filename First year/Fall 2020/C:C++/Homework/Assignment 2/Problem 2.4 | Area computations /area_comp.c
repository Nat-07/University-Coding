#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a2 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    float a,b,h;

    // get inputs 
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    // compute + print
    printf("square area=%f\n",a*a);
    printf("rectangle area=%f\n",a*b);
    printf("triangle area=%f\n",((a*h)/2));
    printf("trapezoid area=%f\n",(((a+b)/2)*h));

    return 0;
}



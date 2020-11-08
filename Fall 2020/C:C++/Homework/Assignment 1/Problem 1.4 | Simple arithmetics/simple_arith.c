/*
    CH-230-A
    a1_p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int x = 17;
    int y = 4;

    int sum, product, difference, modulo;
    float quotient; 

    // computation of x and y
    sum = x + y;
    product = x * y;
    difference = x - y;
    // real division (not int div)
    quotient = x / (float)y;
    modulo = x % y;

    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%f\n", quotient);
    printf("remainder of division=%d\n", modulo);

    return 0; 
}
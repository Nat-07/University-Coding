#include <stdio.h>

int main(){

    double x;
    float y;
    int z;
    double result;

    scanf("%lf", &x);
    scanf("%f", &y);
    scanf("%d", &z);

    result = x * y * z;

    printf("%f\n", result);

    double *r_ptr = &result;

    *r_ptr += 5;

    printf("%f\n", *r_ptr);
    printf("%f", result);


    return 0;
}
#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a4 p10.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb);

int main(){

    // init test value
    float value1 = 10;
    float value2 = 6.84;

    float product, division, resultB, resultBDiv;
    float *ptr1_prod, *ptr2_div, *ptr3_invB, *ptr4_pwr;

    // pointers to values to pass to function
    ptr1_prod = &product;
    ptr2_div = &division;
    ptr4_pwr = &resultBDiv;
    ptr3_invB = &resultB;
    
    // run function with all values
    proddivpowinv(value1, value2, ptr1_prod, ptr2_div, ptr4_pwr, ptr3_invB);

    // print values by pointers
    printf("Product = %f\n", *ptr1_prod);
    printf("Division = %f\n", *ptr2_div);
    printf("Pwr = %f\n", *ptr4_pwr);
    printf("Inverse = %f\n", *ptr3_invB);
    
    return 0;
}

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){

    // do math and store in pointer address
    *prod = a * b;
    *div = a / b;
    *pwr = b;
    *invb = 1/b;

}
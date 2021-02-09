#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a3 p10.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main(){
    
    float userInput1, userInput2, answer;

    float *a, *b;

    // get floats
    scanf("%f", &userInput1);
    scanf("%f", &userInput2);
    
    a = &userInput1;
    b = &userInput2;

    // product function + print
    printf("First = %f\n", product(userInput1, userInput2));
    
    // product by ref + print
    productbyref(userInput1, userInput2, &answer);
    printf("Second = %f\n", answer);

    // add 3 and 11 and by ref + print
    modifybyref(a, b);
    printf("%f\n", *a);
    printf("%f\n", *b);

    return 0;
}

float product(float a, float b){
    // simple return w/ multiplication
    return a * b;
}

void productbyref(float a, float b, float *p){
    // set address of p equal to a * b
    *p = a * b;
}

void modifybyref(float *a, float *b){
    // adding 3 and 11 by pointers
    *a += 3;
    *b += 11;
}
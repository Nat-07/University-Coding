#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a2 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // init vars to be used
    double firstDouble, secondDouble;
    int firstInt, secondInt, sumInt, productInt, sumChars, productChars;
    char line[100], firstChar, secondChar;

    // read from keyboard & assign to vars
    scanf("%lf", &firstDouble);
    scanf("%lf", &secondDouble);

    printf("sum of doubles=%f\n", firstDouble + secondDouble);
    printf("difference of doubles=%f\n", firstDouble - secondDouble);
    printf("square=%f\n", firstDouble * firstDouble);

    scanf("%d", &firstInt);
    scanf("%d", &secondInt);

    // math for int calculations
    sumInt = firstInt + secondInt;
    productInt = firstInt * secondInt;

    printf("sum of integers=%d\n", sumInt);
    printf("product of integers=%d\n", productInt);

    // can't just use 2 scanf for char when one after another
    fgets(line, sizeof(line), stdin);
    scanf("%c", &firstChar);
    fgets(line, sizeof(line), stdin);
    scanf("%c", &secondChar);

    // math for char calculations 
    sumChars = firstChar + secondChar;
    productChars = firstChar * secondChar;

    printf("sum of chars=%d\n", sumChars);
    printf("product of chars=%d\n", productChars);
    // cast into int for math
    printf("sum of chars=%c\n", (int)sumChars);
    printf("product of chars=%c\n", (int)productChars);

    return 0;
}
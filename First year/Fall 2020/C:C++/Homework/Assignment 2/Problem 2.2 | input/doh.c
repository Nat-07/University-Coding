#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a2 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    char userChar;

    scanf("%c", &userChar);
    
    printf("character=%c\n", userChar);
    printf("decimal=%d\n", userChar);
    printf("octal=%o\n", userChar);
    printf("hexadecimal=%x\n", userChar);

    return 0;
}
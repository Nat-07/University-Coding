#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/


void print_triangle(int times, char letter);

int main(){

    int n;
    char ch;

    // get values
    scanf("%d", &n);
    scanf(" %c", &ch);

    // run function
    print_triangle(n,ch);

    return 0;
}

void print_triangle(int times, char letter){
    int i, j;

    // run # of times that user imported
    for (i = times; i >= 1; i--){
        // run # times till j > i
        for (j = 0; j < i; j++){
            printf("%c", letter);
        }
        // new line
        printf("\n");
    }   
}
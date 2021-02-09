/*
    CH-230-A
    a3 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    char ch;
    int n, i;

    // read user input
    scanf("%c", &ch);
    scanf("%d", &n);

    printf("%d\n", n);

    // print n times
    for (i = 1; i < n+1; i++){

        printf("%c-%d\n", ch, i);
    }
    
    return 0;
}
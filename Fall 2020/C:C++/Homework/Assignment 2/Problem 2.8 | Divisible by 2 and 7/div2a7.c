#include <stdio.h>


/*
    CH-230-A
    a2 p8.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    int userInput;
    scanf("%d", &userInput);

    // check if remanders = 0. If so then print. Else print its not equal
    if(userInput % 2 == 0 && userInput % 7 == 0){
        printf("The number is divisible by 2 and 7\n");
    }else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
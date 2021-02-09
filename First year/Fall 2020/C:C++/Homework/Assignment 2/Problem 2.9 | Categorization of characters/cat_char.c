#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a2 p9.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

/*
    While there may be other appreaches, I decied to look up an ASCII table 
    and find the ranges for the symboles. Then just wrote a simple if statement 
    to print what the symbol is depending on the value of the character. 
*/

int main(){

    char userInput;

    scanf("%c", &userInput);

    if (((int)userInput >= 0 && (int)userInput <= 47) || ((int)userInput >= 58 && (int)userInput <= 64) || 
        ((int)userInput >=91 && (int)userInput <= 96) || ((int)userInput >=123 && (int)userInput <= 127)){
        printf("%c is some other symbol\n", userInput);

    }else if((int)userInput >= 48 && (int)userInput <= 57){
        printf("%c is a digit\n", userInput);
    }else{
        printf("%c is a letter\n", userInput);
    }
    
    return 0;
}
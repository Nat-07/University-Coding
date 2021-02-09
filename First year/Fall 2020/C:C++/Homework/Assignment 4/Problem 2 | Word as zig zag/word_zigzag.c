#include <stdio.h>
#include <string.h>
// boolean library
#include <stdbool.h>

/*
    CH-230-A
    a4 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    char string[50];
    int i;

    // init boolean  
    bool indent = true;

    // user input for string
    fgets(string, sizeof(string), stdin);

    // iterate through string 
    for (i = 0; i < strlen(string)-1; i++){
        // if true then no space
        if(indent){
            printf("%c\n", string[i]);
            // set to false
            indent = false;
        }else{
            // no space as false
            printf(" %c\n", string[i]);
            // set to true
            indent = true;
        }
    }

    return 0;
}
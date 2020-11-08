// import libraries
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    CH-230-A
    a4 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype function
int count_consonants(char str[]);

int main(){
    int i;
    char string[100];
    // boolean to control do while loop
    bool isEnd = false;
    
    do{
        fgets(string, sizeof(string), stdin);

        /*
            go through each index and test for \n to change 
            value of isEnd to end program.
        */

        for (i = 0; i < strlen(string); i++){
            // test for \n
            if (string[i] == '\n'){
                // if we find set to true
                isEnd = true;
            }else{
                printf("Number of consonants=%d\n", count_consonants(string));
                /* 
                    break out of for loop to prevent 
                    multiple prints of same value
                */
                break;
            }
        }
    // only terminate when isEnd if equal to true
    }while(isEnd == false);
    return 0;
}

int count_consonants(char str[]){
    int i;
    int counter = 0;

    for (i = 0; i < strlen(str); i++){

        /*
            Broke if statements into multiple lines to not go over 80
            chars in line constraint. 

            Constrict the ranges to letters. If not done then when 
            testing a number or other char we would count it as a consonant
            even though it is not a letter.

            For example: %, $, 9, ^ , would pass the second if statement
            if first was not in place stopping them

        */

        if (((int)str[i] >= 65 && (int)str[i] <= 90) || ((int)str[i] >= 97 
            && (int)str[i] <= 122)){

            // testing letters chars are actual constant 
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && 
                str[i] != 'o' && str[i] != 'u' &&str[i] != 'A' && 
                str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && 
                str[i] != 'U'){

                // add one to our counter every time we find one
                counter++;    
            }
        }        
    }
    // return # of occurrences to function
    return counter;
}

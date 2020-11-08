// import libraries
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/*
    CH-230-A
    a4 p5.[c]
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
    int counter = 0;
    // initiate the pointer to the string
    char *pointer_str = str;

    // iterate throught the for loop 
    for(pointer_str = str; *pointer_str; pointer_str++ ){
        // check the value of the pointer against ASCII values
        if (((int)*pointer_str >= 65 && (int)*pointer_str <= 90) || ((int)*pointer_str >= 97 
            && (int)*pointer_str <= 122)){

            /*
                testing letters chars are actual 
                constant through the pointer address
            */
            if (*pointer_str != 'a' && *pointer_str != 'e' && *pointer_str != 'i' && 
                *pointer_str != 'o' && *pointer_str != 'u' &&*pointer_str != 'A' && 
                *pointer_str != 'E' && *pointer_str != 'I' && *pointer_str != 'O' && 
                *pointer_str != 'U'){

                // add one to our counter every time we find one
                counter++;    
            }
        }
    }
    
    // return # of occurrences to function
    return counter;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
    CH-230-A
    a5 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int count_lower(char* str);

int main(){
    // init values
    int strncmp1;
    char string[50];
    char *ptr_string;
    ptr_string = string;

    do{
        fgets(string, sizeof(string), stdin);
        strncmp1 = strncmp(string, "\n", 1);

        // breaking if the user puts \n
        if (strncmp1 == 0){
            exit(0);
        }
        
        // print and run function (2 lines, under 80 chars)
        printf("There are %d lowercase characters in the string.\n", 
        count_lower(ptr_string));

    } while (1);
    
    return 0;
}

int count_lower(char* str){
    int counter = 0;

    // pointer string
    char *pointer_str = str;

    // iterate throught the for loop using pointer
    for(pointer_str = str; *pointer_str; pointer_str++){

        // check the value of the pointer against ASCII values
        if ((int)*pointer_str >= 97 && (int)*pointer_str <= 122){
            counter++;    
        }
    }
    // return to main
    return counter;
}
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

/*
    CH-230-A
    a7 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype functions
void fun1(char *inputString);
void fun2(char *inputString);
void fun3(char *inputString);
void fun4(char *inputString);

// array of function pointers
void (*fun_arr[4])(char*)={fun1, fun2, fun3, fun4};

int main(){

    int userValue;

    // create and set string arr
    char stringArr[100];
    fgets(stringArr, 100, stdin);

    while(1){
        // get numerican value
        scanf("%d", &userValue);

        // subtract 1 as we are working with array, start at 0
        userValue--;

        // run associated function
        (*fun_arr[userValue])(stringArr);
    }

    return 0;
}

// print uppercase
void fun1(char *inputString){

    for(int i=0; i < strlen(inputString); i++){
        // print and change
        printf("%c", toupper(inputString[i]));
        
    }
}

// print lowercase
void fun2(char *inputString){

    for(int i=0; i<strlen(inputString); i++){
        // print and change
        printf("%c", tolower(inputString[i]));
    }
}

// print in uppercase char as lower and vise versa
void fun3(char *inputString){

    for(int i=0; i < strlen(inputString); i++){

        // check if user input is indeed a char (function uses ASCII table)
        if(isalpha(inputString[i])){

            // if so we check if upper
            if(isupper(inputString[i])){
                // then print lower
                printf("%c", tolower(inputString[i]));
            }
            
            // same thing as above but opposite
            if(islower(inputString[i])){
                // convert to uppercase
                printf("%c", toupper(inputString[i]));
            }

        }else{
            // if user input is not char, then print normal
            printf("%c", inputString[i]);
        } 
    }
}

// quit program
void fun4(char *inputString){
    exit(0);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    CH-230-A
    a4 p12.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

void replaceAll(char *str, char c, char e);

int main(){
    char *ptr_string;

    char string[80];
    char letterC, letterE; 
    int strncmp1;
    ptr_string = string;
    bool isFirst = true;
    int i;

    // run one time and then while
    do{
        if(isFirst == false){
            // fix bug that would take enter as string
            getchar();
        }else{
            isFirst = false;
        }
        
        // get string
        fgets(string, sizeof(string), stdin);
        
        // get chars
        scanf(" %c", &letterC);
        scanf(" %c", &letterE);

        // compare string with stop and get value
        strncmp1 = strncmp(string, "stop", 4);

        // print statements show what is changed and how it was changed
        printf("===================================\n");
        printf("Before:\nReplacing %c with %c in the string:\n", letterC, letterE);

        for (i = 0; i < 80 && string[i] != '\0'; i++){
            printf("%c", string[i]);
        }
        printf("===================================\n");

        replaceAll(ptr_string, letterC, letterE);

        printf("===================================\n");
        printf("After:\nReplaced %c with %c to get the result:\n", letterC, letterE);

        for (i = 0; i < 80 && string[i] != '\0'; i++){
            printf("%c", string[i]);
        }
        printf("===================================\n");

    }while (strncmp1 != 0);

    return 0;
}

void replaceAll(char *str, char c, char e){
    int i;

    for (i = 0; i < 80 && str[i] != '\0'; i++){
        // if value c is present in array, change to value e
        if (str[i] == c){
            str[i] = e;
        }
    }
}
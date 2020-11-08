#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*
    CH-230-A
    a3 p11.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    
    // declaration of char values
    char one[100], two[100], three[100], c, compareStrings, *ptr;
 
    // read strings
    fgets(one, 50, stdin);
    one[strlen(one)-1] = '\0';
    fgets(two, 50, stdin);
    two[strlen(two)-1] = '\0';

    // print the len of inputted strings using the library
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));

    // Copy one -> three
    strcpy(three, one);

    // concatenation one with two
    strcat(three, two);
    printf("concatenation=%s\n",three);

    // copy two -> three
    strcpy(three, two);
    printf("copy=%s\n", three);

    // Compare and store in variable
    compareStrings = strcmp(one, two);

    // print comparison output
    if(compareStrings > 0){
        printf("one is larger than two\n");
    } else if (compareStrings < 0){
        printf("one is smaller than two\n");
    }else{
        printf("one is equal to two\n");
    }
    
    // let user choose char
    scanf("%c", &c);

    // find occurrence
    ptr = strchr(two, c);

    // find value by subtraction
    if(ptr-two < -1){
        printf("The character is not in the string\n");
    }else{
        printf("position=%ld\n",ptr-two);
    }
    
    return 0;
}
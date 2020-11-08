#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*
    CH-230-A
    a4 p11.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype function
int count_insensitive(char *str, char c);

int main(){

    // declare pointers
    char *ptr_stringOne, *ptr_stringTwo, *str;
    int count = 0;
    int i,j;

    // dynamicly allocate memory
    ptr_stringOne = (char *) malloc (sizeof (char) * 50);
    // first string of len 50
    char firstString[50];
    
    fgets(firstString, sizeof(firstString), stdin);

    // get size of string (when not over 50, not null, and not enter key)
    for (i = 0; i < 50 && firstString[i] != '\0' && firstString[i] != '\n'; i++){
       count++;
    }
    
    // dynamicly allocate memory for string 2
    ptr_stringTwo = (char *) malloc (sizeof (char) * count);
    // make second string len of string
    char secondString[count];

    // copy string 1 over to string 2
    strcpy(secondString, firstString);

    // free memory of string 1 now that string 2 has exact value
    free(ptr_stringOne);

    // make string uppercase
    for (j = 0; j < count; j++){
        secondString[j] = toupper(secondString[j]);
    }

    // pointer to string
    str = secondString;
    
    /*
        Test the different letters to see if in string
        Make letters uppercase that aren't already to match 
        string that is uppercase.
    */

    printf("The character ’b’ occurs %d times.\n", count_insensitive(str, toupper('b')));
    printf("The character ’H’ occurs %d times.\n", count_insensitive(str, 'H'));
    printf("The character ’8’ occurs %d times.\n", count_insensitive(str, '8'));
    printf("The character ’u’ occurs %d times.\n", count_insensitive(str, toupper('u')));
    printf("The character ’$’ occurs %d times.\n", count_insensitive(str, '$'));
    
    // free memory from string 2
    free(ptr_stringTwo);

    return 0;
}


int count_insensitive(char *str, char c){
    int times = 0;
    int i;

    for (i = 0; i < 50 && str[i] != '\0'; i++){
        // test occurrence of letter, add if so
        if (str[i] == c){
            times++;
        }
    }

    return times;
}

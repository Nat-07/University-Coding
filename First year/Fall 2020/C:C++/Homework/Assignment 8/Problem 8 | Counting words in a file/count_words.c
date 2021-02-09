#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
    CH-230-A
    a8 p8.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // init vars
    FILE *fptr;
    char ch;
    int count = 0;
    bool badChar = false;

    // Open in read mode and catch opening error using the user's choice
    char choice[100];
    scanf("%s", choice);
    fptr = fopen(choice, "r");
    if (fptr == NULL){
        printf("Error: Opening file failed!\n");
        exit(1);
    }

    // get userinput and add to sum
    ch = getc(fptr);
    
    // loop through till end of file
    while(ch != EOF){
        
        /*
            If bool is false and chars don't appear and one of the conditions
            is met then we know to add 1 to the counter as it is a word.
            Then make badchar true so we know that if the next position is
            too one of the 'bad' symbols we don't add to the counter.

            Next there is an 'else if' that cathes if there is a 'bad' char
            and badchar is true. As this time badchar is true, we don't do
            anything and move onto the next symbole. 

            If we are not working with a 'bad' char then we set badchar equal
            to false so that we know that there was atleast a one
            letter word. 
        */

        if(!badChar && (ch == ' ' || ch == ',' || ch == '?' || ch == '!' ||
         ch == '.' || ch == '\t' || ch == '\r' || ch == '\n')){
            count++;
            badChar = true;

        }else if(ch == ' ' || ch == ',' || ch == '?' || ch == '!' || 
        ch == '.' || ch == '\t' || ch == '\r' || ch == '\n'){
            badChar = true;
        }else{
            badChar = false;
        }
        
        //  get the next char
        ch = getc(fptr);
    }

    // print total number of words
    printf("The file contains %d words.\n", count);

    return 0;
}


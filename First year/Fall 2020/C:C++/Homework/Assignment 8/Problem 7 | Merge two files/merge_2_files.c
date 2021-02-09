#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a8 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    char ch;

    /*
        This problem is unclear if merge means switch back and forth
        every line or enter one whole text file and then the next whole text
        file. I coded it do the ladder as that was my first inclination of
        what the task asked.

        Yet, if the idea was to do the former, it would be pretty simple
        as you would read line by line alternating with an if statement
        and a boolean that dictates which file to read and write from. 
        Then when reaching the end of the file it will close all three 
        of the files.
    */

    // init pointer for file
    FILE *fptr;
    FILE *fptr2;

    // open in read mode and catch error
    fptr = fopen("text1.txt", "r");
    if (fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);
    }

    // open/create new file and catch error
    fptr2 = fopen("merge12.txt", "w");
    if(fptr2 == NULL){
        printf("Error in creating file\n");
        exit(1);
    }

   // get text in text1 and add to merge12
    ch = getc(fptr);
    while (ch != EOF){
        
        fprintf(fptr2, "%c", ch); 
        
        ch = getc(fptr);
    }

    // close first text file
    fclose(fptr);

    // open in read mode and catch error
    fptr = fopen("text2.txt", "r");
    if (fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);
    }

    // get text in text2 and add to merge12
    ch = getc(fptr);
    while (ch != EOF){
        
        fprintf(fptr2, "%c", ch); 
        
        ch = getc(fptr);
    }

    // close text2.txt and merge12.txt
    fclose(fptr);
    fclose(fptr2);
    
    return 0;
}
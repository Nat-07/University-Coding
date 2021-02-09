#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a8 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init vars
    char ch;
    char input[10];
    int i;

    // init pointer for file
    FILE *fptr;

    // create file or overwrite
    fptr = fopen("chars.txt", "w");
    // if failed then error
    if(fptr == NULL){
        printf("Error in creating file\n");
        exit(1);
    }

    /*
        Enter 2 values into the file. Assignment unclear if we are to
        have the user enter more and then stop entering when
        negative # or some other boundary. If so we would use
        an if statement to check and then below where reading the file we
        would only read 2 values as that's what the assignment asks. 

    */
    for (i = 0; i < 2; i++){
        // read and write using pointer
        fgets(input, sizeof(input), stdin);
        fputs(input, fptr);
    }

    // close file to go into read mode
    fclose(fptr);
    
    // init sum vars
    int sum = 0;

    // open in read mode and catch error
    fptr = fopen("chars.txt", "r");
    if (fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);
    }

    // get userinput and add to sum
    ch = getc(fptr);
    while (ch != EOF){
        
        // adds to sum ASCII value of item in file if not new line
        if ((int)ch != '\n'){
           sum += (int)ch;
        }
        ch = getc(fptr);
    }
    
    // close file
    fclose(fptr);
    

    // open/create new file and catch error
    fptr = fopen("codesum.txt", "w");
    if(fptr == NULL){
        printf("Error in creating file\n");
        exit(1);
    }

    // put the sum in file and close file
    fprintf(fptr, "%d", sum); 
    fclose(fptr);

    return 0;
}
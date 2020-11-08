#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a8 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // strings for file name
    char file1[100];
    char file2[100];

    // init pointer
    FILE *fptr;

    // get file names
    scanf("%s", file1);
    scanf("%s", file2);
    
    // open in read mode and catch error
    fptr = fopen(file1, "r");
    if (fptr == NULL){
        printf("Some error occurred  !\n");
        exit(1);
    }

    // get first double from file
    double first;
    fscanf(fptr,"%lf", &first);
     
    // close first file
    fclose(fptr);

    // open second file and catch error
    fptr = fopen(file2, "r");
    if (fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);
    }

    // get second double from second file
    double second;
    fscanf(fptr,"%lf", &second);
     
    // close file
    fclose(fptr);

    // open/create new file and catch error
    fptr = fopen("results.txt", "w");
    if(fptr == NULL){
        printf("Error in creating file\n");
        exit(1);
    }

    // Put all info into the file
    fprintf(fptr, "Sum = %lf\n", first+second); 
    fprintf(fptr, "Difference = %lf\n", first-second); 
    fprintf(fptr, "Product = %lf\n", first*second); 
    fprintf(fptr, "Division = %lf\n", first/second); 

    // close file
    fclose(fptr);

    return 0;
}
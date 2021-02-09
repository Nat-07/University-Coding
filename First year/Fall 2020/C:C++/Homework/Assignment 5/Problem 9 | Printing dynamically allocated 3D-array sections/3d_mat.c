#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a5 p9.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype functions
void writeFunction(int ***array, int x, int y, int z);
void writeToScreen(int ***array, int x, int y, int z);

int main(){

    // init values
    int rows, cols, depth;
    int i, j;

    // get user input for size of arrays
    scanf("%d", &rows);
    scanf("%d", &cols);
    scanf("%d", &depth);

    // allocate memory, rows
    int ***matrix = (int ***)malloc(sizeof(int **) * rows);
    if (matrix == NULL){
        exit(1);
    }

    // allocate memory array rows
    for (i = 0; i < rows; i++) {
        matrix[i] = (int**)malloc(sizeof(int) * cols);

        // check if pointer is null
        if (matrix[i] == NULL){
            exit(1);
        }

        // do again but for cols
        for (j = 0; j < cols; j ++) {
            matrix[i][j] = (int*)malloc(sizeof(int) * depth);
            if (matrix[i][j] == NULL){
                exit(1);
            }
        }
    }
    
    // run functions
    writeFunction(matrix, rows, cols, depth);
    writeToScreen(matrix, rows, cols, depth);

    // free memory from all indicies
    for(i = 0; i < rows; i++){  
        for (j = 0; j < cols; j++){
           free(matrix[i][j]);
        }
        /*
            if trying to free rows before freeing cols in rows error would
            be passed back. Thus, free after freeing the cols in row
        */
        free(matrix[i]);
    }

    // Finally, free array pointer
    free(matrix);

    return 0;
}

void writeFunction(int ***array, int x, int y, int z){
    int i, j, k;

    // go through array and take inputs for all indicies in 3d array
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            for (k = 0; k < z; k++){
               scanf("%d", &array[i][j][k]);
           } 
        }
    }
}


void writeToScreen(int ***array, int x, int y, int z){
    int i, j, k;
    /* 
        Go through 3d array to print cross sections as requested to do.
        Cycling through depth to find how many crosssections we are 
        dealing with. 
    */
    for (k = 0; k < z; k++){
        // which section we are printing and adding 1 as we start at 0
        printf("Section %d:\n", (k+1));

        // Cycle through 2d array. Use rows and cols to print out vales
        for (i = 0; i < x; i++){
            for (j = 0; j < y; j++){
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
    }
}

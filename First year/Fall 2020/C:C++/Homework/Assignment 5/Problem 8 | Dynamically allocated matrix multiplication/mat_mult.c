#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a5 p8.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype functions
void writeMatrix(int **arr, int numrow, int numcol);
void readMatrix(int **arr, int numrow, int numcol, int ver);
void matrixProduct(int **arr1, int **arr2, int numrow, int numcol);

int main(){
    // init values
    int **matrix, **matrix2, row;
    int x, y, z, m, p, i;

    // get user input for size of arrays
    scanf("%d", &m);
    scanf("%d", &x);
    scanf("%d", &y);

    // set second equal to first
    z = x;
    p = y;

    // allocate memory, rows
    matrix = (int **)malloc(sizeof(int *) * x);
    // chceck if pointer is null
    if(matrix == NULL){
        exit(1);
    }

    // allocate memory to indexes of matrix
    for(row = 0; row < x; row ++) {
        matrix[row] = (int*)malloc(sizeof(int) * y) ;
        if (matrix[row] == NULL){
            exit(1);
        }
    }

    writeMatrix(matrix, x, y);

    // allocate memory, rows
    matrix2 = (int **) malloc ( sizeof(int*) * z);
    if(matrix2 == NULL ){
        exit(1);
    }

    // get values for matrixes
    for(row = 0; row < z; row ++) {
        matrix2[row] = (int*) malloc (sizeof(int) * p);
        if (matrix2[row] == NULL){
            exit(1);
        }
    }

    writeMatrix(matrix2, x, y);

    // run read functions
    readMatrix(matrix, x, y, 1);
    readMatrix(matrix2, x, y, 2);
    
    // run product function
    matrixProduct(matrix, matrix2, x, y);

    // free memory
    for(i = 0; i < row; i++){  
       free(matrix[i]);  
    }
    // free array pointer
    free(matrix);

    for(i = 0; i < row; i++){  
       free(matrix2[i]);  
    }
    free(matrix2);

    return 0;
}

void writeMatrix(int **arr, int numrow, int numcol){
    int i, j;
    // get values for matrixes
    for(i = 0; i < numrow; i++){
        for(j = 0; j < numcol; j++){
            getchar();
            scanf("%d", &arr[i][j]);
        } 
    }

}

void readMatrix(int **arr , int rows , int cols, int ver){
    int k, p;

    // for testing if matrix A or B
    if(ver == 1){
        printf("Matrix A:\n");
    }else{
        printf("Matrix B:\n");
    }
    
    // run through indexes and print values
    for(k = 0; k < rows; k++){
        for (p = 0; p < cols; p++){
            printf("%d", arr[k][p]);
        } 
        printf("\n");
    }
    printf("\n");
}

void matrixProduct(int **arr1 , int **arr2 , int numrow, int numcol){
    int i, j, k, w, p, l;
    int **result;

    // allocate memory, rows
    result = (int **)malloc(sizeof(int*) * numrow);
    if(result == NULL ){
        exit (1) ;
    }

    // allocate more memory
    for(l = 0; l < numrow; l ++) {
        result[l] = (int*)malloc(sizeof(int) * numcol);
        if (result[l] == NULL){
            exit(1);
        }

    }

    /*
        Adapted from:
        https://www.geeksforgeeks.org/c-program-multiply-two-matrices/
    */

    // loop through row
    for(i = 0; i < numrow; i++) { 
        // loop through col
        for (j = 0; j < numcol; j++) { 
            // set result location 0 
            result[i][j] = 0; 
            // loop through col, get values, multiply, and set result equal
            for (k = 0; k < numcol; k++) 
                result[i][j] += arr1[i][k]*arr2[k][j]; 
        } 
    } 
    printf("The multiplication result AxB:\n");
    // print resultant array
    for(w = 0; w < numrow; w++){
        for (p = 0; p < numcol; p++){
            printf("%d", result[w][p]);
        } 
        printf("\n");
    }

    // free memory from result
    for(i = 0; i < l; i++){  
       free(result[i]);  
    }
    free(result);


}

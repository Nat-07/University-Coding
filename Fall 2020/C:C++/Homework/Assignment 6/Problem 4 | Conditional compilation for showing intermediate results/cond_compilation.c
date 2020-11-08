#include <stdlib.h>
#include <stdio.h>

// change if want intermediate values to print or not. When defined, print
#define INTERMEDIATE ;

/*
    CH-230-A
    a6 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    int size, i, j, k, p;

    // scan for size and init array with those
    scanf("%d", &size);
    int array1[size];
    int array2[size];
    int answers[size];
    int sum = 0;

    // loop through arrays and give values
    for (i = 0; i < size; i++){
        scanf("%d", &array1[i]);
    }

    for (j = 0; j < size; j++){
        scanf("%d", &array2[j]);
    }
    
    for (k = 0; k < size; k++){
        answers[k] = array1[k] * array2[k];
    }

    /*
        Check if INTERMEDIATE has been defined. If so then we run code in
        the if preprocessor directive statement. Otherwise, skip. 
    */

    #ifdef INTERMEDIATE
        int l;
        printf("The intermediate product values are:\n");

		for (l = 0; l < size; l++){
            printf("%d\n", answers[l]);
        }

	// end of if preprocessor directive statement
	#endif 

    // either way, we loop through answer array and sum values and print
    for (p = 0; p < size; p++){
        sum += answers[p];
    }

    printf("The scaler product is: %d\n", sum);
    
    return 0;
}


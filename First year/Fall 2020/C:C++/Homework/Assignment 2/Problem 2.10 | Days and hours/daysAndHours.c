#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a2 p10.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/


/*
    A simple program to not let the user go forward in the code 
    unless they meet the requirement of typing a value larger 
    than 0. Also took care of a different print statement using 
    a tries var depending an unsuccessful attempt. This could 
    have been done just as easily with a boolean.
    
    Then just use their value of n to print the day number and 
    the corresponding hours using our for loop.  
*/

int main(){

    int n, i;
    int tries = 0;

    do{

        if (tries == 0){
            printf("\nChoose a value for n: ");
            scanf("%d", &n);
            tries++;
        }else{
            printf("Invalid input\n");
            printf("Choose a value for n: ");
            scanf("%d", &n);
        }
        
    } while (n <= 0);

    // printing
    for (i = 1; i < n+1; i++){
        if (i == 1){

            printf("%d day = %d hours\n", i, i * 24);
        }
        else{
            printf("%d days = %d hours\n", i, i * 24);
        }
    }

    return 0;
}
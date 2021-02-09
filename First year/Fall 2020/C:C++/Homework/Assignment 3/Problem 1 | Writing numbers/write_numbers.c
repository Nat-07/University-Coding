#include <stdlib.h>
#include <stdio.h>


/*
    CH-230-A
    a3 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    
    float x;
    int n, i;


    scanf("%f", &x);
    
    do{
        scanf("%i", &n);
        
        // if statement to print
        if (n <= 0){
            printf("Input is invalid, reenter value\n");
        }
        
        
        // while userinput (n) is not bigger than 0, keep prompting
    } while (n <= 0);
    
    // interate through and print
    for(i=0; i<n; i++){
        printf("%f\n", x);
    }

    return 0;
}


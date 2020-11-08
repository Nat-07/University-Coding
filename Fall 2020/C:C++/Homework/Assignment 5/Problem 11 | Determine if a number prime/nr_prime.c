#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p11.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype function
int isPrimeFunction(int startingNum, int number);

int main(){

    // get value to be tested
    int x;
    scanf("%d", &x);

    /*  
        Test if number is prime by running function
        Return 1 if prime and 0 if not prime. Print corresponding message
    */
    if (isPrimeFunction(x, 2) == 1){
       printf("%d is prime\n", x);
    }else{
        printf("%d is not prime\n", x);
    }
    
    return 0;
}

int isPrimeFunction(int startingNum, int number){
    
    // if equal pass it as it will ruin program
    if(startingNum == number){
        number++;
        return isPrimeFunction(startingNum, number);

    }else if (startingNum == 1){

        /* 
            Unsure if we are counting 1 as being prime or not. So I made
            it not prime. If chooses that is is prime we would just change
            return 0 to return 1.
        */

        return 0;
            
    }else if (number == 20 && startingNum % number != 0){
        // if at 20 and it passes the last test return value for prime
        return 1;
            
    }else if (startingNum % number != 0){
        // if passes test add and run again
        number++;
        return isPrimeFunction(startingNum, number);

        // if it doesn't pass test then return not prime
    }else{
        return 0;  
    }
}

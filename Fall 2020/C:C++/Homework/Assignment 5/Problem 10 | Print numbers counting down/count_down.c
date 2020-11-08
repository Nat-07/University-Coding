#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p10.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype function
int countingDown(int n);

int main(){
    int n;

    scanf("%d", &n);

    // run function 
    countingDown(n);

    return 0;
}

int countingDown(int n) {
    // stop if we are at n = 0
    if(n == 0){
        return 0;
    }else{
        // print and run function again
        printf("%d\n", n);
        return n * countingDown(n - 1);
    }
}

/*
    CH-230-A
    a1_p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

/* 
    There were two wrong/missing things from the code.

    One thing that was missing from the code was what we 
    wanted to put put in the place of the placeholder of %d. 
    We get returned a long string of "random" numbers because 
    the computer is being told we have some value to put in the 
    place of %d, but we don't define what that is. 
    Thus it gives back a -1073745604 or a variation of it.

    The second problem was a formatting one. The multiplication
    symbol that was given initially was not the valid symbol.
    It looked like the proper "*" but I believe it was another 
    character that was supposed to trip us up. This was easily fixed
    by putting in a "*" 
*/

#include <stdio.h>

int main() {

    int result; 
    
    result = (2 + 7) * 9 / 3; /* The result of our calculation */

    printf("The result is %d\n", result);

    return 0;
}
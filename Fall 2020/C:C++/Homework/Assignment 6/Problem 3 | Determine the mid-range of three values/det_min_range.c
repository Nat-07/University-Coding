#include <stdlib.h>
#include <stdio.h> 

/*

    Find largest greatest value from a, b, and c while using ternary and
    binary operators. 

    The combination allowed us to break down the required code from multi
    lines of 80 chars to a single line of less than 80.

    How : and ? work along side binary operators:

    For example the first expression in the max macro, if...
    a = 10
    b = 5
    c = 7
    
    In words:
    If 10 is greater than 5 then returns 10. If 10 is less than 5 then it
    would return 5.
    
*/

#define max(a,b,c) (((a > b) ? a:b) > c) ? ((a > b) ? a:b):c

// Use the same logic as max but change the greater than signs around
#define min(a,b,c) (((a < b) ? a:b) < c) ? ((a < b) ? a:b):c

/*

    Run the min and max macros inside the midrange macro and divide by 2.

    Put (float) to calculate more than just whole numbers when dividing 

    NOTE: If we don't put parentheses around the min and max macros, the
    computer would first evaluate the '+' symbole and then the ?
    (in the macro) as '?' has a lower precedence. Thus, by putting parentheses
    around we get the correct value.

*/

#define midRange(a, b, c) ((float)((min(a, b, c))+(max(a, b, c)))/2)

/*
    CH-230-A
    a6 p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // init and scan for values
    int a, b, c; 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // print the answer that was found using the midRange macro 
    printf("The mid-range is: %f\n", midRange(a,b,c));

    return 0;
}

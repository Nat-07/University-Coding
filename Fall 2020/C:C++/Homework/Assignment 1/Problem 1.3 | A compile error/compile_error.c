#include <stdio.h>
 
/*
    CH-230-A
    a1_p3.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/
 
/*
    One reason the program failed was because there was no "#"
    symbol before include.

    The second reason is because b is set to be an int while it
    should be a float because it is a decimal value. 
    
    The third reason for the compiling error was due the incorrect
    placeholder being used. %d signifies an integer, while %f allows
    the resulting variable which is a float, to be printed. So when
    we try and divide and get back a float we can't print an integer 
    or else we will get an error.  
*/
 
int main() {
 
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
 
    result = a / b;
    printf("The result is %f\n", result);
 
    return 0;
}

/*
    CH-230-A
    a1_p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/
 
/*  
    We get the result of 0.000000 instead of 0.800000 
    because we didn't specify that 5 was a float. 
    In C when deviding an integer by another 
    integer you get an integer back. But if we put a 
    .0 after 5 to produce 5.0 this will designate 5 
    as a float rather than an int allowing us to get 
    back a float. This is known as integer division, 
    when the correct answer is rather found with 
    real division.   
*/
 
#include <stdio.h>
 
int main(){
 
    double result; /* The result of our calculation */
 
    // designating 5 as float
    result = (3 + 1) / 5.0;
    printf("The value of 4/5 is %f\n", result);
 
    return 0;
}
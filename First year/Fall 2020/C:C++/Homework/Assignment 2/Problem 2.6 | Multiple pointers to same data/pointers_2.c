#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a2 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

/*
    When run, we can see that ptr_one has the same memory address as ptr_two. 
    This is because they are pointing to the same variable (x). So it makes sense 
    that they would print the same address as "a" has the same memory no matter 
    which pointer it pointing to it. But ptr_three doesn't follow the pattern 
    as it is pointing to the memory address of y. Thus, a and y do NOT have the 
    same address.  
*/

int main(){

    double x, y;
    double *ptr_one, *ptr_two, *ptr_three;
    
    scanf("%lf\n", &x);
    scanf("%lf", &y);

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("Address of ptr_one: %p\n", ptr_one);
    printf("Address of ptr_two: %p\n", ptr_two);
    printf("Address of ptr_three: %p\n", ptr_three);

    return 0;
}
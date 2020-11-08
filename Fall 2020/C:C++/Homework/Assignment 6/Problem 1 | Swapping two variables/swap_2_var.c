#include <stdio.h>
/* 
    Macro to swap. Using temp as an intermediate value so we can set temp = x,
     x = y, and then our saved value for x (in temp) set to y. 
*/
#define swap(x, y, temp) {temp = x; x = y; y = temp;}

/*
    CH-230-A
    a6 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init vars
    int x, y;
    double w, v, temp;
    temp = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    // use our macro to swap x and y
    swap(x, y, temp);

    scanf("%lf", &w);
    scanf("%lf", &v);

    // use our macro to swap w and v
    swap(w, v, temp);

    // print all our new values
    printf("After swapping:\n");

    printf("%d\n", x);
    printf("%d\n", y);
    
    // print with 6 precision
    printf("%.6lf\n", w);
    printf("%.6lf\n", v);

    return 0;
}

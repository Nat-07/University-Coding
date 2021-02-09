#include <stdio.h>


/*
    CH-230-A
    a2 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

/*

    What was missing from the code were the curly braces 
    which are needed as they include our print statement as well as out iterator (i--).

    They are needed as without them the while loop runs only the line right under it. 
    And as that line did not change the condition that would have needed to be met,
    so the print statement kept being run. 

*/

int main(){

    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--;
    }

    printf("That’s it.\n");

    return 0;
}

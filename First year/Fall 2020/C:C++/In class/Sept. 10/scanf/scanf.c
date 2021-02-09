#include <stdio.h>
#include <stdlib.h>

int main(void){

    int value;
    char chr;
    printf("Type a number and then type a letter\n");

    
    scanf("%d", &value);
    getchar();
    scanf("%c", &chr);

    printf("Number = %d     letter = %c", value, chr);








    return 0;
}
/*
    CH-230-A
    a3 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c){
    int idx;

    // function to look for occurrence of g (Added curly brackets as fix)
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){}
    return idx;
}

int main() {
    char line[80];

    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        // print + run function
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
    }

    //Added return 0 in main
    return 0;
}

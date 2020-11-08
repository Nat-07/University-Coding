# include <stdio.h>

int main () {
    char line [100];
    int value;

    /*
    Other way of getting numbers from a string.

    123dahuishd ----> will return 123

    dahuishd7423gsauidha ----> will return 0

    */
    printf ("Enter a value: ");
    fgets(line, sizeof(line), stdin);

    sscanf(line, "%d", & value);
    printf("You entered: %d\n", value);
    return 0;
}
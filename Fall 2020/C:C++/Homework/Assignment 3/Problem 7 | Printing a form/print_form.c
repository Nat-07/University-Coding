/*
    CH-230-A
    a3 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdio.h>

// prototype print form function 
void print_form(int n, int m, char c);

int main() {
    int n, m;
    char c;

    // n = small base
    scanf("%d", &n);
    
    // m = hight
    scanf("%d", &m);

    scanf(" %c", &c);

    // call function
    print_form(n, m, c);
    
    return 0;
    
}

void print_form(int n, int m, char c){

    // loop iterators
    int i,j;
    int count = 0;

    // iterate through base
    for (i = 0; i < n; i++){
        // iterate through hight
        for (j = 0; j < m; j++){
            printf("%c", c);
            
        }
        // add the extra char that was entered 
        for (i = 0; i < count; i++){
            printf("%c", c);
        }

        // add one to count
        count++;
        
        printf("\n");
    }   
}
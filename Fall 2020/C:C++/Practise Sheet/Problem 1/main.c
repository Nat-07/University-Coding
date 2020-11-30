#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int value = 65;


    for(int i = 0; i <= n; i++){
        for (int k = 0; k < i; k++){

            printf("%c", value+k);
        }

        printf("\n");
    }
     
    return 0;
}
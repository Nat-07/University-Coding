#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE *ptr;

    ptr = fopen("input.txt", "w");

    for(int i = 0; i < 5; i++){
        fprintf(ptr, "testing\n");
    }

    fclose(ptr);

    ptr = fopen("input.txt", "r");

    char buffer[100];

    while(fgets(buffer,sizeof(buffer), ptr) != NULL){
        printf("%s", buffer); 
    }

    fclose(ptr);
}
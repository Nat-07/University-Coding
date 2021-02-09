#include <stdio.h>
#include <stdlib.h>


int main(){

    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int*)malloc((sizeof(int)*n));
    FILE* ptr_file;

    

    for(int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    ptr_file = fopen("squars.txt", "w");

    for(int j = 0; j < n; j++){
        fprintf(ptr_file,"%d   %d\n", ptr[j], (ptr[j]*ptr[j]));
    }

    fclose(ptr_file);
    free(ptr);

    return 0;
}
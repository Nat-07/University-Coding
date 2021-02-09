#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool passwordChecker(char arr[]){

    int num_count = 0;
    int count_size = 0;

    for (int i = 0; i < 100 && arr[i] != '\0'; i++){
        if (arr[i] == '1' || arr[i] == '2'  || arr[i] == '3' || arr[i] == '4' || arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9'){
            num_count++;
        }
        count_size++;
    }

    printf("%d\n", count_size);
    printf("%d\n", num_count);
    if (count_size >= 8 && num_count >=3){
        return true;
    }else{
        
        return false;
    }
}

int main(){
    char arr[8] = {'d','3','3','d','2','s','d','s'};
    if(passwordChecker(arr) == true){
        printf("True");
    }else{
        printf("False");
    }
    
    
    
}
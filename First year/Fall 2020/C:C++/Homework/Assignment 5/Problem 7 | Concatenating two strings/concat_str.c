#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
    CH-230-A
    a5 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init values
    int i, j, k;
    int count = 0;
    char initString1[100];
    char initString2[100];
    char *arr;

   // get strings
   fgets(initString1, sizeof(initString1), stdin);
   fgets(initString2, sizeof(initString2), stdin);

    // concatenate strings (stored in initString1)
   strcat(initString1, initString2);

   // get size of real values of string1
   for (i = 0; i < 100 && initString1[i] != '\0'; i++){
       count++;
   }

   // allocate memory and create new string
   arr = (char *)malloc(sizeof(char) * count);
   if(arr == NULL){
      exit(1);
   }
   
   // give allocated string values
   for (j = 0; j < count; j++){
      arr[j] = initString1[j];
   }

   printf("Result of concatenation: ");
   // print allocated string string
   for (k = 0; k < count; k++){
      // don't print \n that is taken in during second fgets
      if (arr[k] != '\n'){
         printf("%c", arr[k]);
      }
      
   }
   printf("\n");

   // free memory
   free(arr);

   return 0;
}

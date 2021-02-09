/*
    CH-230-A
    a3 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include <stdio.h>

int main() {

    char c;
    int i,j, n; 
    int count = 0;
    int sum = 0;

    scanf("%d", &n);
    double temp[100] = {};
   
    for (j = 0; j < n && j <= 100; j++){
        scanf("%lf", &temp[j]);
    }

    scanf(" %c", &c);
    switch (c){
        
        case 's':
            // print sum
            for (i = 0; i < 100 && temp[i] != '\0'; i++){
                sum += temp[i];
            }
            printf("%d", sum);
            
            break;

        case 'p':
            // print elements
            for (i = 0; i < 100 && temp[i] != '\0'; i++){
                printf("%f\n", temp[i]);
            }

            break;

        case 't':
            // print temps in F
            for (i = 0; i < 100 && temp[i] != '\0'; i++){
                printf("%f\n", (temp[i] * 9/5) + 32 );
                
            }
            break;
        
        default:
            // find average
            for (i = 0; i < 100 && temp[i] != '\0'; i++){
                sum += temp[i];
                count++;
            }
            // fix int div
            printf("%lf", (float)sum/count);

            break;
    }
    
    return 0;
}
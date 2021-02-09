#include <stdlib.h>
#include <stdio.h>

/*
    CH-230-A
    a5 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototype values
double computeScalarProduct(double arrV[], double arrW[], int n);
double smallestComp(double arrV[], int n);
double positionSmall(double arrV[], int n);
double largestComp(double arrV[], int n);
double positionBig(double arrV[], int n);

int main(){
    // init values
    int n, i, j;

    scanf("%d", &n);

    // init arrays
    double v[n];
    double w[n];

    // get values from user for arrays
    for (i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }

    for (j = 0; j < n; j++){
        scanf("%lf", &w[j]);
    }

    // print and run function on run
    printf("Scalar product=%lf\n", computeScalarProduct(v, w, n));
    printf("The smallest = %lf\n", smallestComp(v, n));
    printf("Position of smallest = %.lf\n", positionSmall(v, n));
    printf("The largest = %lf\n", largestComp(v, n));
    printf("Position of largest = %.lf\n", positionBig(v, n));
    printf("The smallest = %lf\n", smallestComp(w, n));
    printf("Position of smallest = %.lf\n", positionSmall(w, n));
    printf("The largest = %lf\n", largestComp(w, n));
    printf("Position of largest = %.lf\n", positionBig(w, n));
    
    return 0;
}

double computeScalarProduct(double arrV[], double arrW[], int n){
    int i;
    double answer = 0;
    // run through array and find the product of the two and sum
    for (i = 0; i < n; i++){
        answer += arrV[i] * arrW[i];
    }
    return answer;
}

double smallestComp(double arrV[], int n){
    int i;
    // set inital equal to first elem
    double min = arrV[0];
    // cycle through array to find min 
    for (i = 0; i <  n; i++){
        if (arrV[i] < min){
            min = arrV[i];
        } 
    }
    return min;
}


double positionSmall(double arrV[], int n){
    int i;
    // set inital equal to zero
    int minLocation = 0;
    // set inital equal to first elem
    double min = arrV[0];
    // find min position in array
    for (i = 0; i <  n; i++){
        if (arrV[i] < min){
            min = arrV[i];
            minLocation = i;
        }
    }
    return minLocation;
}

double largestComp(double arrV[], int n){
    int i;
    // set inital equal to first elem
    double max = arrV[0];
    // find largest value
    for (i = 0; i <  n; i++){
        if (arrV[i] > max){
            max = arrV[i];
        }
    }
    return max;
}

double positionBig(double arrV[], int n){
    int i;
    // set inital equal to zero
    int bigLocation = 0;
    // set inital equal to first elem
    double max = arrV[0];
    // find largest value's position
    for (i = 0; i <  n; i++){
        if (arrV[i] > max){
            max = arrV[i];
            bigLocation = i;
        }
    }
    return bigLocation;
}


#include <iostream>
#include <cmath>
#include <time.h>
#include <fstream>
using namespace std;

/*
    CH-231-A
    a5 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// prototyped other functions
// using unsigned long long int to make scaleable 
unsigned long long int closedForm(unsigned long long int n);
unsigned long long int naiveRecursive(unsigned long long int n);
unsigned long long int bottomup(unsigned long long int n);
// using int for matrix method as it requires into to be log(n)
int matrixMethod(int n);

int main(){

    // delete files in string array before append data
    string files[4] = {"naiveRecursive.csv", "bottomUp.csv", "closedForm.csv", 
    "matrixMult.csv"};
    char fileNameChar[20];
    for (int fileIndex = 0; fileIndex < 4; fileIndex++){
        // copying over the string into the char array & removing
        strcpy(fileNameChar, files[fileIndex].c_str());
        remove(fileNameChar);
    }

    // initialize variables
    /*
        taking time with: https://www.cplusplus.com/reference/ctime/clock/
        Had to use this method as problems with chrono
    */

    clock_t start, finish;
    fstream out;
    int n = 0;
    long double elapsed;
    int timeStop = 7;

    // ------------------------------------------------------------
    // naive recusance

    cout << "\nCalculating data for naive recusance..." << endl;
    out.open("naiveRecursive.csv", ios_base::app);
    // using a while loop as suggested by TA (do while so run at least once)
    do{
        // time before run
        start = clock();
        naiveRecursive(n);
        // time after run
        finish = clock();

        // calculate time that it took in seconds
        elapsed = (double)(finish - start) / CLOCKS_PER_SEC;

        // put the info in the csv file
        out << n << "," << elapsed << endl;

        // add 15 to see how time reflects increasing n
        n+=15;
    
    // cap runs at 20000 and time taken at timeStop seconds 
    }while(n < 20000 && elapsed < timeStop);

    // close file to open next method's data file
    out.close();

    // ------------------------------------------------------------
    // set up for bottom up method
    cout << "\nCalculating data for the bottom up approach..." << endl;
    out.open("bottomUp.csv", ios_base::app);
    n = 0;

    do{

        start = clock();
        bottomup(n);
        finish = clock();

        elapsed = (double)(finish - start) / CLOCKS_PER_SEC;

        out << n << "," << elapsed << endl;

        n+=100;

    }while(n < 20000  && elapsed < timeStop);

    out.close();

    cout << endl;

    // ------------------------------------------------------------
    // closed form method
    cout << "\nCalculating data for closed form method..." << endl;

    out.open("closedForm.csv", ios_base::app);
    n = 0;
    do{

        start = clock();
        closedForm(n);
        finish = clock();

        elapsed = (double)(finish - start) / CLOCKS_PER_SEC;


        out << n << "," << elapsed << endl;

        n+=100;

    }while(n < 20000 && elapsed < timeStop);

    out.close();

    cout << endl;

    // ------------------------------------------------------------
    // matrix method
    cout << "\nCalculating data for the matrix method..." << endl;
    out.open("matrixMult.csv", ios_base::app);
    // normal int for matrix
    int nInt = 0;
    do{

        start = clock();
        matrixMethod(nInt);
        finish = clock();

        elapsed = (double)(finish - start) / CLOCKS_PER_SEC;
        
        out << nInt << "," << elapsed << endl;

        nInt+=100;
        
    // cap still to 20000, allow more time to see the matrix method curves 
    }while(nInt < 20000 && elapsed < 20);
    
    out.close(); 

    cout << endl;

    return 0;
}

// formula from slides
unsigned long long int naiveRecursive(unsigned long long int n){
    if (n < 2){
        return n;
    }else{
        return naiveRecursive(n - 1) + naiveRecursive(n - 2);
    }
}

// help from https://www.geeksforgeeks.org/overlapping-subproblems-property-in-dynamic-programming-dp-1/
unsigned long long int bottomup(unsigned long long int n){
    // using unsigned long long int to allow for large n
    unsigned long long int arrHold[n+1];
    arrHold[0] = 0;
    arrHold[1] = 1;
    for (int i = 2; i <= n; i++){
        arrHold[i] = arrHold[i - 1] + arrHold[i - 2];
    }
    return arrHold[n];
}

unsigned long long int closedForm(unsigned long long int n){
    // return the closed form equation
    return((pow((1+sqrt(5))/2, n)-pow(1-(1+sqrt(5))/2, n))/sqrt(5));
}

// help from https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
int matrixMethod(int n){

    const int arrSize = 20000;
    int f[arrSize] = {0};
    
    // if first cases of the sequence
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    if (f[n])
        return f[n];
    
    int k;
    // if n is even, k = n/2
    if(n%2 == 0){
        k = n/2;
    // if not
    }else{
        k = (n + 1)/2;
    }

    // if n is even...
    if(n%2==0){
        f[n] = (2*matrixMethod(k-1) + matrixMethod(k))*matrixMethod(k);
    }else{
        // if n is odd
        f[n] = (matrixMethod(k)*matrixMethod(k) + matrixMethod(k-1)*matrixMethod(k-1));
    }
    
    return f[n];
}

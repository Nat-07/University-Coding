#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
/*
    CH-230-A
    a6 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/
 
// prototype
char *reverseBinRep(int n , char * binstr);
 
int main(){
    // init the length of the string and input
    char str[sizeof(int) * 8 + 1];
    unsigned char input;
    
    // get value of input and print
    scanf("%c", &input);
    printf("The decimal representation is: %d\n", input);
 
    // run function on print. Split onto two lines for under 80 chars
    printf("The backwards binary representation is: %s\n", 
    reverseBinRep(input, str));
 
    return 0;
}
 
// function to bitmask
char *reverseBinRep(int n , char *binstr){
 
    //Determine how many bits our maxbit should contain using math.h
    const int maxbit = log2(n);
 
    /*
        Run through maxbit length and find the value if 0 or 1. Then put it
        into bitstr at i location.
    */
    for(int i = maxbit; i >= 0; i --){
        if (n & 1 << i){
            binstr[i] = '1';
        }else{
            binstr[i] = '0';
        }
    }
    
    // Return answer
    return binstr;
}
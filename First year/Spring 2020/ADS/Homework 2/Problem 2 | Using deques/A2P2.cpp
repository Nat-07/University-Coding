#include <iostream>
#include <deque>
using namespace std;

/*
    CH-231-A
    aA2 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // deque A, type float
    deque<float> A;
    // input variable
    float input = 0.0;

    do{
        // input and break from while if zero
        cin >> input;
        if(input == 0){
            break;
        }else if(input > 0){
            // add input to back of list if positive
            A.push_back(input);
        }else{
            // add input to front of list if negative
            A.push_front(input);
        }
    // run till input is zero
    }while(true);

    //Print A
    cout <<"_________________________________________________\n" << 
    "Printing elements of A..." << endl;
    for (auto iter = A.begin(); iter != A.end(); iter++){
         cout << *iter << " ";
    }

    // empty line
    cout << endl;
    
    // Add zero between
    for (auto iter = A.begin(); iter != A.end(); iter++){
        /* 
        Use *next to peak the next value of the iterator. Allows to check 
        if current item is greater than zero and next is greater. Thus, zero
        goes between. 
        */
        if(*iter < 0 && *next(iter) > 0){
            A.insert(iter+1, 0);
        }
    }

    cout <<"_________________________________________________\n" << 
    "Printing elements of A (post add of zero)" << endl;

    // bool to stop printing of semicolon on first run
    bool firstRun = true;

    for (auto iter = A.begin(); iter != A.end(); iter++){
        if(firstRun){
            // print and set to false so else is run for rest fo runs
            cout << *iter;
            firstRun = false;
        }else{
            // print with ';'
            cout << ";" << *iter;
        }
    }
    
    // terminal formatting
    cout << endl;

    return 0;
}

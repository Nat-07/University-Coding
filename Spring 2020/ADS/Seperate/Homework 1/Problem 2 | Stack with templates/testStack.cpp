#include <iostream>
#include "stack.h"
using namespace std;

/*
    CH-231-A
    aA1 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    cout << "_____________________________________________________\n" <<
    "Adding elements to the int stack..." << endl;
    // using parametric constructor
    stack<int, 15> stackInt;
    
    int valueReturn;
    int valueReturn2;
    
    for(int i = 0; i < 15; i++){
        // display before add
        cout << "Current number of entries: " << stackInt.getNumEntries() << 
        ".   Adding one to the top...   ";

        // add to top of stack whatever i*i is
        stackInt.push(i*i);

        cout << i*i << " was added." ;

        // display after
        cout << "   Now " << stackInt.getNumEntries() << " entries." << endl;

        
    }
    // trying to add one more

    if(stackInt.push(5) == false){
        cout << "Failed to add 5: Exceeded size of stack!" << endl;
    }
    
    cout << "_____________________________________________________\n" <<
    "Removing elements from the original int stack..." << endl;
    // creating a copy(using copy constructor)
    stack<int, 15> copyStack = stackInt;
    for (int j = 0; j < 15; j++){

        // display before add
        cout << "Current number of entries: " << stackInt.getNumEntries() << 
        ".  Removing one off the top...     ";
        
        // remove element
        stackInt.pop(valueReturn);
        
        cout << valueReturn << " was removed.    " << stackInt.back() << 
        " is now on top.";

        // display after
        cout << "   Now " << stackInt.getNumEntries() << " entries." << endl;
        
    }

    cout << "_____________________________________________________\n" <<
    "Removing elements from the copy of the int stack..." << endl;

    for (int k = 0; k < 15; k++){

        // display before add
        cout << "Current number of entries: " << copyStack.getNumEntries() << 
        ".  Removing one off the top...     ";
        
        // remove element
        copyStack.pop(valueReturn2);
        
        cout << valueReturn2 << " was removed.     Now " << copyStack.back() <<
        " is now on top.";

        // display after
        cout << "   Now " << copyStack.getNumEntries() << " entries." << endl;
        
    }

    cout << "_____________________________________________________\n" <<
    "Adding elements to the string stack..." << endl;

    // using default constructor
    stack<string> stringStack;
    string valueReturnStr1;
    string valueReturnStr2;

    string arr[10] = {"The", "bird", "flew", "ominously", "away", "from", 
    "the", "tree", "far", "away"};

    for(int n = 0; n < 10; n++){
        // display before add
        cout << "Current number of entries: " << stringStack.getNumEntries()<< 
        ".   Adding one to the top...   \"";

        // add to top of stack whatever i is
        stringStack.push(arr[n]);
        
        cout << arr[n] << "\" was added." ;

        // display after
        cout << "   Now " << stringStack.getNumEntries() << " entries."<< endl;
    }

    if(stringStack.push("Testing") == false){
        cout << "Failed to add \"Testing\": Exceeded size of stack!" << endl;
    }
    
    cout << "_____________________________________________________\n" <<
    "Removing elements from the original string stack..." << endl;
    // creating a copy(using copy constructor)
    stack<string> copyString = stringStack;
    for (int m = 0; m < 10; m++){

        // display before add
        cout << "Current number of entries: " << 
        stringStack.getNumEntries() << ".  Removing one off the top...   \"";
        
        stringStack.pop(valueReturnStr1);
        
        cout << valueReturnStr1 << "\" was removed.    \"" << 
        stringStack.back() << "\" is now on top.";

        // display after
        cout << "   Now " << stringStack.getNumEntries() << 
        " entries." << endl;
        
    }
    
    cout << "_____________________________________________________\n" <<
    "Removing elements from the copy of the string stack..." << endl;
    for (int p = 0; p < 10; p++){

        // display before add
        cout << "Current number of entries: " << copyString.getNumEntries() << 
        ".  Removing one off the top...     \"";
        
        copyString.pop(valueReturnStr2);
        
        cout << valueReturnStr2 << "\" was removed.     Now \"" << 
        copyString.back() << "\" is now on top.";

        // display before
        cout << "   Now " << copyString.getNumEntries() << " entries." << endl;
    }
    
    return 0;
}
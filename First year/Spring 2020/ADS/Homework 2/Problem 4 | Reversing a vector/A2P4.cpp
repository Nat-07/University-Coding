#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    CH-231-A
    aA2 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // creating vector
    vector<int> vector1;

    // adding elements at end of vector
    for (int i = 1; i < 30; i++){
        vector1.push_back(i);
    }

    // add 5 at end of vector
    vector1.push_back(5);

    cout << "\n__________________________________________________\n" << 
    "Printing elements..." << endl;

    // cycling through the vector and printing
    for(auto iter = vector1.begin(); iter != vector1.end(); iter++){
        cout << *iter << " ";
    }

    // reverse the vector using algorithm library
    reverse(vector1.begin(), vector1.end());

    cout << "\n__________________________________________________\n" << 
    "Printing elements in reverse order..." << endl;

    // cycling through the vector and printing
    for(auto iter = vector1.begin(); iter != vector1.end(); iter++){
        cout << *iter << " ";
    }

    // replace 5 with 129
    replace(vector1.begin(), vector1.end(), 5, 129);

    cout << "\n__________________________________________________\n" << 
    "Printing elements after replacing 5 with 129..." << endl;
    for(auto iter = vector1.begin(); iter != vector1.end(); iter++){
        cout << *iter << " ";
    }

    cout << endl;
    
    return 0;
}

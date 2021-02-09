#include<iostream>
#include <vector>
// includes out_of_range (https://www.cplusplus.com/reference/stdexcept/)
#include <stdexcept> 
using namespace std;

/*
    CH-230-A
    a13 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // initing an int vector
    vector<int> v1;

    // for loop filling the vector with 8
    for(int i = 0; i <= 20; i++){
        // filling by putting item at the end of the vector
        v1.push_back(8); 
    }

    try{
        /* 
            We use .at because if we tried to check with [], we would not get 
            the out_of_range exception as [] does not check for bounds.

            Found on the website the professor suggested:
            https://www.cplusplus.com/reference/vector/vector/at/

            trying to set the value of index 21 to 1
        */
        v1.at(21) = 1;

    }catch(const out_of_range& obj){
        // standard error stream, hence using cerr
        cerr << "Out of Range error: " << obj.what() << '\n';
        return 1;
    }
    
    return 0;
}

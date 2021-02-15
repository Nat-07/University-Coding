#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

/*
    CH-231-A
    aA2 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// comparison help form: https://www.cplusplus.com/reference/algorithm/sort/
bool compare(int i,int j){
    return (i<j); 
}

int main(){
    // creating a set
    vector<int> v1;

    // initialize random number
    srand(static_cast <unsigned int>(time(0)));

    // get 6 unique numbers
    for(int i = 0; i < 6; i++){
        int random = rand() % 49 + 1;
        /*
            Use the find function starting at the beginning, going to end, 
            looking for random element and if find can't find the element, 
            it will return the iterator to the last element, thus equaling 
            end. So if it does equal to end it means it does nto exist, thus
            no duplicate. Then add element to end.
        */
        if(find(v1.begin(), v1.end(), random) == v1.end()){
            v1.push_back(random);
        // if there is a duplicate, subtract one from i to run again
        }else{
            i--;
        }
    }
    

    // sort vector in accending order
    sort(v1.begin(), v1.end(), compare);

    cout << "\n__________________________________________________\n" << 
    "Printing the random elements post sort..." << endl;

    // print out set
    for(auto iter = v1.begin(); iter != v1.end(); iter++){
        cout << *iter << endl;
    }

    return 0;
}

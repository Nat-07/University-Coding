#include <iostream>
#include <string>
using namespace std;

/*
    CH-230-A
    a9 p2.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // init vars
    int n;
    double x;
    string s;

    // get input
    cin >> n;
    cin >> x;

    /* 
        As asking the professor, she said if using getline we use cin.ignore 
        to ignore the new line even tho cin does not get us that problem
    */
    cin.ignore();
    getline(cin, s);

    // print n times
    for(int i = 0; i < n; i++){
        cout << s << ':' << x << endl;
    }
    
    return 0;
}
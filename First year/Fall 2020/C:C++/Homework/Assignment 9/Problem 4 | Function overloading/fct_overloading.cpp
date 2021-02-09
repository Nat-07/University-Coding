#include <iostream>
#include <string>
using namespace std;

/*
    CH-230-A
    a9 p4.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/


//Function overloading, as 2 same function names but different inputs types
// string function
int mycount(char userLetter, string userString){
    int counter = 0;

    /*
        when submitting to grader, I would get the following when the
        iterator i was signed. 

        warning: comparison of integer expressions of different signedness:

        Thus to fix it, I made it an unsigned int:
    */
    unsigned int i;
    
    // iterate through string using the string method, size for bound
    for (i = 0; i < userString.size(); i++){
        if (userString[i] == userLetter){
            // add to counter if userLetter is equal to the current char
            counter++;
        }
    }

    // return the count after finished
    return counter;  
};

// int function
int mycount(int a, int b){
    // return the difference
    return b-a;
};

int main(){
    // init vars
    int a, b;
    char userLetter;
    string userString;

    // take user input for 2 numbers, letter, and string
    cin >> a;
    cin >> b;
    cin >> userLetter;
    // ignore the new line that is produced (told by professor)
    cin.ignore();
    getline(cin, userString);


    // count function for intgers
    cout << mycount(a, b) << endl;

    // count function for string
    cout << mycount(userLetter, userString) << endl;

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream out;

    out.open("input.txt");
    // test to make sure successfull opening
    if(!out.good()){
        cout << "Error opening file!" << endl;
    }

    // write into file
    out << "This will be line 1\n";
    out << "And this will be line 2\n";

    // close file
    out.close();

    // ---------------------------
    
    ifstream in;

    // create buffer
    char buffer[100];

    // open file
    in.open("input.txt");
    // test to make sure successfull opening
    if(!in.good()){
        cout << "Error opening file!" << endl;
    }
    
    // get all lines of file
    while(in.getline(buffer, sizeof(buffer))){
        // print line from file
        cout << buffer << endl;
    }

    in.close();

    return 0;
}
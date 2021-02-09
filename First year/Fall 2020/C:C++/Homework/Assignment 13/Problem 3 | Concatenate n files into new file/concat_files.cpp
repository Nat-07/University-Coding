#include <iostream>
#include <cstdlib>
#include <fstream>  
#include <cstring>
using namespace std;

/*
    CH-230-A
    a13 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    int n;  
    cout << "Enter n value: ";
    // get value of n
    cin >> n;
    // array of file names
    string fileNames[n];
    // set buffer
    char buffer[200];

    // start at 0 and up to n for elements in array
    cout << "Enter n file names: " << endl;
    for(int i = 0; i < n; i++){
        // get user file name
        cin >> fileNames[i];
    }
   
    // test if all files exist and no flaws
    for (int i = 0; i < n; i++){
        // test file at the index i
        ifstream fileArrayTest(fileNames[i], ios::binary);
        // if fail
        if(!fileArrayTest){
            // print message
            cout << "Concatenation failed - occurred while opening " <<
            fileNames[i] << "! Perhaps it does not exist." << endl;
            // quit program
            exit(1);
        }
        // close to open new
        fileArrayTest.close();   
    }

    // open/create coppied info
    ofstream out("concatn.txt", ios::binary);
    if(!out){
        cout << "Error occurred while opening file!" << endl;
        // quit if error
        exit(1);
    }
    
    // init sizeLength 
    int sizeLength;

    // cycle through files using for loop
    for (int j = 0; j < n; j++){
        // open file in binary
        ifstream in(fileNames[j], ios::binary);
        in.clear(); //clear eof bit

        // Help from: https://stackoverflow.com/q/5420317

        // file length 
        in.seekg(0,ios::end);

        // set to current position in the stream
        sizeLength = in.tellg();

        // trace back to the front
        in.seekg(0,ios::beg);

        // check if failed
        if(!in){
            cout << "Concatenation failed - occurred while opening " <<
            fileNames[j] << "!" << endl;
            exit(1);
        }

        // cycle till hit sizeLength and read and write
        for(int i = 0; i < sizeLength; i++){
            in.read(buffer, 100);
            out.write(buffer, in.gcount());
        }
        // write a new line every time 
        out.write("\n", 1);
        // close and move onto the next one
        in.close();
    }

    return 0;
}
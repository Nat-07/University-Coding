#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

/*
    CH-231-A
    aA1 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // vector
    vector <string> strV;
    //index operators
    vector<string>::const_iterator pos1;
    vector<string>::const_iterator pos2;
    vector<string>::const_iterator pos3;
    // input string
    
    char inputChar[200];
    // make bool true again
    bool firstrun1 = true;
    bool firstrun2 = true;
    bool firstrun3 = true;
    
    do{
        // get input
        cin.getline(inputChar,400);  

        // check if "END" and break out of while
        if(strcmp("END", inputChar) == 0){
            break;
        // else put into vector
        }else{
            string x(inputChar);
            strV.push_back(x);
        }
    // keep running till END is typed in
    }while(1);

    // testing if size is greater than 4 and swapping
    if(strV.size() >= 5){
        // swap 2nd and fifth, which means one minus for index
        string temp = strV[1];
        strV[1] = strV[4];
        strV[4] = temp;
        //swap(strV[2], strV[5]);
        cout << endl;
    // if not bigger than 4, test if bigger than 2
    }else if(strV.size() >= 2){
        cout << "No element at vector index 5!" << endl;
    
    // else we know neither exist
    }else{
        cout << "No element at vector index 2 nor 5!" << endl;
    }
    
    // making the last element three question marks
    strV[strV.size()-1] = "???";

    // text formatting
    cout  << endl;
    // cycle through vector using index operator 

    // message depending on what exists
    if(strV.size() >= 5){
        cout << "Swapped 2nd and 5th elements, set last as ???, and " << 
        "inserted commas" << endl;
    }else if(strV.size() >= 2){
        cout << "Unable to swap, as no element at index 5, " <<
         "set last as ???, and " << "inserted commas\n" << endl;
    }else{
        cout << "Unable to swap, as no element at index 5 nor 2, " <<
        "set last as ???, and " << "inserted commas\n" << endl;
    }
    
    // cycle through vector using index operator 
    for (pos1 = strV.begin(); pos1 != strV.end(); ++pos1){
        if(firstrun1 == true){
            cout << *pos1;
        }else{
            // put a comma before the word, so it won't print on last run
            cout << ',' << *pos1;
        }
        // stop the if statement from being true in for loop
        firstrun1 = false;
    }
    cout <<"\n_________________________________________________" << endl;
    cout << "Inserting semicolons" << endl;
    
    // cycle through vector using index operator 
    for (pos2 = strV.begin(); pos2 != strV.end(); ++pos2){
        if(firstrun2 == true){
            cout << *pos2;
        }else{
            // put a comma before the word, so it won't print on last run
            cout << ';' << *pos2;
        }
        // stop the if statement from being true in for loop
        firstrun2 = false;
    }
    cout <<"\n_________________________________________________" << endl;
    cout << "Printing strings in revsered order + spaces for readability" << endl;
    for (pos3 = strV.end()-1; pos3 != strV.begin()-1; --pos3){
        if(firstrun3 == true){
            cout << *pos3;
        }else{
            // put a comma before the word, so it won't print on last run
            cout << ' ' << *pos3;
        }
        // stop the if statement from being true in for loop
        firstrun3 = false;
    }

    // text formatting
    cout <<"\n_________________________________________________" << endl;
    
    return 0;
}

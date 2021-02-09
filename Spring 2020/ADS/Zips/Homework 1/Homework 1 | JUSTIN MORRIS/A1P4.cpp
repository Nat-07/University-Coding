#include <iostream>
#include <vector>
using namespace std;

/*
    CH-231-A
    aA1 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // string vector named strV
    vector <string> strV;
    //index operators
    vector<string>::const_iterator pos;
    vector<string>::const_iterator pos2;
    // input string
    string input;
    
    do{
        // make bool true again
        bool firstrun = true;
        // get input
        cin >> input;

        // check if "END" + quit
        if(input == "END"){
            exit(1);
        }else{
            strV.push_back(input);
        }

        // text formatting
        cout  << endl;

        // cycle through vector using index operator 
        for (pos = strV.begin(); pos != strV.end(); ++pos){
            cout << *pos << ' ';
        }
        
        // text formatting
        cout  << endl;

        // cycle through vector using index operator 
        for (pos2 = strV.begin(); pos2 != strV.end(); ++pos2){
            if(firstrun == true){
                cout << *pos2;
            }else{
                // put a comma before the word, so it won't print on last run
                cout << ',' << *pos2;
            }
            // stop the if statement from being true in for loop
            firstrun = false;
        }
        // text formatting
        cout <<"\n_________________________________________________" << endl;
        
    // keep running and only stops by exit when "END" is input
    }while(true);

    return 0;
}

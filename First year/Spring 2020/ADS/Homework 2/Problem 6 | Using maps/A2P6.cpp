#include <iostream>
#include <fstream>
#include <map>
using namespace std;

/*
    CH-231-A
    aA2 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int checkExist(map<string, string> map1, string nameToFind){

    // iterate through map and check nameToFind
    for(auto iter = map1.begin(); iter != map1.end(); iter++){
        // if name to find is equal to map item print out values
        if(nameToFind == iter->first){
            cout << iter->first << "     " << iter->second << endl;
            // break from function with return 1
            return 1;
        }
    }
    // if not found print and return 0
    cout << "Name not found!" << endl;
    return 0;
}

int main(){

    // open file and check if not successful
    ifstream file;
    file.open("data.txt");
    if(!file.is_open()){
        cout << "Error opening file";
    }

    // initialization
    string line;
    int lineNum = 0;
    int counter = 0;
    bool isSecond = true;
    // creating the map map
    map<string, string> map1;
    
    // read file and get number of lines
    while(getline(file, line)){
        // increment counter
        ++lineNum;
    }

    // initialize string array with size of the number of lines
    string arr[lineNum];
    

    // remove the flag (http://www.cplusplus.com/reference/ios/ios/clear/)
    file.clear();
    // set the position of where reading is taking place
    file.seekg(0, file.beg);
    
    // read file and insert contents into array
    while(getline(file, line)){
        arr[counter] = line;
        counter++; 
    }

    // close file
    file.close();
   
    // assigning values to map
    for (int i = 0; i < lineNum; i++){
        // check if true, assign map values to current and next index of array
        if(isSecond){
            map1[arr[i]] = arr[i+1];
            // set to false to skip next run
            isSecond = false;
        }else{
            // change to set next pair of elements 
            isSecond = true;
        }
    }

    cout << "Type in a persons name to look up their birthday: ";

    string nameCheck;
    getline(cin, nameCheck);

    // does exist
    checkExist(map1, nameCheck);
    
    return 0;
}

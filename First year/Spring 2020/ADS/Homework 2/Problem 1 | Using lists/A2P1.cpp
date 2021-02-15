#include <iostream>
#include <fstream>
#include <list>
using namespace std;
#include <string>


/*
    CH-231-A
    aA2 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// return a comparison of which is greater
bool comparison(int item1, int item2){
   return(int(item1)<int(item2));
}

int main(){
    // two lists
    list<int> listA;
    list<int> listB;
    // bool to format commas
    bool firstRun = true;
    // input variable
    int input;

    do{
        // get input and check if bigger than 0
        cin >> input;
        if(input <= 0){
            break;
        }

        // if positive
        if(input % 2 == 0){
            // push to back of list A
            listA.push_back(input);
            // push to front of list B
            listB.push_front(input);
        }

    
    // run till break
    }while(true);

    // opening file
    ofstream fileB;
    fileB.open ("fileB.txt");

    cout <<"\n_________________________________________________\n" << 
    "Printing list A...\n" << endl;

    // print list A to standard output
    for (auto iter = listA.begin(); iter != listA.end(); iter++){
        cout << *iter << " ";
    }

    cout <<"\n_________________________________________________\n" << 
    "\nPrinting list B into fileB...";

    // print list into fileB
    for (auto iter2 = listB.begin(); iter2 != listB.end(); iter2++){
        fileB << *iter2 << " ";
    }

    // empty line
    cout << endl;

    // move first element of list A to end
    listA.splice(listA.end(),listA, listA.begin());

    // move first element of list B to end
    listA.splice(listB.end(),listB, listB.begin());

    cout <<"_________________________________________________\n" << 
    "Moved first element of list A to end of list A\n" << endl;
    for (auto iter = listA.begin(); iter != listA.end(); iter++){
        if(firstRun){
            cout << *iter;
            firstRun = false;
        }else{
            cout << "," << *iter;
        }
    }

    cout <<"\n_________________________________________________\n" << 
    "Moved first element of list B to end of list B\n" << endl;
    firstRun = true;
    for (auto iter2 = listB.begin(); iter2 != listB.end(); iter2++){
        if(firstRun){
            cout << *iter2;
            firstRun = false;
        }else{
            cout << "," << *iter2;
        }
    }

    // empty line
    cout << endl;

    // merging list B into list A
    listA.merge(listB);

    // sorting list using compare
    listA.sort(comparison);

    cout <<"\n_________________________________________________\n" << 
    "Merge ListA into ListB and sort \n" << endl;
    for (auto iter = listA.begin(); iter != listA.end(); iter++){
        cout << *iter << " ";
    }
    
    // close the file
    fileB.close();

    // new line for formatting
    cout << endl;
    
    return 0;
}
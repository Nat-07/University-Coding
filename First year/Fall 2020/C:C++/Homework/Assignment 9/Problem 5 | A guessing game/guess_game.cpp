#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
    CH-230-A
    a9 p5.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init vars
    int randomNum, userGuess;
    int counter = 0;
    string name;

    // get user name
    getline(cin, name);

    // init random number generator (given in presentation)
    srand(static_cast <unsigned int>(time(0)));
    
    /* 
        Following the equation: rand()%(max-min + 1) + min;
        Found at https://stackoverflow.com/a/12657984

        Not clear in the assignment tho if we are supposed to allow 1 and 
        100 as inputs. Thus I took the liberty of assuming that we are are 
        allowing those to be valid inputs.

        If they are not supposed to be, change % 101 to % 100 as
        (99-1 + 1) + 1 = 100.

    */
    randomNum = rand() % 101;
    
    do{
        // get user's guess for what random num is
        cin >> userGuess;

        if(randomNum == userGuess){
            // if user guesses correct break
            break;
        
        /*
            check if too low or high and give hint on if low or high and 
            add to the counter for incorrect guesses.
        */
        }else if(randomNum > userGuess){
            cout << "Guess was too low" << endl;
            counter++;
        }else{
            cout << "Guess was too high" << endl;
            counter++;
        }
        
    // run forver (unless break is triggered from if statement)
    }while(1);

    // print congrats to the user and tell them how many incorrect guesses
    cout << "Congrats " << name << " you guessed it with " << counter << 
    " incorrect guesses." << endl;
    

    return 0;
}


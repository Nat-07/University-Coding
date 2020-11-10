#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
    CH-230-A
    a9 p9.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){
    // init vars
    int randomNum;
    string userGuess;
    int guessCount;
    
    /*
        temp word so we can change word's vowels to _ without messing with
        original words.
    */
    string temp_word;
    // list of words
    string words[] = {"computer", "television", "keyboard", 
    "laptop", "mouse", "table", "chair", "pen", "water", "bottle", "plant", 
    "card", "painting", "bed", "calculator", "book", "wire"};

    // init random number generator (given in presentation)
    srand(static_cast <unsigned int>(time(0)));

    do{
        // new round when at this point in code
        guessCount = 0;
        // get values from 0-16. Want only 16 as array starts with 1 
        randomNum = rand() % 17;
        // temp word to not mess with original when underscoring
        temp_word = words[randomNum];

        // cycle through and underscore when needed
        /*
            Made the normal int i into long unsigned int i as I was getting
            the following error when uploading to grader:

            warning: comparison of integer expressions of different
            signedness: 'int' and 'std::__cxx11::basic_string::size_type'
            {aka 'long unsigned int'}
        */
        for (long unsigned int i = 0; i < words[randomNum].size(); i++){
            if(temp_word[i] == 'a' || temp_word[i] == 'e'
            || temp_word[i] == 'i' || temp_word[i] == 'o' 
            || temp_word[i] == 'u'){
                temp_word[i] = '_';
            }
        }

        // print word with underscores instead of vowels
        cout << temp_word << endl;

        // game portion
        do{
            
            // take user guess and check if quit
            cin >> userGuess;
            
            if(userGuess == "quit"){
                exit(0);
            }

            // add to count
            guessCount++;
            
            // while the user has not guessed correctly
        }while(userGuess != words[randomNum]);

        // tell the user how many guesses it took them
        cout << "It took you " << guessCount << " guess(es)." << endl;

        /* 
            ask if want to play again, get their input and if No or quit 
            then quit the game.
        */
        cout << "Do you wish to play again?" << endl;
        cin >> userGuess;
        if (userGuess == "No" || userGuess == "quit"){
            exit(0);
        }

    // always run unless user quit or said No to playing further 
    }while(1);
    

    return 0;
}

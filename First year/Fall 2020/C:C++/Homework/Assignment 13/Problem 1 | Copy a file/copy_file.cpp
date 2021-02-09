#include <iostream>
#include <cstdlib>
#include <fstream>  
#include <cstring>
using namespace std;

/*
    CH-230-A
    a13 p1.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    // get the user's name of file
    char input[50];
    cin.getline(input, sizeof(input));
    
    // set buffer size and initialize char array to the size
    const int size = 150; 
	char buffer[size];

    // For reading the file by taking in the input as the filename
    ifstream in(input);
    // checking for error
	if (!in.good()){
		cerr << "Fault rose while opening the file!" << endl;
        // quit the program with error
		exit(1);
	}

    // change char array to string for size
    string str_input = input;
    // initialize new string to store the sub string
    string newString;
    // string for saving the file type
    string fileType; 

    // cycle through size of input
    for (long unsigned int i = 0; i < str_input.size(); i++){
        // stop when we find the dot
        if (str_input[i] == '.'){
            /*
                set newstring equal to the sub string starting at index 0 to
                i as that is the index right before the dot. Keeping in mind
                that arrays start with 0.
            */
            newString = str_input.substr(0,i);

            /*
                Similarly we are getting the file extention to be used later
                for the copy. This allows us to copy more than just .txt 
                files as it is not hard coded. Using the same method,
                we are getting the substring starting with the dot
                and ending at the size (so last character).
            */
            fileType = str_input.substr(i,str_input.size());

            // break out of for loop
            break;
        }
    }
    
    // copy back to char array
    strcpy(input, newString.c_str());

    /*
        Here we need to create the output file. We are taking the name of 
        the input + _copy.
    */
	ofstream out(input + string("_copy") + fileType);
    // checking for error
	if (!out.good()){
		cerr << "Fault rose while the opening output file!" << endl;
        // quit the program with error
		exit(1);
	}

	in.clear(); //clear eof bit

    /*
        Iterate through the input file, read the current line and save 
        to buffer.
    */
	while(in.getline(buffer, size)){
        // write the line that is saved in the buffer into the file
        out << buffer << endl;
	}

    return 0;
}

#include<iostream>
#include <exception> 
using namespace std;

/*
    CH-230-A
    a13 p7.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// my own class derived from exception
class OwnException : public exception{

    private:
        // message string
        string outMessage;

    public:
        OwnException(string newOutMessage);

        // overwriteing the what() method
        const char* what() const throw();

        // destructor 
        virtual ~OwnException() throw();
};

// destructor 
OwnException :: ~OwnException() throw(){
    cout << "Destructor!" << endl;
}

// parametric constructor setting outMessage to passed newOutMessage
OwnException :: OwnException(string newOutMessage){
    outMessage = newOutMessage;
}

// overwritten what() method
const char* OwnException :: what() const throw(){
    cout << outMessage << endl;
    return  "OwnException\n";
}

// function with integer parameter
void intParamFunction(int param){

    // depending on parameter throw somethign else
    if(param == 1){
        throw 'a';
    }else if(param == 2){
        throw 12;
    }else if(param == 3){
        throw true;
    }else if(param == 4){
        // create instance of my class with message
        throw OwnException("Default case exception"); 
    }
}


int main(){
    // init param
    int param;
    try{
        // set param and run function
        param = 1;
        intParamFunction(param);
        
    }catch(char e){
        // catch and output in standard error stream
        cerr << "Caught in main: " <<  e << endl;
    }

    try{
        // set param and run function
        param = 2;
        intParamFunction(param);
        
    }catch(int e){
        // catch and output in standard error stream
        cerr << "Caught in main: " <<  e << endl;
    }

    try{
        // set param and run function
        param = 3;
        intParamFunction(param);
        
    }catch(bool e){
        // catch and output in standard error stream
        cerr << "Caught in main: " << e << endl;
    }

    try{
        // set param and run function
        param = 4;
        intParamFunction(param);
        
    }catch(exception& e){
        /* 
            Catch and output in standard error stream. This time using .what()
            as this exception is an instance of the objetc we created.
        */
        cerr << "Caught in main: " <<  e.what() << endl;
    }

    return 0;
}


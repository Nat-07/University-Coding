#include <iostream>
#include <cstring>  // standard C string.h header file
using namespace std;

/*
    CH-230-A
    a10 p7.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
	private:
		char *str;

	public:
		NaiveString(const char*);
		NaiveString(const NaiveString&);
		void funcByref(NaiveString *s);
		void update(char, char);
		void print();
		~NaiveString();
};

// Destructor
NaiveString :: ~NaiveString(){
    cout << "Destructor run" << endl;
	delete[] str;
}

NaiveString::NaiveString(const char* t) {
	cout << "Normal constructor" << endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/
NaiveString::NaiveString(const NaiveString& src) {
	cout << "Copy constructor called!" << endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
	
}

void NaiveString :: funcByref(NaiveString *s){
	// print statement for where we are
	cout << "Updating + printing inside method funcByref" << endl;
	s -> update('B', 'C');
	s -> print();
	cout << "\n" << endl;

}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar){
	unsigned int i;
	cout << "Update method being called" << endl;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print(){
	cout << "Print method being called" << endl;
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv){
	// instances + vars
	NaiveString a("aBcBdB");
	NaiveString b("BpOCb");
	NaiveString c("CptSB");
	NaiveString *ptr, *ptr2;
	ptr = &b;
	ptr2 = &c;
	
	// new line to help with formatting
	cout << "\n" << endl;
	
	// printing using method (look different as one is with a pointer)
	a.print();
	ptr -> print();
	ptr2 -> print();

	// new line to help with formatting
	cout << "\n" << endl;

	// show 2 ways of calling
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	
	// new line to help with formatting
	cout << "\n" << endl;

	// funcByref method
	cout << "About call funcByref methods from main!" << endl;
	ptr->funcByref(ptr);

	cout << "About call funcByref methods from main!" << endl;
	ptr2->funcByref(ptr2);

	// printing in the main once more
	cout << "Printing in main" << endl;
	a.print();
	b.print();
	c.print();

	// new line to help with formatting
	cout << "\n" << endl;

	return 0;
}

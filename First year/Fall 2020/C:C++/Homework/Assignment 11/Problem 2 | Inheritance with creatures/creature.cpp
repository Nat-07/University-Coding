#include <iostream>
#include <cstdlib>
using namespace std;

/*
    CH-230-A
    a11 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Creature{
	public:
		// constructor
		Creature();
        // deconstructor
        ~Creature();
        // run method
		void run() const;

	protected:
		int distance;
};

// Creature constructor with distance
Creature::Creature(): distance(10){
    cout << "Creature constructor run" << endl;
}

// Creature deconstructor
Creature :: ~Creature(){
    cout << "Creature deconstructor run" << endl;
}

// Creature method
void Creature::run() const{ 
    cout << "Creature running " << distance << " meters!\n";
}  

class Wizard : public Creature{
	public:
		// constructor
		Wizard();
        // deconstructor
        ~Wizard();
        // hover method
		void hover() const;

	private:
		int distFactor;
};

// first self made inheritor
class Hedgehog : public Creature{

    private: // data
        double lengthOfSpikes;

	public:
        // constructor
        Hedgehog();
        // deconstructor
        ~Hedgehog();
        // defined method for Hedgehog
        void length() const;
};

// second self made inheritor
class Superman : public Creature{
    private: // data
        int fullBlocksFlown;

	public:
        // constructor
        Superman();
        // deconstructor
        ~Superman();
        // defined method for superman
        void flown() const;
};

//------------------------------------------------------

// Wizard methods
Wizard::Wizard() : distFactor(3){
    cout << "Wizard constructor run" << endl;
}

// Wizard deconstructor
Wizard :: ~Wizard(){
    cout << "Wizard deconstructor run" << endl;
}

// wizard hovering
void Wizard::hover() const{
    cout << "Wizard hovering " << (distFactor * distance) << " meters!\n";
}

//------------------------------------------------------

// Hedgehog constructor
Hedgehog :: Hedgehog() : lengthOfSpikes(2.5){
    cout << "Hedgehog constructor run" << endl;
}

// Hedgehog deconstructor
Hedgehog :: ~Hedgehog(){
    cout << "Hedgehog deconstructor run" << endl;
}

// Hedgehog method
void Hedgehog::length() const{
    cout << "Length of all Hedgehog spikes = " <<
    (lengthOfSpikes * distance) << "cm in total!\n" << endl;
}

//------------------------------------------------------

// Superman constructor
Superman :: Superman () : fullBlocksFlown(5){
    cout << "Superman constructor run" << endl;
}

// Superman deconstructor
Superman :: ~Superman(){
    cout << "Superman deconstructor run" << endl;
}

// Superman method
void Superman :: flown() const {
    cout << "Superman has flown " << (fullBlocksFlown * distance) <<
    " blocks!\n" << endl;
}

//------------------------------------------------------

// main function
int main(){ 
    // Creating Creature instance
    cout << "Creating instance of Creature.\n";
    Creature c;
    // run method from Creature
    c.run();

    // Wizard Creature instance + method
    cout << "\nCreating instance of Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    // Superman Creature instance + method
    cout << "\nCreating instance of Superman.\n";
    Superman s;
    s.run();
    s.flown();

    // Hedgehog Creature instance + method 
    cout << "Creating instance of Hedgehog.\n";
    Hedgehog h;
    h.run();
    h.length();

    return 0;
} 

#include <iostream>
using namespace std;

/*
    CH-230-A
    a11 p4.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Creature{
	public:
        // constructor
		Creature(); 
        // deconstructor
        ~Creature(); 
		void run() const;
        
	protected:
		int distance;
};

class Wizard : public Creature{
	public:
        // constructor
		Wizard();
        // deconstructor
        ~Wizard();
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
        // flown method for superman
        void flown() const;
};

#include <string> // defines standard C++ string class

using namespace std;

/*
    CH-230-A
    a10 p4.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

class Critter{
	private:  // data members are private
		std::string name;
		double hunger;
		int boredom;
		int height;

	public: // business logic methods are public

		// constructors
		Critter();
		Critter(std::string nameParam);
		// Take either 3 or 4 parameters (flexable)
		// double 10 means that if not supplied, use 10 as value
		Critter(std::string nameParam, int hungerParam, int boredomParam, 
				double = 10);

		// setter methods given
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setBoredom(int newboredom);

		// getter method given
		int getHunger();

		// print method
		void print();
};

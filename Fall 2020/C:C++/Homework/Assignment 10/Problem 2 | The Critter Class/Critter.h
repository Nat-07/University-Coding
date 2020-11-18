#include <string> // defines standard C++ string class

/*
    CH-230-A
    a10 p2.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

/* First C++ class */
class Critter{
	private:  // data members are private
		std::string name;
		int hunger;
		int boredom;
		double height;

		// my 2 properties of choice:
		int age;
		int numFriends; 

	public: // business logic methods are public
		// setter methods
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setBoredom(int newboredom);

		// setter methods I created
		void setAge(int newAge);
		void setNumFriends(int newNumFriends);

		// getter method
		int getHunger();

		// my getter methods
		int getAge();
		int getNumberOfFriends();

		// service method
		void print();
};

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
// importing time to generate random numbers
#include <time.h>
#include <string>

/*
    CH-230-A
    a12 p7.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

 
const int num_obj = 25;
int main(){
	

	// number of objects equals 25
	Area *list[num_obj];
	string temp_color;
	string temp_name;
	

	// initializing and setting index equal to 0 
	int index = 0;

	// initializing & setting the sun of the areas to 0.0
	double sum_area = 0.0;
	double sum_perimeter = 0.0;

	cout << "Creating Ring: ";

	/* 
		Creating an instance of Ring named blue_ring and setting the color to
		blue, the outer value to 5, and the inner value to 2. 
	*/

	// init random number generator (given in presentation)
	srand(static_cast <unsigned int>(time(0)));

	for(int i = 0; i < num_obj; i++){
		// setup for objects
		int ranNumColor = rand()%(4 + 1 - 1)+1;
		int ranNumsize = rand()%(100+1-5)+5;
		int whichType = rand()%(4+1-1)+1;
		// name of object
		temp_name = "obj" + to_string(i);

		// for circles
		if (whichType == 1){
			// depending on the random color
			if(ranNumColor == 1){
				// make object and set it in the array
				Circle temp_name("RED", ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 2){
				// make object and set it in the array
				Circle temp_name("BLACK", ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 3){
				// make object and set it in the array
				Circle temp_name("VIOLET", ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 4){
				// make object and set it in the array
				Circle temp_name("BLUE", ranNumsize);
				list[i] = &temp_name;
			}
			
		// for rings
		}else if(whichType == 2){
			// depending on the random color
			if(ranNumColor == 1){
				// make object and set it in the array
				Ring temp_name("RED", ranNumsize, ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 2){
				// make object and set it in the array
				Ring temp_name("BLACK", ranNumsize, ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 3){
				// make object and set it in the array
				Ring temp_name("VIOLET", ranNumsize, ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 4){
				// make object and set it in the array
				Ring temp_name("BLUE", ranNumsize, ranNumsize);
				list[i] = &temp_name;
			}

		// for Rectangles
		}else if(whichType == 3){
			// depending on the random color
			if(ranNumColor == 1){
				// make object and set it in the array
				Rectangle temp_name("RED", ranNumsize, ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 2){
				// make object and set it in the array
				Rectangle temp_name("BLACK", ranNumsize, ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 3){
				// make object and set it in the array
				Rectangle temp_name("VIOLET",ranNumsize,ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 4){
				// make object and set it in the array
				Rectangle temp_name("BLUE",ranNumsize,ranNumsize);
				list[i] = &temp_name;
			}
		// for Squares
		}else if(whichType == 4){
			// depending on the random color
			if(ranNumColor == 1){
				// make object and set it in the array
				Square temp_name("RED", ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 2){
				// make object and set it in the array
				Square temp_name("BLACK", ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 3){
				// make object and set it in the array
				Square temp_name("VIOLET", ranNumsize);
				list[i] = &temp_name;
			}else if(ranNumColor == 4){
				// make object and set it in the array
				Square temp_name("BLUE", ranNumsize);
				list[i] = &temp_name;
			}
		}
	}
	
	// iterate through
	while (index < num_obj){
		(list[index])->getColor();		

		// get value of perimeter of object and equal to perimeter
		double perimeter = list[index]->calcPerimeter();
			
		double area = list[index++]->calcArea();// (8)
		
		// add area/perimeter to existing summed values
		sum_area += area;
		sum_perimeter +=perimeter;
	}

	// print out area
	cout << "\n\nThe total area is " << sum_area << " units ";
	
	// print out perimeter
	cout << "\nThe total perimeter is " << sum_perimeter << " units " << endl;

	return 0;
}

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
    CH-230-A
    a12 p6.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

 
const int num_obj = 7;
int main(){

	/*

		ASCII character diagram on relation to each other (prior to square)

		Area <--- Circle <--- ring
		^
		|
		+ <---- Rectangle


		ASCII character diagram on relation to each other (Post square)

		Area <--- Circle <--- ring
		^
		|
		+ <---- Rectangle <--- Square

	*/
	
	/*
		Creating a pointer array of size num_obj (6) Area objects. 
		Becomes 7 after square is added.
	*/
	Area *list[num_obj];						// (1)

	// initializing and setting index equal to 0 
	int index = 0;								// (2)

	// initializing & setting the sun of the areas to 0.0
	double sum_area = 0.0;						// (3)
	double sum_perimeter = 0.0;

	cout << "Creating Ring: ";

	/* 
		Creating an instance of Ring named blue_ring and setting the color to
		blue, the outer value to 5, and the inner value to 2. 
	*/
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square brown_square("Brown", 5.5);
	
	/* 
		Placing the blue ring object in step 4 into the first index of the
		list that was created in step 1. Note that the first index is 0
		and not 1.
	*/
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &brown_square;
	
	/* 
		The loop that allows us to cycle through the objects. Index starting
		at 0 and num_obj starting at 6. So while num_obj(6) is greater than 
		index(0) keep going. At this point it looks infinate, but the upcoming
		steps will clarify this.
	*/
	while (index < num_obj) {					// (7)
		(list[index])->getColor();		

		// get value of perimeter of object and equal to perimeter
		double perimeter = list[index]->calcPerimeter();
		/* 
			Here we are utilizing polymorphism. We are initializing and 
			setting area equal to the next list item and calling the method
			calcArea. This is utilizing polymorphism as they all have the same
			method name, calcArea, but their methods respectively calculate
			the area for their type of shape. 
			
		*/		
		double area = list[index++]->calcArea();// (8)
		
		// add area/perimeter to existing summed values
		sum_area += area;
		sum_perimeter +=perimeter;
	}
	// printing out the total area of all the shapes summed together
	cout << "\n\nThe total area is " << sum_area << " units ";	// (9)
	// print the summed perimeter between all objects
	cout << "\nThe total perimeter is " << sum_perimeter << " units " << endl;

	return 0;
}

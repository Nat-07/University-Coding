#include "Shapes.h"
#include <iostream>
using namespace std; 

/*
    CH-230-A
    a11 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(int argc, char** argv) {

  // given instances
  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();

  // self made instances
  Circle c2("second circle", 1, 1, 5.2);
  Rectangle r1("first rectangle", 2, 4, 5.2, 6.21);
  Square s1("first square", 2, 5, 3.5);

  cout << "\n";
  cout << "Perimeter of circle = " << c2.cirPerimeter() << endl;
  cout << "Area of circle = " << c2.cirArea() << "\n" << endl;

  
  cout << "Perimeter of rectangle = " << r1.recPerimeter() << endl;
  cout << "Area of rectangle = " << r1.recArea() << "\n" << endl;

  cout << "Perimeter of Square = " << s1.sqPerimeter() << endl;
  cout << "Area of Square = " << s1.sqArea() << "\n" << endl;

  return 0;
}

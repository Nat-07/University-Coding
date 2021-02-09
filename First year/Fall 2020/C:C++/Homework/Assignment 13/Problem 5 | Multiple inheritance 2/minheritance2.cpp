#include<iostream>
using namespace std;

/*
    CH-230-A
    a13 p5.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

/*
    When I compile the program I get returned:

    "error: implicit default constructor for 'D' must explicitly initialize 
    the base class 'A' which does not have a default constructor"

    This is due to D not having a default construcor. So what it would try to
    do is reach up the chain to A and get A's default constructor. But A
    does not have one so we would get an error being passed back.

    This can be fixed by one of two ways I know. One way is to give A a 
    default constructor, and the second is to give D a constructor just as
    B and C have. I have decided to go with the former. 

    Now when the program is run, no errors are returned. 
    
*/
 
class A{
  int x;
  
  public:
    // my added default constructor
    A(){
      x = 2;
    }

    A(int i){
      x = i;
    }

    void print(){ 
      cout << x; 
    }
};

class B: virtual public A{
  public:
    B():A(10){}
};
 
class C: virtual public A {
  public:
    C():A(10){}
};
 
class D: public B, public C{
    // second choice that could have been taken
    //public: 
    //D():A(10){}
};
 
int main(){
    D d;
    d.print();
    return 0;
}

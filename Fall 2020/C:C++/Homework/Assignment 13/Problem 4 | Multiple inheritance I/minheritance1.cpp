#include<iostream>
using namespace std;

/*
    CH-230-A
    a13 p4.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/
 
class A{
  int x;

  public:
    void setX(int i){
      x = i;
    }

    void print(){
      cout << x; 
    }
};

class B: virtual public A{
  public:
    B()  { setX(10); }
};
 
class C: virtual public A{
  public:
    C()  { setX(20); }
};

/*
  Error given when run with no modifications: 
  "non-static member 'print' found in multiple base-class subobjects of 
  type 'A':"

  This is due to running into the diamond problem:

                  A
                ^   ^
                |   |
                B   C
                ^   ^
                |   | 
                |   |
                +-D-+

  We are trying to inherit from both B and C. Both B and C have the method
  print, and we are telling A to inherit from both of them. So we run into
  a problem of which method print does D use. They are at conflicting each
  eachother.

  To fix this, we either need to use virtual inheritance or only inherit
  from D,C or A. I have taken the liberty of making class B and C derived 
  from a virtual public A. Once doing so, the program runs with no
  hinderance. 
*/

class D: public B, public C {};
 
int main(){
    D d;
    d.print();
    return 0;
}

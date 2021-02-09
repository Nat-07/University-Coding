#include <iostream>
#include "LinkedList.h"
using namespace std;

/*
    CH-231-A
    aA1 p3.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

int main(){

    /* creating the head node and setting the value to -1. Notice how second
    peramiter is true, this is to tell program we are working with a dummy
    head */
    Node<int> *head = new Node<int>(-1, true);
    
    // -----------------------------------------------------------------
    // Adding elements to front
    cout << "\n_______________________________________________" << endl;
    cout << "Adding elements to front" << endl;
    for (int i = 0; i < 5; i++){
        // need to set equal to head as new node is returned as new head
        head = head->newElemFront(head, i*i);
    }

    // print list
    head->printList(head);

    // get number of current elements, first, and last
    cout << "Number of elements: " << head->numElem(head) << endl;
    cout << "First Node: " << head->getFirst(head) << endl;
    cout << "Last Node: " << head->getLast(head) << endl;
    
    // -----------------------------------------------------------------
    // Adding elements to back
    cout << "\n_______________________________________________" << endl;
    cout << "Adding elements to back" << endl;
    for (int j = 0; j < 4; j++){
        // don't need to set equal to head as head node is still head
        head->newElemEnd(head, j*j);
    }

    // print list
    head->printList(head);

    // get number of current elements, first, and last
    cout << "Number of elements: " << head->numElem(head) << endl;
    cout << "First Node: " << head->getFirst(head) << endl;
    cout << "Last Node: " << head->getLast(head) << endl;
    
    
    // -----------------------------------------------------------------
    // Adding elements to front
    cout << "\n_______________________________________________" << endl;
    cout << "Adding elements to front" << endl;
    for (int k = 0; k < 3; k++){
        head = head->newElemFront(head, k*k);
    }
    // print list
    head->printList(head);  

    // get number of current elements, first, and last
    cout << "Number of elements: " << head->numElem(head) << endl;  
    cout << "First Node: " << head->getFirst(head) << endl;
    cout << "Last Node: " << head->getLast(head) << endl;

    // -----------------------------------------------------------------
    // pop element from front and end
    // values being passed by reference
    
    cout << "\n_______________________________________________" << endl;
    cout << "Popping elements from front and back\n" << endl;
    // value for returning by reference as unable to use dataType in main
    int return1;

    // popping the first element and returning head
    head = head->popFirst(head, return1);

    // printing from reference and printing the return of popLast
    cout << "Pop front value: " << return1 << endl;
    cout << "Pop back value: " << head->popLast(head) << "\n" << endl;

    // print list
    head->printList(head);

    // get number of current elements
    cout << "Number of elements: " << head->numElem(head) << endl;  
    cout << "First Node: " << head->getFirst(head) << endl;
    cout << "Last Node: " << head->getLast(head) << endl;
    
    return 0;
}

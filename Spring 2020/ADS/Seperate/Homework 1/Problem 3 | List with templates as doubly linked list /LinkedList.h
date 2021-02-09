/*
    CH-231-A
    aA1 p3.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

template <class dataType>
class Node{

    private:
        // movement through list
        Node* next;
        Node* prev;
        // data in list (dynamically can be any such data types)
        dataType data;
        // used to deal with dummy head
        bool isHead;
        
    public:
        // constructor & destructor
        Node(dataType newData, bool isNewHead);
        ~Node();

        // get first & last
        dataType getFirst(Node* head);
        dataType getLast(Node* head);

        // pop elements
        Node* popFirst(Node* head, int& out);
        dataType popLast(Node* head);

        // new element
        Node* newElemFront(Node* head, dataType newElem);
        void newElemEnd(Node* head, dataType newElem);

        // number of elements
        int numElem(Node* head);

        // print data in list to show
        void printList(Node* head);

};

// constructor
template<class dataType>
Node<dataType> :: Node(dataType newData, bool newIsHead){
    data = newData;
    isHead = newIsHead;
}

// deconstructor
template<class dataType>
Node<dataType> :: ~Node(){
    // delete the whole current object (this)
    delete this;
}

// add element at the front
template<class dataType>
Node<dataType>* Node<dataType> :: newElemFront(Node* head, dataType newData){

    // new instance of LinkedList and using the default constructor
    Node* newNode = new Node(newData, false);

    // moving where pointers point
    head -> prev = newNode;
    newNode -> next = head;

    // return new head
    return newNode;
}

// add element at the end
template<class dataType> 
void Node<dataType> :: newElemEnd(Node* head, dataType newData){

    // new instance of LinkedList and using the default constructor
    Node* newNode = new Node(newData, false);

    // cycle forwards
    while(head->next != NULL){
        head = head->next; 
    }

    // insertting new element at end
    head -> next = newNode;
    newNode -> prev = head;

}

// return head's info
template<class dataType>
dataType Node<dataType> :: getFirst(Node* head){
    return head->data;
}

template<class dataType>
dataType Node<dataType> :: getLast(Node* head){

    // cycle forwards
    while(head->next != NULL){
        head = head->next;
    }

    // if last node is dummy head then move back one
    if(head->isHead == true){
        head = head->prev;
    }

    // temp data and set to equal to end 
    dataType lastNode = head->data;

    // return node's data
    return lastNode;
}

template<class dataType>
int Node<dataType> :: numElem(Node* head){

    // starting at 1 as we start with an element in the list
    int counter = 1;

    // cycle forwards
    while(head->next != NULL){
        head = head->next;
        // add one every node
        if(head->isHead == false){
            counter++;
        }        
    }

    // return number of nodes
    return counter;
}

template<class dataType>
void Node<dataType> :: printList(Node* head){

    // boolean to control if first element was head
    bool wasHead = false;

    // if head is not the dummy head, print
    if(head->isHead == false){
        // print first nodes data 
        std::cout << head->data;
    }else{
        // if not then set to true
        wasHead = true;
    }
    
    // cycle through if next is not NULL
    while(head->next != NULL){
        // move to next
        head = head->next;

        // if current is not head and past was, no arrow
        if(head->isHead == false && wasHead == true){
            std::cout << head->data;
        
        /* else if the past head was not the dummy head and current is not 
        print the arrow */
        }else if(head->isHead == false){
            std::cout << " -> " << head->data;
        }
        // if the first was the dummy head and is head we don't do anything

        // set to false as default to not mess up next iterations
        wasHead = false;
    }

    // formatting
    std::cout << "\n" << std::endl;
}

template<class dataType>
Node<dataType>* Node<dataType> :: popFirst(Node* head, int& out){

    // if our head is not first then trivial remove and return
    if(head->isHead == false){
        // getting data before "removing it"
        out = head->data;

        // make head next and return new head
        head = head->next;

        return head;
        
    }else{
        // if our head is first, then move one past dummy head
        head = head->next;

        // getting data before "removing it"
        out = head->data;

        /* make head next and return new head. Thus skipping 2 nodes as one
        was effectively our dummy head*/
        head = head->next;

        return head;
    }   
}

template<class dataType>
dataType Node<dataType> :: popLast(Node* head){
    
    // cycle through list
    while(head->next != NULL){
        head = head->next;
    }

    // check if head is the dummy head
    if (head->isHead == false){
        
        // getting data before "removing it"
        dataType out = head->data;

        // move back one
        head = head->prev;
        
        // set next equal to NULL
        head->next = NULL;

        return out;
    // if dummy head
    }else{
        // move one back to get out of the dummy head
        head = head->prev;

        // getting data before "removing it"
        dataType out = head->data;

        // move back one
        head = head->prev;
        
        // set next equal to NULL
        head->next = NULL;

        // return info
        return out;

    }
}

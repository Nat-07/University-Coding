/*
    CH-231-A
    aA1 p2.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

template <class dataType, int initialSize = 10>
class stack{
    private:
        dataType *ptr; // a pointer to the unknown dataType
        int size; // size of the stack
        int where; // the last non free position
        

    public:
        // default constructor
        stack();
        // copy constructor
        stack(const stack &obj);
        // parametric constructor
        stack(int newSize);
        // destructor
        ~stack();

        // push to add element to top of stack
        bool push(dataType element);
        // pop element from the top of stack
        bool pop(dataType& out);
        // to get data from top of stack
        dataType back(void);
        // get number of items in stack
        int getNumEntries();
};

// copy constructor
template<class dataType, int initialSize>
stack <dataType, initialSize> :: stack(const stack &obj){
    // copy data over
    size = obj.size;
    // pointer points to array of type dataType + default size * type of data
    ptr = new dataType[size*sizeof(dataType)];
    where = obj.where;
    /* copy memory from obj.ptr to ptr + set size to num of elements times 
    size of those elements's data type */
    memcpy(ptr, obj.ptr, (size) * sizeof(dataType));
    
}
// default constructor
template<class dataType, int initialSize>
stack <dataType, initialSize> :: stack(){
    // pointer points to array of type dataType + default size * type of data
    ptr = new dataType[(initialSize)*sizeof(dataType)];
    size = initialSize;
    where = -1;
}

// parametric constructor
template<class dataType, int initialSize>
stack <dataType, initialSize> :: stack(int newSize){
    where = -1;
    size = newSize;
    // size is dependent on the size passed in, not default initialSize
    ptr = new dataType[(size)*sizeof(dataType)];
}

// destructor
template<class dataType, int initialSize>
stack <dataType, initialSize> :: ~stack(){
    // dealocate the memory of the pointer (array)
    delete[] ptr;
}

// add element
template<class dataType, int initialSize>
bool stack <dataType, initialSize> :: push(dataType element){
    // check if index after where exists by checking size
    if(where+2 > size){
        // if not big enough, return false
        return false;
    }else{
        // add one to where
        where++;
        // give the pointer at new where the value of passed dataType element
        ptr[where] = element;
        return true;
    }
}

// remove element
template<class dataType, int initialSize>
bool stack<dataType, initialSize> :: pop(dataType& out){
    // can't pop when no elements in array
    if(where == -1){
        return false;
    }else{
        /* as we want to return what was popped, set out to the location of 
        the pointer at location where */ 
        out = ptr[where];
        // the last filled location is now back one
        where--;
        // succeeded, return true
        return true;
    }  
}


// get element back
template <class dataType, int initialSize>
dataType stack <dataType, initialSize> :: back(void){
    // return data at ptr location where
    return ptr[where];
}


// number of entries
template <class dataType, int initialSize>
int stack <dataType, initialSize> :: getNumEntries(){
    // as where also has 0 and humans count starting with 1
    return (where+1);
}

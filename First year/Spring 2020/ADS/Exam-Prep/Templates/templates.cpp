#include <iostream>
using namespace std;

// template class with unknown data type being "dataType"
template <class dataType>
class dataHolder{
    private:
        dataType data;

    public:
        void setData(dataType newData);
        dataType getVal();
};

// template method that sets data
template <class dataType>
void dataHolder<dataType> :: setData(dataType newData){
    data = newData;
}

// template method that returns data
template<class dataType>
dataType dataHolder<dataType> :: getVal(){
    return this->data;
}

// template function
template <class data>
void printer(data someData){
    cout << someData << endl;
}

int main(){
    // creation of two instances of class with different data types
    dataHolder <string>stringTest;
    dataHolder <int>intTest;

    // set data for both
    stringTest.setData("This is some data");
    intTest.setData(5);

    // print data for both
    printer(stringTest.getVal());    
    printer(intTest.getVal());

    return 0;
}
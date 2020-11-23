/*
    CH-230-A
    a11 p6.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

#ifndef __VECTOR_H
#define __VECTOR_H

class Vector{
    private:
        int size;
        double *ptr_Vector;

    public:
        // default constructor
        Vector();
        // deconstructor
        ~Vector();
        // param constructor
        Vector(int newSize, double *ptrNew);
        // copy constructor
        Vector(const Vector&);
        void print() const;

        // getters
        double getPointer() const;
        double getSize() const;
        double getValue(int index) const;

        // setters
        void setPointer(double *ptr);
        void setSize(double newSize);

        // different methods for operation being done 
        double norm();
        Vector add(const Vector);
        Vector sub(const Vector); 
        Vector scaler(const Vector); 

};

#endif

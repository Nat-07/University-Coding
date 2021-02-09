using namespace std;

/*
    CH-230-A
    a11 p1.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

// box class
class Box{

    // values in private
    private:
        double height;
        double width;
        double depth;

    public:
        // default construct
        Box();
        // constructor
        Box(double heightParam, double widthParam, double depthParam);
        // copy construct
        Box(const Box &instance);
        // destructor
        ~Box();

        // setters
        void setHeight(double newHeight);
        void setWidth(double newWidth);
        void setDepth(double newDepth);
        
        // getters
        double getHeight(); 
        double getWidth();
        double getDepth();

};

#ifndef _AREA_H
#define _AREA_H

/*
    CH-230-A
    a12 p6.[h]
    Justin Morris
    j.morris@jacobs-university.de
*/

// area class with data and methods
class Area {
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};
#endif

#ifndef _FIGURES_H
#define _FIGURES_H

class Point2D {
	double X, Y;
public:
	void Set(double Xo, double Yo);
	void Move(double dX, double dY);
	void Scale(double sX, double sY);
}; //end declaration of the Point2D class

class Circle {
	Point2D Center;
	double Radius;
public:
	void Set(double Xo, double Yo, double r);
	void Move(double dX, double dY);
	double Area();
	double Perimeter();
}; //end declaration of the Circle class

#endif

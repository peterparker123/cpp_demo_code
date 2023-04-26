#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle :public Shape
{
public:

	Circle(double, double); // constructor for the circle class
	void draw(); // In side the circle, we have provided our own mechanism of the draw() function
	double  getCircle() const;
	void getShapes();

private:
	double x;
	double y;
	double radius;
};
#endif // !CIRCLE_H

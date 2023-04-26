#include <iostream>
#include <math.h>
#include "Shape.h"
#include "Circle.h"

using namespace std;

Circle::Circle(double x, double y) : x(x), y(y)
{
	
}; // initialize the constructor

void Circle::getShapes()
{
	cout<<"Circle Shape "<<endl;
}

void Circle::draw()
{
	radius = sqrtf(x * x + y * y);
}

double Circle::getCircle() const
{
	return radius;
}



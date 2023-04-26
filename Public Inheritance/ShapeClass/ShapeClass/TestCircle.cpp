#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main()
{
	// initialize the Circle object

	// Create the base class shape pointer
	Shape* shapePtr = nullptr;
	Circle circle1(6, 8); // circle is derived class of shape
	shapePtr = &circle1;
	shapePtr->getShapes();
	// using the shape class pointer, call the draw function
	shapePtr->draw(); // draws the circle


	// get the circle
	cout << "A circle with radius " << circle1.getCircle() << " has been drawn " << endl;

	Circle circle2(7, 10);

	circle2.draw(); // draws the circle

	// get the circle
	cout << "A circle with radius " << circle2.getCircle() << " has been drawn " << endl;

	// Create a Square class object, and assign the shape pointer to this object
	Square square(10);

	square.draw(); // this will be called at compile time, because we are using objects
	shapePtr = &square; // this should call the draw method of square
	shapePtr->getShapes();
	shapePtr->draw();
	cout << "A circle with side " << square.getSquare() << " has been drawn " << endl;


	return 0;
}
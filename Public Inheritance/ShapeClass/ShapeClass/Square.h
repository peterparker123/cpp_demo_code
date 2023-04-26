#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include "Square.h"

class Square :public Shape
{
public:

	Square(int); // constructor for the circle class
	void draw(); // In side the circle, we have provided our own mechanism of the draw() function
	int  getSquare() const;
	void getShapes();

private:
	int x;
	int square;
};
#endif // !CIRCLE_H
#include <iostream>
#include <math.h>
#include "Shape.h"
#include "Square.h"

using namespace std;

Square::Square(int a) : x(a)
{

}; // initialize the constructor

void Square::getShapes()
{
	cout << "Square Shape"<<endl;
}
void Square::draw()
{
	square = 4 * x;
}

int Square::getSquare() const
{
	return square;
}



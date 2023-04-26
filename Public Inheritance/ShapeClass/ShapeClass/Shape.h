#ifndef  SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;
// Shape function is an abstract base class
// because, it does not have any implementation

class  Shape
{
public:

	// draw() is a pure virtual function
	// This would not be implemented inside the base class
	// however, derived class must provide the implementaion
	virtual void draw() = 0;
	virtual void getShapes() = 0;

	
};
#endif // ! SHAPE_H



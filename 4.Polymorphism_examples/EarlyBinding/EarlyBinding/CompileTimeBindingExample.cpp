// Compile Time binding or early binding example
#include <iostream>
using namespace std;

class A
{
public:
	// this print function would also be used in the inherited class
	void print()
	{
		cout << "Printed from A "<<this<<endl;
	}
};


// do a public inheritance
// the same print() function is also inherited by the class B
class B :public A
{
public:
	void print()
	{
		cout << "Print from B " << this<<endl;
	}
};

int main()
{
	// Create an object of class A
	A a;
	// Create an aPtr
	// In this scenario, the function call is getting bounded
	// during the compile time.
	// When the object is created, and the function is called
	// the compiler already knows that this object is associated with
	// the particular function with which it is being called.
	A* aPtr = nullptr;
	aPtr = &a;

	// a.print();
	aPtr->print();

	// Create an object of class B
	B b;
	// create pointer for B's object
	B* bPtr = nullptr;
	bPtr = &b;

	// b.print()
	bPtr->print();

	// We know that we can aim the base class pointer to a 
	// derived class object

	aPtr = &b;
	// Let's us try calling the print() method
	// The compiler would still invoke the base class print() method
	// and not the derived class print method

	// A derived class object is also a base class object
	// the type of the object is getting determined during the compile time
	// therefore, the print() method of the base class would get invoked
	aPtr->print();

}
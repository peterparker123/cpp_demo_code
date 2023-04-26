// Dynamic  binding or late binding example
#include <iostream>
using namespace std;

class A
{
public:

	// In order to perform the dynamic binding
	// we need to add the virtual keyword in the
	// base class

	virtual void print()
	{
		cout << "Printed from A " << endl;
	}

	void print_early()
	{
		cout << "Printed from A " << endl;
	}
};


// do a public inheritance
// the same print() function is also inherited by the class B
class B :public A
{
public:
	void print()
	{
		cout << "Print from B " << endl;
	}

	void print_early()
	{
		cout << "Printed from B " << endl;
	}
};


class C :public B
{
public:
	void print()
	{
		cout << "Print from C " << endl;
	}

	void print_early()
	{
		cout << "Printed from C" << endl;
	}
};

int main()
{
	// Create an object of class A
	A a;

	A* aPtr = nullptr;
	aPtr = &a;
	aPtr->print();
	aPtr->print_early();

	
	// Create an object of class B
	// B is derived class
	B b;
	// create pointer for B's object
	B* bPtr = nullptr;
	bPtr = &b;
	bPtr->print();
	bPtr->print_early();


	// We know that we can aim the base class pointer to a 
	// derived class object

	aPtr = &b;
	

	
	aPtr->print(); // has the virtual keyword
	aPtr->print_early();  // does not have the virtual keyword

	//create an object for Class C, derived from class B
	C c;
	// Create pointer for class c


	// aim the base class B's poitner to the derived class C's object
	bPtr = &c;
	bPtr->print();
	bPtr->print_early();

}
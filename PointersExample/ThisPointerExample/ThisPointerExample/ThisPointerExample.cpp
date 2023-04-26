// this pointer is a pointer accessible only within the nonstatic member functions of a class, struct, or union type.
// It points to the object for which the member function is called. 
// Static member functions don't have a this pointer.
// Static member functions are those functions, which are shared across all the instances of the class
// Syntax for this pointer
// We can use the keyword this
//  or this->member - identifier

// Simple example of this pointer



#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
	// The function is non static member, and therefore, it's 
	// address is accessible, using this pointer.
	void printThis() const; // The function will not be used as a modifier
};


// The function does not have any return type
// But, we will print the object's memory address , by using the this keyword
void MyClass::printThis() const
{
	cout<<this<<endl; // by using this keyword, we are 
}

int main()
{
	// Insantiante the class MyClass
	MyClass class1;

	// print out the address of the class1()
	cout << &class1<<endl;

	// call the function printThis, which would return the address of the object class1
	// However, in this case, the object's memory would be accessed by using this keyword
	class1.printThis();

	return 0;
}
#include <iostream>
using namespace std;

class MyClass
{
public:

	void printThis(); // function to print the address of the current object of the class
};


void MyClass::printThis()
{
	cout << this << endl;
}

int main()
{
	// create the instance of the class
	MyClass myClass1;

	// to print the address of the object, we generally use & operator
	// which is the reference to the object of the class

	cout << "The address of the object myClass1 is ->" << & myClass1 << endl;

	// print the memory address of the object, by calling the function
	// in which, we have only declared the this keyword
	cout << "Memory Address printed by this keyword-> ";
	myClass1.printThis();


}
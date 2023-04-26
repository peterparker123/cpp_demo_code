#include <iostream>
using namespace std;


class Person
{
public:

	// This is a pointer to the person's object

	Person* getAddress();
};


Person* Person::getAddress()
{
	return this;
}

int main()
{
	// this key word, just points to the current instance of the object of the class
	Person bob;

	// in order to access the memory address of the object, we have to use the & operator
	cout << "Called from the class-> " << &bob << endl;

	// Called from the function
	cout << "Called from the function of the class-> " << bob.getAddress() << endl;

	Person john;
	cout << john.getAddress() << endl;
	
}
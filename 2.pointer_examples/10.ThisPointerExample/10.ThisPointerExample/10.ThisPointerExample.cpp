// In C++, a special keyword exists
// which is known as "this"
// this is just a pointer to a current instance

// In our demo, we will use class Person, and will try to print out the memory address
// of the different objects of person, using this

#include <iostream>
using namespace std;

class Person
{

public:
	Person *getAddress();
};


// this keyword returns the address of the object, to which it is pointing
// it points to the current instance of the object of a class

Person * Person::getAddress()
{
	return this;
}

int main()
{
	Person bob;
	cout << "Called from main ->" << &bob<<endl;

	cout << "Called from getAddress -> " << bob.getAddress() << endl;

	Person john;
	cout << "Called from main ->" << &john << endl;

	cout << "Called from getAddress -> " << john.getAddress() << endl;
}
#include <iostream>
using namespace std;


class Person
{
	// create a simple method, which is to getAdress of the Person class's object
	// This is a method, whose return type is Person, which is the instance or object of the class
public:

	// This functions return type is poitner itself, which is the memory address
	// of the instance of the object
	// this is the special keyword, which points to the CURRENT INSTANCE OF THE OBJECT
	Person *getAddress();
};

// By using this keyword, we are making sure that the current instance points
// to the memory address of the object of the Person classs
Person  *Person::getAddress()
{
	return this;
}

int main()
{
	// create an instance of the Person class
	Person bob;
	cout << bob.getAddress();
	
}
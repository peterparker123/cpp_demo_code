// Program to demonstrate how can we use pointer to access member of class
// We will create a simple class named Person, and set the name using setName function
// The setName member function of class Person will be accessed using pointer

#include <iostream>
using namespace std;

class Person
{
	// Access specifier: Data variable
private:

	string name;

public:
	// Default Constructor
	// No argument constructor
	Person();
	void setName(string); // This function has no return type
	string getName(); 
};

// Call the constructor
Person::Person() {};

// Call the setName function
void Person::setName(string userName)
{
	name = userName;
}

// get the name
string Person::getName()
{
	return name;
}

int main()
{
	// Create instance of class Person
	// The actual person object
	Person person1;

	// Create a reference to Person
	Person &personRef = person1;

	// Create a pointer to person
	Person* personPtr = &person1;

	// Call the actual object
	person1.setName("I am the actual object");
	cout << person1.getName() << endl;

	// Call the referenced object
	// For this, we use the . object
	personRef.setName(" I am referred object ");
	cout << personRef.getName() << endl;


	// Call the pointer object
	// We use -> to access the members when using pointers
	personPtr->setName(" I am pointed object ");
	cout << personPtr->getName() << endl;;

}
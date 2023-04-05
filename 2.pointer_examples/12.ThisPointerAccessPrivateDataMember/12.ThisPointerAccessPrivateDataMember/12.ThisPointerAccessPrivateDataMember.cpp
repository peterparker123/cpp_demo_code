// this pointer can be used to access the private data member of a class


#include <iostream>
using namespace std;

class Person
{
	// We will access the name using this
	// this name would be set in the object, by passing in the parametrized constructor
private:
	string name;

public:
	Person(string );
	void printName();
};

Person::Person(string name):name(name) 
{
}; // Intialize name to value


void Person::printName()
{
	// Access the name by calling printName, without using this
	cout<<"name = " <<name <<endl;
	// Access the name by using this
	cout << " this->name =" << this->name << endl;

	// Another method is to dereference the pointer
	// in this case, we have to use the . operator
	cout << " (*this).name = " << (*this).name << endl;



}

int main()
{
	Person bob("Bob");
	bob.printName();
	
}
// this pointer can be used to access the private data member of the class

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;

public:
	Person(string); // constructor, to initialize the variable

	// this is a void function, and does not return anything
	void PrintName();
};

// constructor mechanism, to create the name variable
// as input for this program
Person ::Person(string name) : name(name)
{};

void Person::PrintName()
{
	// within the class, we can access the private data member of the class itself
	// Access the private data member, name in this case, without using the this keyword
	cout << "name " << name << endl;


	// Another way is to access the data member, by using the this keyword
	// this is a pointer itself, which stores the memory address of the
	// current instance 
	cout << " this->name " << this->name << endl;

	// Another mechanism is to deference the this pointer.
	// By deferenecing, we are not working with the memory address, but 
	// wd
	// in this case, we need to use the . operator
	cout <<"(*this).name "<< (*this).name << endl;
}

int main()
{
	Person bob("Bob");
	bob.PrintName();

	Person john("John");
	john.PrintName();
}

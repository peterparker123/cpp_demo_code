// Class person to set and get the names

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	
	void setName(const string &);
	string getName() const;

	void printThis();

private:
	string name;
};

// this keyword is used to resolve the namespace collision
// here, the argument of the function is name, and the data member inside the function
// is also name. By using this keyword, we are telling the compiler, which name data member
// belongs to which.
void Person::setName(const string& myname)
{
	// this->name is the name member of the class, which is a private data member
	// this is called when the object of the function has to access the data member
	this->name = name;
}

void Person::printThis()
{
	cout << this << endl;
}


// Return the name
string Person::getName() const
{
	return name;
}

int main()
{
	// Create the object of the class Person
	Person bob;

	// this is an implicit hidden argument, which is passed
	// every time, the object of a class, calls it's members, such as function.

	bob.setName("Bob");

	Person john;
	john.setName("John");
	
}
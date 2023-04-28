// this keyword can also be used to access the data member of a class
// which are private 

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(const string name);
	void printName();

private:
	string name;
};

Person::Person(const string name)
{
	this->name = name;
}

void Person::printName()
{
	// Access the name data member, without using this
	cout << "name " << name << endl;

	// Access the name data member, by using this, but without pointer
	// and the reference
	cout << "this.name " << this->name << endl;

	// Access the name data member, by using this, but with the pointer
	cout << "(*this).name " << (*this).name << endl;
}

int main()
{
	Person bob("Bob");
	bob.printName();
}
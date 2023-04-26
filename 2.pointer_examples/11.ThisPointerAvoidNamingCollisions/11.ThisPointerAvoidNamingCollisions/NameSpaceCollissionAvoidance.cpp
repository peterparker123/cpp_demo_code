#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name; // this is the variable of the name inside the class definition, and is private

public:
	void setName(string);
	string getName();
};

// Try to set the name, by using the variables, name, both on the left hand side
// and the right hand side of the assignment

// in this scenario, the compiler is confused, because it is not able to explicitly
// define, which name variable to be used.

// the name variable is present as private data member of the class, and also
// in the argument of the function of the class.

// To avoid such namespace collisions, this keyword comes into the picture
// by using this keyword, we can ensure that variables, which have same names
// they have avoidance of the namespace collision

// this is a pointer, and therefore, all we need to do is to use the pointer mechanism
// to access the variable 
void Person::setName(string name)
{
	// name = name;
	this->name = name;
}

string Person::getName()
{
	return name;
}



int main()
{
	Person bob;
	bob.setName("Bob");
	cout<<"' "<<bob.getName()<<" '" << endl;
}
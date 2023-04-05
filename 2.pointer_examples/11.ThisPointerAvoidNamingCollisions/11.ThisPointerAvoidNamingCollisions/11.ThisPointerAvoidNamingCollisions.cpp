// An use case of explicitly using "this" pointer is to avoid naming collisions.
// By using this parameter, we can access data member of a class in a function, whose argument
// is similar to the data member


#include <iostream>
using namespace std;

class Person
{
private:
	string name;
public:
	void setName(string name);
	void setNameThis(string name);
	string getName();
};

// this method will not work, as compiler sees a naming conflict

void Person::setName(string name)
{
	name = name;
}
// By using this keyword, we have resolved the issue for compiler
// compiler knows, which name is for what

void Person::setNameThis(string name)
{

	this->name = name;
}

// to retreive
string Person::getName()
{
	return name;
}


int main()
{
	Person bob;

	// method which does not have this pointer
	bob.setName("Bob");
	cout<<" Without using the this pointer " << "'"<< bob.getName() << " ' ";
	cout << endl;

	// method which contains this pointer
	bob.setNameThis("Bob");
	cout << " By using the this pointer ->  " << bob.getName() << " ' ";

}
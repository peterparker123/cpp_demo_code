// A very common use case of this pointer is for cascading  the member function call
// This involves invoking multiple functions in the same statement

#include <iostream>
using namespace std;

class Person
{
private:
	string FirstName;
	string MiddleName;
	string LastName;

public:
	// Person(string FirstName, string MiddleName, string LastName);
	Person& setfullname(string, string, string);
	Person& setfirstname(string);
	Person& setmiddlename(string);
	Person& setlastname(string);

	// get functions
	string getFirstName() ; // return first name
	string getMiddleName() ; //return middle name
	string getLastName() ;  // return last name

	//print function
	void printFullName();
};

/* Person::Person(string FirstName, string MiddleName, string LastName)
{
	setfullname(FirstName, MiddleName, LastName);
} */

Person& Person::setfullname(string first, string mid, string last)
{
	setfirstname(first);
	setmiddlename(mid);
	setlastname(last);
}

Person& Person::setfirstname(string FirstName)
{
	this->FirstName = FirstName;
	return *this;
}

Person& Person::setmiddlename(string MiddleName)
{
	this->MiddleName = MiddleName;
	return *this;
}

Person& Person::setlastname(string LastName)
{
	this->LastName = LastName;
	return *this;
}

string Person::getFirstName()
{
	return FirstName;
}

string Person::getMiddleName()
{
	return MiddleName;
}

string Person::getLastName()
{
	return LastName;
}

void Person::printFullName()
{
	cout << FirstName << ","<< MiddleName << "," << LastName << endl;
}
int main()
{
	Person person1;
	person1.setfirstname("Radhakrishna").setmiddlename("Rao").setlastname("Lambu");
	cout << "My full name is: ";
	person1.printFullName();
	return 0;

}



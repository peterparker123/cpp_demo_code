#include <iostream>
using namespace std;

// create a new class called Person
class Person
{
	// Private data members
private:
	string name;
	int age;

	// public functions
public:

	void setName(string);
	void setAge(int);

	// We need to add a function to get name and age of Person
	// As the data members are not availabe public
	// Notice that these two functions have return types
	string getName();
	int getAge();
};


// define the setName() function in the Person class
void Person::setName(string userName)
{
	// set the name variable in the Person class to the given argument userName
	name = userName;
}

// define the setAge() function in the Person class
void Person::setAge(int userAge)
{
	// set the age variable in the Person class to the given argument userAge
	age = userAge;
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

int main(void)
{
	// create a new person named bob
	Person bob;

	// define bob
	bob.setName("Bob");
	bob.setAge(27);
	
	cout << bob.getName() << " is " << bob.getAge() << " years old." << endl;

	// Create another person object named John
	
}
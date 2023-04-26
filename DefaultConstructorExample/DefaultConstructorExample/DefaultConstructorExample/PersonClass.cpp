// define a default constructor

#include <iostream>
#include <string>
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

	// Constructor
	// Exactly as the same name as the class, but don't have return values
	// Normally are declared public
	// constructor are used to initialized an object of class, when the object is created
	Person();
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
	Person person1;

	//  person1 will have default values
	cout << " ' " << person1.getName() << " ' " << " is " << person1.getAge() << " years old." << endl;

	Person person2;

	// We will set age for person2, but name will be smith
	person2.setName("John Constantine");
	person2.setAge(40);
	cout << person2.getName() << " is " << person2.getAge() << " year old. " << endl;

	// Create another person object named John

}
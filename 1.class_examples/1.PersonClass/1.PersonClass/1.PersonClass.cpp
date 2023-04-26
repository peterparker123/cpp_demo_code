#include <iostream>
using namespace std;

// create a new class called Person
class Person
{
	// public variables and functions
public:
	
	string name;
	int age;

	void setName(string);
	void setAge(int);
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

int main(void)
{
	// create a new person named bob
	Person bob;

	// define bob
	bob.setName("Bob");
	bob.setName("Robert");
	bob.setAge(27);
	cout << "Bob's age before modification:" << bob.age << endl;
	bob.age = 25;

	// display bob's age
	cout << "Bob's age has been modified to : " << bob.age << endl;
	cout << bob.name << " is " << bob.age << " years old." << endl;

	// Create another person object named John
	Person john;
	//Define John
	john.setName("John");
	john.setAge(40);

	// display john's age
	cout << john.name << " is " << john.age << " yeard old. " << endl;
}
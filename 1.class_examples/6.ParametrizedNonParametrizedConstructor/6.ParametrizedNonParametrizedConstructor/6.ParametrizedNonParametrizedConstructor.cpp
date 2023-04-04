// We can also create a parametrized and default constructor

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

	// default constructor
	Person();

	// Constructor that takes one or more argument are known as parametrized constructor
	// In this case, the arguments passed inside the object would be the values for the data members 
	Person(int age, string name);

	// As we are passing the values of arguments inside the object, we don't need
	// setter method. However, if we have a default constructor, then we would require
	// these methods
	// void setName(string);
	// void setAge(int);


	// We need to add a function to get name and age of Person
	// As the data members are not availabe public
	// Notice that these two functions have return types
	string getName();
	int getAge();
};

// Call the default constructor
Person::Person()
{
	name = "John";
	age = 26;
}
// Call the constructor method
// Here, the constructor will have the values, which will be created for the object
Person::Person(int userAge, string userName)
{
	// Default values for the person object, if not values are initialized
	age = userAge;

	// If name is not iniialized with default value, it will be blank
	name = userName;

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
	// Because we are using parametrized constructor, we need to pass the argument
	// as we have not defined a default constructor - Constructor which takes no argument
	// Compiler will not issue a default constructor in this scenario, as it's not explicitly defined.
	Person person1(25, "Bob");

	cout << " ' " << person1.getName() << " ' " << " is " << person1.getAge() << " years old." << endl;

	Person person2(40, "Smith");
	cout << " ' " << person2.getName() << " ' " << " is " << person2.getAge() << " years old." << endl;

	// person3 object would work with default constructor
	Person person3;
	cout << " ' " << person3.getName() << " ' " << " is " << person3.getAge() << " years old." << endl;

	
}
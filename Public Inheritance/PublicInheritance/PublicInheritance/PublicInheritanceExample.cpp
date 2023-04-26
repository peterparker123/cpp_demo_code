// Example to show a public inheritance
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName() const
	{
		return name;
	}

private:
	string name;
};

// We will create another class Student, which inherits 
// from the person. Student is a specific class of a person
class Student :public Person
{
 // Student has all the member functions of the Person class
};

int main()
{
	Person person1;
	person1.setName("John");
	cout << person1.getName() << endl;

	// Create the instance of student
	Student student1;
	student1.setName("Bob");
	cout << student1.getName() << endl;

	

	return 0;
}
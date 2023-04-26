#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	// Create an instance of Employee class
	// This is creation of an instance of class
	Employee employee;
	
	// Create a reference to the Employee class
	//
	Employee &employeeRef = employee;

	// By using . operator, we access the members of class
	// using the reference of the class

	employeeRef.setName("John");
	cout<<employeeRef.getName()<<endl;

	// By creating pointer, we use the arrow method
	// to access the member of the class
	Employee* employeePtr = &employee;

	employeePtr->setName("Robert");
	cout << employeePtr->getName() << endl;
	
}
#ifndef Employee_H
#define Employee_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string firstName;
	int age;
	string designation;


public:
	

	void setName(string);
	void setAge(int);
	void setDesignation(string);

	string getName();
	int getAge();
	string getDesignation();
};

#endif // !Employee.h


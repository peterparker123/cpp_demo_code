#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;


void Employee::setName(string first_name)
{
	firstName = first_name;
}

void Employee::setAge(int number)
{
	age = number;
}

void Employee::setDesignation(string profile)
{
	designation = profile;
}

string Employee::getName()
{
	return firstName;
}

int Employee::getAge()
{
	return age;
}


string Employee::getDesignation()
{
	return designation;
}
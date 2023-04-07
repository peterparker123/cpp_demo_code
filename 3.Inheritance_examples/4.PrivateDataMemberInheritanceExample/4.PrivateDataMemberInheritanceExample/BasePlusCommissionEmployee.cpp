//Class BasePlusCommissionEmployee inherits CommissionEmployee’s public member
// functions and can access the private base - class members via the inherited member functions.

#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn,
	double sales, double rate, double salary) :CommissionEmployee(first, last, ssn, sales, rate)
{
	setBaseSalary(salary);
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	if (salary >= 0.0)
	{
		baseSalary = salary;
	}
	else {
		throw invalid_argument("Salary must be >=0.0");

	}
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}


// In this case, instead of using data members, which are private 
// we are using the get member function
// This allows for the decoupling of the service or insulates the earnings and print
// function from any potentail modification to the base class
// e.g. if the datamember baseSalary is renamed or it's type is changed, 
// then we need not modify earnings and print() function, only the functions
// setBaseSalary and getBaseSalary needs to be modified

double BasePlusCommissionEmployee::earnings() const
{
	// return baseSalary + (commissionRate * grossSales);
	return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaired";

	CommissionEmployee::print();

	cout<<"\nbase salary: " << getBaseSalary();
}

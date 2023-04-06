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


	// calculate earning
double BasePlusCommissionEmployee::earnings() const
{
		return baseSalary + (commissionRate * grossSales);
}

void BasePlusCommissionEmployee::print() const
{
	cout << "Commission Employee: " << firstName << ' ' << lastName
		<< "\nSocial Security Number: " << socialSecurityNumber
		<< "\nGross Sales: " << grossSales
		<< "\nCommission Rate: " << commissionRate
		<< "\n Base Salary: " << baseSalary
		<< endl;
}

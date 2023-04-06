#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"

using namespace std;

// Constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string& first, const string& last, const string& ssn,
	double sales, double rate, double salary)
{
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setFirstName(const string& first)
{
	firstName = first;

}

string BasePlusCommissionEmployee::getFirstName() const
{
	return firstName;
}

void BasePlusCommissionEmployee::setLastName(const string& last)
{
	lastName = last;
}

string BasePlusCommissionEmployee::getLastName() const
{
	return lastName;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void BasePlusCommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)

		grossSales = sales;

	else
		throw invalid_argument("Gross sales must be >=0.0");

}

double BasePlusCommissionEmployee::getGrossSales() const
{
	return grossSales;

}

void BasePlusCommissionEmployee::setCommissionRate(double rate)
{
	if (rate > 0.0 && rate < 1.0)
	{
		commissionRate = rate;
	}
	else
	{
		throw invalid_argument("Commission Rate must be between 0.0 and 1.0");
	}
}

double BasePlusCommissionEmployee::getCommissionRate() const
{
	return commissionRate;
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
#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"


using namespace std;


// The data members for this constructors are being called from the Base Class
// Except for the Salary which is being defined inside the derived class
// BasePlusCommissionEmployee is a child of CommissionEmployee
// 

// Initialization of the constructor

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

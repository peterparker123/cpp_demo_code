#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

// constructor 

CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn,
	double sales, double rate) :firstName(first), lastName(last), socialSecurityNumber(ssn)
{
	setGrossSales(sales);
	setCommissionRate(rate);
}

// set first name
void CommissionEmployee::setFirstName(const string& first)
{
	firstName = first;
}

// return first name
string CommissionEmployee::getFirstName() const
{
	return firstName;
}

//set last name
void CommissionEmployee::setLastName(const string &last)
{
	lastName = last;
}

// return last name
string CommissionEmployee::getLastName() const
{
	return lastName;
}

// set social security number
void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn;
}

// return social security number
string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

// set GrossSales
void CommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)
	{
		grossSales = sales;
	}
	else {
		throw invalid_argument("Gross Sales must be >=0.0");
	}
}
double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

// set Commission Rate
void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate > 0.0 && rate < 1.0)
	{
		commissionRate = rate;
	}
	else
	{
		throw invalid_argument("Commission Rate must be >0.0 and <1.0");
	}
	
}


double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

double CommissionEmployee::earnings() const
{
	return getCommissionRate() * getGrossSales();
}


// print CommissionEmployee data 
void CommissionEmployee::print() const
{
	cout << " commission employee: "
		<< getFirstName() << " " << getLastName()
		<< "\nSocialSecurityNumber " << getSocialSecurityNumber()
		<< "\nGross Sales " << getGrossSales()
		<< "\nCommission Rate " << getCommissionRate()
		<< endl;
}
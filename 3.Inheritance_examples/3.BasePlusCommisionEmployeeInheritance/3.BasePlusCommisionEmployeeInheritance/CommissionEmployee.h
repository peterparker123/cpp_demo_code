// Base Class
// BasePlusCommissionEmployee will derive from this class

#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
using namespace std;

class CommissionEmployee
{
public:
	// Commission Employee would consist of
	// FirstName, LastName, Social Security Number,
	// Gross Sales and commission rate
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);

	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string&);
	string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const;

	double earnings() const;
	void print() const;

	// In order for the inherited class to access the data member
	// the access specifier must be changed to protected
// private:
protected:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif // !COMMISSION_H



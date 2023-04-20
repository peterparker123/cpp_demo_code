// In the base class, the functions earning and print are declared as virtual
// When the derived class would call these two methods, by using pointer
// they would override these methods, to achieve the polymorphic behavior

#ifndef COMMISSION_H
#define COMMISSION_H
using namespace std;
#include <string>

class CommissionEmployee
{
public:
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);

	void setFirstName(const string&); //set first name
	string getFirstName() const; // return first name

	void setLastName(const string&); //set last name
	string getLastName() const; // return last name
	
	void setSocialSecurityNumber(const string&); //set social security number
	string getSocialSecurityNumber() const; //get social security number

	void setGrossSales(double); // set gross sales
	double getGrossSales() const;

	void setCommissionRate(double); //set commission rate
	double getCommissionRate() const; // get commission rate

	virtual double earnings() const; //calculate earnings
	virtual void print() const; //print object

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales; // gross weekly sales
	double commissionRate; //commission percentage




};
#endif

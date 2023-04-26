#ifndef  BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"
using namespace std;

// Inheritance 
// BasePlusCommissionEmployee is the derived class
// CommissionEmployee is the base class
// this is a public inheritance
class BasePlusCommissionEmployee :public CommissionEmployee
	
{
public:
	// Derived classes will have it's own constructor
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);


	// BasePlusCommissionEmployee class has only one additional data member
	// which is the BaseSalary of these employees
	void setBaseSalary(double);
	double getBaseSalary() const;

	// The earnings of the BasePlusCommissionEmployee is computed differently
	double earnings() const;
	// We are overiding the behavior of the print() function
	// however, this print() method is associated with the derived class
	void print() const;

private:

	// the only data member, which needs to be declared inside the derived class
	// Apart from this, derived class would inherit everything from the bast class
	// CommissionEmployee
	double baseSalary;
};
#endif // ! BASEPLUS_H

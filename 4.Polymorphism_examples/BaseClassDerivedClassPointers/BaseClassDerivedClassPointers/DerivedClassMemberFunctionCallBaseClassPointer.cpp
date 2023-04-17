#include <iostream>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <string>

using namespace std;

// Attempting to invoke derived class only member functions
// via base class pointer

int main()
{
	CommissionEmployee* commissionEmployeePtr = nullptr; //base class ptr
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

	// Aim Base Class Pointer at derived class object (allowed)
	commissionEmployeePtr = &basePlusCommissionEmployee;

	// invoke base-class member functions on derived-class
	// object through base-class pointer (allowed)

	string firstName = commissionEmployeePtr->getFirstName();
	string lastName = commissionEmployeePtr->getLastName();
	string ssn = commissionEmployeePtr->getSocialSecurityNumber();
	double grossSales = commissionEmployeePtr->getGrossSales();
	double commissionRate = commissionEmployeePtr->getCommissionRate();

	// attempt to invoke derived-class-only member functions
	// on derived-class object through base-class pointer (disallowed)
	double baseSalary = commissionEmployeePtr->getBaseSalary();
	commissionEmployeePtr->setBaseSalary(500);
}
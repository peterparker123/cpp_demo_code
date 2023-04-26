#include <iostream>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <string>

using namespace std;

// Attempting to invoke derived class only member functions
// via base class pointer

int main()
{
	// Create base class object
	CommissionEmployee commissionEmployee("John", "Carlo", "222-22-2222", 6000, 0.5);
	CommissionEmployee* commissionEmployeePtr = nullptr; //base class ptr

	// BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

	// In the first case, we will invoke the base class pointer on the base class object
	// Aim Base Class Pointer at Base Class Object (ALLOWED)
	commissionEmployeePtr = &commissionEmployee;

	// Aiming base class pointer at base class object would allow the methods
	// of the base class to be accessible by the base class pointer
	
	// Aim Base Class Pointer at derived class object (allowed)
	// commissionEmployeePtr = &basePlusCommissionEmployee;

	// invoke base-class member functions on derived-class
	// object through base-class pointer (allowed)

	string firstName = commissionEmployeePtr->getFirstName();
	string lastName = commissionEmployeePtr->getLastName();
	string ssn = commissionEmployeePtr->getSocialSecurityNumber();
	double grossSales = commissionEmployeePtr->getGrossSales();
	double commissionRate = commissionEmployeePtr->getCommissionRate();


	

	// attempt to invoke derived-class-only member functions
	// on derived-class object through base-class pointer (disallowed)
	
	//double baseSalary = commissionEmployeePtr->getBaseSalary();
	// commissionEmployeePtr->setBaseSalary(500);
}
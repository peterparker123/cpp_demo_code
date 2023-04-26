#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

// Program to demonstrate that base class functionality is available to derived class
// For this, we would be creating two pointers, each of them aiming at base class and derived class
// Pointer aimed at base class functionality would invoke base class object
// Pointer aimed at derived class functionality would invoke derived class object

int main()
{
	// invoke base class object
	CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);

	// Create Base Class pointer
	CommissionEmployee* commissionEmployeePtr = nullptr;

	// Create derived class object
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

	// Create Derived class pointer
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = nullptr;

	// set floating output formatting
	cout << fixed << setprecision(2);
	

	// Output objects CommissionEmployee and BaseCommissionEmployee
	cout << "Print base class and derived class objects:\n\n";
	commissionEmployee.print(); //invokes base class print
	cout << "\n\n";
	basePlusCommissionEmployee.print(); //invokes derived class print

	// aim base class pointer at base class object and print
	commissionEmployeePtr = &commissionEmployee;
	cout << "\n\n\nCalling print with base-class pointer to "
		<< "\nbase-class object invokes base-class print function:\n\n";
	commissionEmployeePtr->print();


	// aim derived class pointer at derived class object and print
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with derived-class pointer to "
		<< "\nderived-class object invokes derived-class "
		<< "print function:\n\n";
	basePlusCommissionEmployeePtr->print();


	// aim base class pointer at derived class object and print
	// This is legal, beacause a derived class object is also a base class object

	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with base-class pointer to "
		<< "derived-class object\ninvokes base-class print "
		<< "function on that derived-class object:\n\n";

	commissionEmployeePtr->print();

	cout << endl;
	return 0;
	// end main

 }
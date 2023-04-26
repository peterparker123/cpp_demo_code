// Polymorphic behavior example
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
	// Create base class object
	CommissionEmployee commissionEmployee("John", "Wick", "333-33-3333", 10000, 0.6);

	// create base class pointer
	CommissionEmployee* commissionEmployeePtr = nullptr;

	// Create derived class object
	BasePlusCommissionEmployee basePlusCommissionEmployee("Carlos", "Moya", "444-44-4444", 5000, 0.4, 300);

	// Create derived class pointer
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = nullptr;

	// set floating output formatting
	cout << fixed << setprecision(2);

	// output objects using static binding
	cout << "Invoking print function on base-class and derived-class "
		 << "\nobjects with static binding\n\n";

	commissionEmployee.print(); // static binding
	cout << "\n";
	basePlusCommissionEmployee.print(); // static binding

	// output objects using dynamic binding
	cout << "\n\n\nInvoking print function on base-class and "
		<< "derived-class \nobjects with dynamic binding";

	// aim base class pointer at base class object and print
	commissionEmployeePtr = &commissionEmployee;
	commissionEmployeePtr->print();


	// aim derived class pointer at derived class object and print
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\nCalling virtual function print with derived-class "
		<< "pointer\nto derived-class object invokes derived-class "
		<< "print function:\n\n";

	basePlusCommissionEmployeePtr->print();


	// aim base class pointer at derived class object and call print
	commissionEmployeePtr = &basePlusCommissionEmployee;

	cout << "\n\nCalling virtual function print with base-class pointer"
		<< "\nto derived-class object invokes derived-class "
		<< "print function:\n\n";

	// polymorphism; invokes BasePlusCommissionEmployee's print;
	// base-class pointer to derived-class object

	commissionEmployeePtr->print();
	
	cout << endl;
}
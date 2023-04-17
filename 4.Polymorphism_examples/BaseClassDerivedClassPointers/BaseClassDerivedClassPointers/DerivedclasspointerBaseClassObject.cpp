#include <iostream>
using namespace std;
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
	CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = nullptr;

	// aim derived-class pointer at base-class object
	// Error: a CommissionEmployee is not a BasePlusCommissionEmployee
	basePlusCommissionEmployeePtr = &commissionEmployee;
	basePlusCommissionEmployeePtr->print();
}
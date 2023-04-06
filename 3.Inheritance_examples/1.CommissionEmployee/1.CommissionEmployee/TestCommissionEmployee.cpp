// Program to test Commission Employee
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
	// Instantiate CommissionEmployee object
	CommissionEmployee employee("John", "Doe", "222-22-2222", 10000, 0.8);

	// set floating point output formatting
	cout << fixed << setprecision(2);

	cout << "Employee information by get functions: \n"
		<< "\n Employee First name is: " << employee.getFirstName()
		<< "\n Employee Last name is: " << employee.getLastName()
		<< "\n Employee's Social Security Number is: " << employee.getSocialSecurityNumber()
		<< "\n Gross Sales: " << employee.getGrossSales()
		<< "\n Commission Rate: " << employee.getCommissionRate();

	employee.setGrossSales(15000);
	employee.setCommissionRate(0.6);

	cout << "Updated Employee Information by print function \n" << endl;
	employee.print();

	// display the employee's earnings
	cout << "\n\nEmployee's earnings $" << employee.earnings() << endl;
	
}
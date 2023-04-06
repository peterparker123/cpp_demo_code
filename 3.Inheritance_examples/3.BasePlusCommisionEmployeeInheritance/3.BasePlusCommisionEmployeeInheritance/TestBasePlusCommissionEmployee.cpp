// Program to test Commission baseplusemployee
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{

	// Instantiate BasePlusCommissionbaseplusemployee object
	BasePlusCommissionEmployee baseplusemployee("Bob", "Lewis", "555-55-5555", 7000, 0.05, 500);

	// set floating point output formatting
	cout << fixed << setprecision(2);

	cout << "Base Plus Employee information by get functions: \n"
		<< "\n Base Plus Employee First name is: " << baseplusemployee.getFirstName()
		<< "\n Base Plus Employee Last name is: " << baseplusemployee.getLastName()
		<< "\n Base Plus Employee's Social Security Number is: " << baseplusemployee.getSocialSecurityNumber()
		<< "\n Gross Sales: " << baseplusemployee.getGrossSales()
		<< "\n Commission Rate: " << baseplusemployee.getCommissionRate()
		<< "\n Base Salary: " << baseplusemployee.getBaseSalary();

	baseplusemployee.setBaseSalary(1200);


	cout << "Updated baseplusemployee Information by print function \n" << endl;
	baseplusemployee.print();

	// display the baseplusemployee's earnings
	cout << "\n\nbaseplusemployee's earnings $" << baseplusemployee.earnings() << endl;
	return 0;

}
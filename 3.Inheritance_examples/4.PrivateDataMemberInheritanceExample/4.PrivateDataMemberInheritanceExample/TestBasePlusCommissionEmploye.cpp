// Program to test Commission baseplusemployee
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{

	// Instantiate BasePlusCommissionbaseplusemployee object
	BasePlusCommissionEmployee baseplusemployee("Bob", "Smith", "555-55-5555",6000,0.04,300);

	// set floating point output formatting
	cout << fixed << setprecision(2);

	baseplusemployee.setBaseSalary(1200);


	cout << "Updated baseplusemployee Information by print function \n" << endl;
	baseplusemployee.print();

	// display the baseplusemployee's earnings
	cout << "\n\nbaseplusemployee's earnings $" << baseplusemployee.earnings() << endl;
	return 0;

}
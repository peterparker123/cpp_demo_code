#ifndef BASEPLUS_H
#define BASEPLUS_H

#include<string>
#include "CommissionEmployee.h"
using namespace std;
class BasePlusCommissionEmployee :public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);

	void setBaseSalary(double); //set base salary
	double getBaseSalary() const; //get base salary

	double earnings() const override; // calculate earnings
	void print() const override; //print

private:
	double baseSalary; //base salary 

};
#endif // !BASEPLUS_H


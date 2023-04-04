// A simple program for date class in CPP
// DateClass.cpp
// Program to demonstrate the definition of a simple class
// and member functions

#include <iostream>
using namespace std;


// Declaration of Date class
class Date {

public:
	// Parametrized Constructor
	Date(int, int, int);
	// setter method
	void set(int, int, int);
	void print();

private:
	int year;
	int month;
	int day;
};


int main()
{
	// Declare today to be object of class Date
	// Values are automatically intialised by calling constructor function
	Date today(4, 4, 2023);

	cout << "This program was written on ";
	today.print();

	cout << "This program was modified on ";
	today.set(4,3, 2023);
	today.print();

	return 0;
}

// Date constructor function definition
Date::Date(int d, int m, int y)
{
	if (d > 0 && d < 31) day = d;
	if (m > 0 && m < 13) month = m;
	if (y > 0) year = y;
}

// Date member function definitions
void Date::set(int d, int m, int y)
{
	if (d > 0 && d < 31) day = d;
	if (m > 0 && m < 13) month = m;
	if (y > 0) year = y;
}

void Date::print()
{
	cout << day << "-" << month << "-" << year << endl;
}

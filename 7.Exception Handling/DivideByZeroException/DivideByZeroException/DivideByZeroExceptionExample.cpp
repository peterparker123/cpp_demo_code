#include <iostream>
#include <stdexcept>

using namespace std;

// this is a class to handle the DividebyZeroException
// if the division by zero happens, an exception would be raise
// This class would inherit from the standard exception, known as runtime_error

class DivideByZeroException:public runtime_error
{
public:
	DivideByZeroException():runtime_error{"attempted zero by division error."} {}
};

// create a function, DivideByQuotient
double quotient(int numerator, int denominator)
{
	// The division will be unsuccessfull, if the denominator is zero
	if (denominator == 0)
	{
		throw DivideByZeroException{};
	}
	return static_cast<double>(numerator) / denominator;
}

int main()
{
	int number1;
	int number2;

	cout << "Enter two number (end-of-file to end): ";

	while (cin >> number1 >> number2)
	{
		try
		{
			double result{ quotient(number1, number2) };
			cout << "The quotient is: " << result << endl;
			
			
		}
		catch (DivideByZeroException& dividebyzeroexception)
		{
			cout << "Divide by Zero Exception occurred\n"
				<< dividebyzeroexception.what() << endl;
		}
		cout << "\nEnter two integers (end-of-file to end): ";
		
	}
}
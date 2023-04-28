// Implementing a calculator, by using class templates
#include <iostream>
#include <stdexcept> 
#include <string>
using namespace std;

char getVarType(char * );


template <class T> 
class Calculator
{
public:
	// create a constructor
	Calculator(const T& number1, const T& number2);
	void add();
	T getSum() const;

	void subtraction();
	T getSubtraction() const;

	void multiplication();
	T getMultiplication() const;

	void division();
	T getDivision() const;

	
private:
	T number1, number2;
	T sum;
	T difference;
	T product;
	T quotient;

};

// Initialize the constructor
template <class T>
Calculator<T>::Calculator(const T& num1, const T& num2)
{
	number1 = num1;
	number2 = num2;
}

// Implement the Add() method
template <class T>
void Calculator<T>::add()
{
	sum = number1 + number2;
}


template <class T>
T Calculator<T>::getSum() const
{
	return sum;
}

template <class T>
void Calculator<T>::subtraction()
{
	difference = number1 - number2;
}


template <class T>
T Calculator<T>::getSubtraction() const
{
	return difference;
}


template <class T>
void Calculator<T>::multiplication()
{
	product = number1 * number2;
}

template <class T>
T Calculator<T>::getMultiplication() const
{
	return product;
}

template <class T>
void Calculator<T>::division()
{
	if (number2 == 0)
	{
		cerr << "Exception occured" << endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		quotient = number1 / number2;
	}
}

template <class T>
T Calculator<T>::getDivision() const
{
	return quotient;
}

int main()
{
	Calculator<int> intCalculator(4, 2);
	Calculator<double> doubleCalculator(4.5, 5);
	
	char vartype=' ';

	vartype = getVarType(&vartype);
	cout << vartype << endl;
	switch (vartype)
	{
	case 'i':

		intCalculator.add();
		cout << "Integer Addition :";
		cout << intCalculator.getSum() << endl;

		intCalculator.subtraction();
		cout << " Integer Subtraction :";
		cout<<intCalculator.getSubtraction()<<endl;


		intCalculator.multiplication();
		cout << " Integer Multiplication :";
		cout << intCalculator.getMultiplication() << endl;


		intCalculator.division();
		cout << " Integer Division :";
		cout << intCalculator.getDivision() << endl;

		break;

	case 'd':

		doubleCalculator.add();
		cout << "Double Addition :";
		cout<<doubleCalculator.getSum()<<endl;

		
		doubleCalculator.subtraction();
		cout << "Double Subtraction :";
		cout << doubleCalculator.getSubtraction() << endl;

		doubleCalculator.multiplication();
		cout << "Double Multiplication :";
		cout << doubleCalculator.getMultiplication() << endl;


		doubleCalculator.division();
		cout << "Double Multiplication :";
		cout << doubleCalculator.getDivision() << endl;
		
		break;	
	}
		
}


char getVarType(char *vartype)
{
	cout << "Enter the type on which the operation has to be performed: (i for int,d for double, c for char) ";
	cin >> *vartype;
	cout << *vartype;
	if (*vartype != 'i' || *vartype != 'd')
	{
		cerr << "Enter i or d to process" << endl;
	}
	
	else
	{
		return *vartype;
	}

}

// C++ program to add two integers/
// Functions are a way to initialize the task, which are repeititive
// functions can take arguments, or they cannot

// usually, in C++, the norm is to create a prototype of the function

// prototype
// This function has two arguments, a and b
// A function usually has a return type
// If a function is declared with void(), it has no return type

#include <iostream>
using namespace std;

int Add(int a, int b);


double Add(int a, double b);
// The problem with this approach?
// Same function, getting called with different types
// Is there a way in C++, that this kind of declaration of function is 
// done at a single place, which works on various types of the data?

// In C++, the idea is to use templates


int main()
{
	// Call the function
	// function only comes into the picture, if it is invoked
	cout << Add(3, 2)<<"\n";
	cout << Add(5, 10)<<"\n";

	// Which add method will get invoked?
	// the one, whose second argument is declared as double
	// but the return type of the function is going to be int
	cout << Add(5.5, 6.5) << "\n";

	

}

// Implement the function here
// This function has return type of integer
// a and b are the variables, which have scope within the Add() function
// outside the Add() function, these variables have no usage

int Add(int a, int b)
{
	return a + b;
}


double Add(int a, double b)
{
	return a + b;
}
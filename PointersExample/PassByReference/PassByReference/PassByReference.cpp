// Pass by Reference example
// in pass by reference, we use the pointer variable
// to pass the argument as function

// This is done to send the value dynamically


#include <iostream>
using namespace std;


// The function GetInt will take the pointer as it's argument

int IncrementInt(int*);

int main()
{
	int x = 10;

	cout << "x before the function " << x << endl;

	// Because, we are passing the pointer to the function
	// we need to send the memory address of the variable
	// while calling the function
	cout << "x from the function"<<IncrementInt(&x) << endl;
	cout << "x after the function " << x << endl;
	
}

// By using the dereferencing operator, we are ensuring that
// the actual value, and not the copy of the x is being sent to the function
// this is known as pass by reference
int IncrementInt(int* number)
{
	*number = *number + 1;
	return *number;
}

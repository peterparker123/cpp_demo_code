// Simple pointer program to demonstrate the usage of * and &
// & unary operator stores the address of the variable
// * unary operator dereferences a pointer

#include <iostream>
using namespace std;

int main()
{
	// normal variable, a contains the value 7
	int a = 7;
	// aPtr is pointer variable, initialized to nullptr
	int* aPtr = nullptr;
	// aPtr is now initialized with the address of variable a
	// & stores the address of the variable a, which is passed to pointer
	// aPtr now points to the value of 5 indirectly in memory, using this memory address
	aPtr = &a;

	cout << "The address of a is: " << &a << endl;
	cout << "The value of aPtr is: " << aPtr << endl;

	cout << "The value of a is :" << a << endl;
	cout << "The value of aPtr is: " << *aPtr << endl;
}
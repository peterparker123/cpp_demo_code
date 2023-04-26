// A small program to demonstrate working with pointers
// Pointer is a special kind of variable, which stores the memory address of an type or value or variable

#include <iostream>
using namespace std;

int main()
{
	int a = 10;

	// The current value inside a is 10
	// technically, a is pointing to the value 10
	// This value 10 is assigned a memory address by the compiler
	// which, a has stored inside of it
	cout << a << endl;
	
	cout << &a << endl;

	// Question -> Is there a way, that this memory address, can be stored
	// in another variable, which contains only the memory address, or in other words
	// can hold only the memory address?

	// The answer to this question is by using pointer
	// pointer holds the memory address of a variable

	// in order to create a pointer, the pointer variable must also be of the
	// same type, to which it is pointing 
	// e.g. here, we have created a pointer, aPtr, whose initial value is null
	// this has nothing inside of it.

	int* aPtr = nullptr;
	cout << aPtr<<endl;

	// how to make the pointer point to the memory address of the variable
	// it is by using the pointer variable, pointing to the memory address of the variable

	// now, aPtr points to the memory address of the variable a
	// which contains the value of 10.
	// aPtr is indrectly referencing the value of a, which is 10
	aPtr = &a; // a is not a pointer, it is a variable of type int. aPtr is pointer, which points to the memory address of a
	cout << "The memory address of variable a is :" << aPtr << endl;

	// At that particualr memory address, a value is stored
	// We can access that value, by dereferencing the pointer.
	cout << "The value to which aPtr points to is : "<< *(aPtr);


	// Let's modify the value of a
	a = 12;
	

}


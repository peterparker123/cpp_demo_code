// Using pointers, we can also pass argument to a function as a reference
// This is accomplished by using the & operator to the variable, which has to be modified

#include <iostream>
using namespace std;

void cubeByReference(int*); //prototype

int main()
{
	// Declare the variable, whose address has to be passed as reference to the function
	int number = 5;
	
	// Check the value of the number before it is modified
	
	cout << "The original value of the number is " << number << endl;

	// Pass the function argument as the reference, i.e. it's memory address
	// When the function will be defined, we would be dereferencing the pointer variable
	// number variable will get modified
	cubeByReference(&number); 

	cout << "The value of number after it has been modifieds is " << number << endl;
}

// We are going to pass the reference of the argument to the function
// which will modify the original value, instead of copying the value
// This would be accomplished by using the dereferencing operator, which would
// point to the value of the variable stored at that memory address

// *nPtr would modify the number variable in main
void cubeByReference(int* nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
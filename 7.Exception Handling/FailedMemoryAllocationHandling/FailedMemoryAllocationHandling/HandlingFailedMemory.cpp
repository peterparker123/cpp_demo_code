// Program to demonstrate set_new_handler
// Can be used to handle exceptions, without using try/catch statements

#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

// handle the exception here
// WE can create our own custom handler
void customNewHandler()
{
	cerr << "customNewHandler was called\n";
	exit(EXIT_FAILURE);
}

int main()
{
	double* ptr[50];

	// specify that customnewhandler should be called 
	// on memory allocation failure
	// set_new_handler, takes the exception handler as it's arguments

	set_new_handler(customNewHandler);

	// aim each ptr[i] at a big block of memory; customNewHandler will be
	// called on failed memory allocation
	for (size_t i{ 0 }; i < 50; i++)
	{
		ptr[i] = new double[50'000'000] {};
		cout << "ptr [" << i << "] points to 50'000'000 doubles\n";
	}
}

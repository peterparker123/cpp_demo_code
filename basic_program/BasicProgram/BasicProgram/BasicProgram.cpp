#include <iostream>  # iostream -> input, output stream
using namespace std;

// main function is the entry and exit point for C++ programs
// Without main(), programs will never work
// Even other functions must be invoked from main()

int main()
{
	// Declare a variable of type int -> integer
	int a;

	// Take the input from the user
	cout << "Enter a number " << endl; // send the stream to the ouput

	cin >> a; // user will enter the value of  a , e.g 5
	// the C++ compiler, will assign this value 
	// to a. 

	cout << "You entered the value of a as: " << a;

	// IF program has run successfully, return 0 to the OPERATING SYSTEM.
	return 0;

}


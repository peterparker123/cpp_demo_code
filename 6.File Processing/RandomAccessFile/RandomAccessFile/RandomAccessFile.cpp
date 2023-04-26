// Creation of Random Access File
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.h"

using namespace std;

int main()
{
	ofstream outCredit("C:\\programming\\C++\\credit.dat", ios::out | ios::binary);

	// exit program if could not open file
	if (!outCredit)
	{
		cerr << " File could not be opened " << endl;
		exit(EXIT_FAILURE);
	}

	ClientData bankClient; // default constructor zeros out each data member
	
	// output 100 blank records to a file

	// When writing the integer number to a file, instead of using the statement
	// outFile << number;
	// which for a four - byte integer could print as few digits as one or as many as 11 (10 digits
	// plus a sign, each requiring a single byte of storage), we can use the statement
	// outFile.write( reinterpret_cast< const char * >( &number ), sizeof(number) );
	// which always writes the binary version of the integer number’s four bytes (on a machine
	// .Function write treats its first argument as a group of bytes by viewing the object in memory as a const char*, which is a pointer to a byte.Starting from
	// that location, function write outputs the number of bytes specified by its second argument—
	// an integer of type size_t.As we’ll see, istream function read can subsequently
	// be used to read the four bytes back into integer variable number.

	//C++ provides the reinterpret_cast operator for cases like this in which a
	// pointer of one type must be cast to an unrelated pointer type.Without a
	// reinterpret_cast, the write statement that outputs the integer number will not compile
	// because the compiler does not allow a pointer of type int*
	// reinterpret_cast is performed at compile time, and does not change the value of the object to
	// which its operand points.



	for (int i = 0; i < 100; ++i)
	{
		outCredit.write(reinterpret_cast<const char*> (&bankClient), sizeof(ClientData));
	}

}
// Exceptions can be rethrown
// In this scenario, the try catch block does not catch the exception in full

#include <iostream>
#include <exception>
using namespace std;

void throwException()
{
	try
	{
		cout << "Function throwException throws an exception\n";
		throw exception();
	}
	catch(const exception&)
	{
		// Because the exception is being rethrown, catch only handles
		// a partial exception

		cout << "Function throwException has caught an exception\n";
		cout << "Function throwException has rethrown an exception\n";
		throw;  // rethrow exception for further exception
	}

	// Because, the exception is rethrown, this piece of block will not get executed
	cout << "This should not print\n";
}

int main()
{
	try
	{
		cout << "main invokes throwException\n";
		throwException();
		// As long as exceptions are thrown, the next line of processing would never happen
		cout << "This should not print\n";

	}
	catch (const exception&)
	{
		cout << "Exception handled in main\n";
	}

	cout << "Program control continues after catch in main\n";
}


#include <iostream>
#include <exception>
using namespace std;

void throwException()
{
	try
	{
		cout << "function throwException has thrown an exception\n";
		throw exception();
		
	}
	catch (const exception&)
	{
		cout << "function throwException has caught an exception\n";
		cout << "function throwException has rethrown the exception\n";
		// throw;
	}

	// We are writing empty throw outside the catch method
	//throw;
	throw;
}

int main()
{
	try
	{
		cout << "main function has called throwException\n";
		throwException();
		

	}
	catch(const exception&)
	{
		cout << "Exception handled in main\n";
	}
}
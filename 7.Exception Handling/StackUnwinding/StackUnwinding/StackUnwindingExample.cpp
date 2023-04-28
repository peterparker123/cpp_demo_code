// This is a program to show that how can exceptions be caught, in another
// block of scope, if it's not present in the same scope

#include <iostream>
#include <stdexcept>
using namespace std;

// function 3 has a run time error, however, it does not have any try-catch block
void function3()
{
	cout << " In function 3 " << endl;
	throw runtime_error{ "run time error in function3" };

	
}


void function2()
{
	cout << " Function 3 called from inside of Function 2" << endl;
	function3();
}

// function1 has try/catch block

void function1()
{
	cout << " Function 2 is called from inside of Function 1 " << endl;
	function2();
}

int main()
{
	// invoke function 1
	try
	{
		cout << " Function1 is called from inside the main " << endl;
		function1(); 
	}
	catch (const runtime_error& error)
	{
		cout << " Exception occurred " << error.what() << endl;
		cout << "Exception handled inside the main " << endl;
	}
}

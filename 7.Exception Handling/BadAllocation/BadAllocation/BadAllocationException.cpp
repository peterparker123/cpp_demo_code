#include <iostream>
#include <new> // Bad Alloc class is defined here
using namespace std;

int main()
{
	double* ptr[50];

	try
	{
		for (size_t i{ 0 }; i < 50; i++)
		{
			// allocate memory dynamically so that pointer points to element on the heap
			ptr[i] = new double[50'000'000];
			cout << "ptr[" << i << "] points to 50'000'000 new doubles\n";
		}
	}
	catch (bad_alloc& memoryAllocationException)
	{
		cerr << "Exception occurred: "
			<< memoryAllocationException.what() << endl;
	}


}
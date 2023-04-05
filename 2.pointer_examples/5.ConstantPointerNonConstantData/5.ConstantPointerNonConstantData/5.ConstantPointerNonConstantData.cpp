// Passing a const Pointer to a data which is not const
// This would allow us to modify the varaible, but pointer cannot be modified
#include <iostream>
using namespace std;

int main()
{
	int x, y;

	// Pointer is constant 
	int * const ptr = &x;

	*ptr = 7; // Allowed, as x is not const, this is similar to x = 7
	ptr = &y; // not allowed
}
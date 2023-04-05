// Passing a constant pointer to a constant data
// Provides minimum access
// Neither the pointer nor the data variable can be modified

#include <iostream>
using namespace std;

int main()
{
	int x = 5,y;
	const int* const Ptr = &x;

	cout << *Ptr << endl;

	// Try to modify the pointer

	*Ptr = 7;
	Ptr = &y;
}
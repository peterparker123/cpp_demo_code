// Passing a constant pointer to a constant data
// Provides minimum access
// Neither the pointer nor the data variable can be modified

#include <iostream>
using namespace std;

int main()
{
	// int x = 5,y;
	// const int*  const Ptr = &x;
		
	
	// *Ptr = x;	
	// Ptr = &y;

	int a = 10,b; // of type integer
	int* aPtr = &a; // declaring variable
	cout << aPtr << endl;
	cout << *aPtr << endl;

	b = 20;
	aPtr = &b;
	cout << *aPtr << endl;
	cout << aPtr << endl;

	
	// &y stores the memory address of y
	
}
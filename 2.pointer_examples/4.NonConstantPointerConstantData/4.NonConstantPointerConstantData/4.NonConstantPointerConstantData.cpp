// Attempting to modify data through a
// nonconstant pointer to constant data.

#include <iostream>
using namespace std;

void func(const int*); //prototype

int main()
{
	int x = 0;
	func(&x); // we will try to modify variable x, which will be illegal
}

void func(const int *data)
{
	*data = 5;
}
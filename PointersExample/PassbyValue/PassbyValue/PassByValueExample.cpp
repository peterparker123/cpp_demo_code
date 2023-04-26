// In a pass by value, the function received the copy
// of the arguments, and not the valeus of the arguments

#include <iostream>
using namespace std;

int GetInt(int x);

int main()
{

	// x is declared in the scope of the main

	int x = 10;
	cout << GetInt(x)<<endl;
	cout << x << endl;
}

// x is declared in the scope of the function
// the function does not receive the direct value of x
// instead, it receives the copy of x
int GetInt(int x)
{
	return x + 1;
}
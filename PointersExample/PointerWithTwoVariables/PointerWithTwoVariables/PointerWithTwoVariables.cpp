// Both & and * are unary operator


#include <iostream>
using namespace std;

int main()
{
	int a = 10, b;
	int* aPtr=nullptr;
	b = a;
	cout << b;
	// both a and b points to same variable in the memory address
	
	aPtr = &a;
	cout << "Pointer to a -> " << aPtr<<endl;
	cout << " Memory address of the aPtr " << &aPtr << endl;
	
	int* bPtr = nullptr;
	bPtr = aPtr;
	cout << "b's initial memory address is " << bPtr<<endl;
	b = 12;
	
	bPtr = &b;
	cout << "b now points to " << bPtr<<endl;
}
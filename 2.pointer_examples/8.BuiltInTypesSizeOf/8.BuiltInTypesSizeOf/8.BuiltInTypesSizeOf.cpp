#include <iostream>
using namespace std;

int main()

{
	// Declare all the built-in types
	char C; //Variable of type char
	short S; //Variable of type short int
	int i; //variable of type int
	long l; // Variable of type long
	long ll;  // variable of type long long
	float f; // Variable of type float
	double d; // Variable of type double 
	long double ld; // Variable of type long double
	int array[20]; //Built in array of int
	int* ptr = array; // variable of type int

	cout << "sizeof c = " << sizeof(C)
		<< "\tsizeof(char) = "  << sizeof(char)
		<< "\nsizeof s = " << sizeof(S)
		<< "\tsizeof(short) = " << sizeof(short)
		<< "\nsizeof i = " << sizeof(i)
		<< "\tsizeof(int) = " << sizeof(int)
		<< "\nsizeof l = " << sizeof(l)
		<< "\tsizeof(long) = " << sizeof(long)
		<< "\nsizeof ll = " << sizeof(ll)
		<< "\tsizeof(long long) = " << sizeof(long long)
		<< "\nsizeof f = " << sizeof(f)
		<< "\tsizeof(float) = " << sizeof(float)
		<< "\nsizeof d = " << sizeof(d)
		<< "\tsizeof(double) = " << sizeof(double)
		<< "\nsizeof ld = " << sizeof(ld)
		<< "\tsizeof(long double) = " << sizeof(long double)
		<< "\nsizeof array = " << sizeof(array)
		<< "\nsizeof ptr = " << sizeof(ptr)
		<< endl;
}
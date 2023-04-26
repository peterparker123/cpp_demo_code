// Example of const keyword
#include <iostream>
#include <string>
using namespace std;

// we will declare an integer as constant

int main()
{
	int const number = 5;
	cout << "The value of the number is :" << number;
	number = 6;

	const string &myStr = "Hello";
	&myStr = "World";

	const string arr[] = { "abc","xyz","def" };
	&arr[0] = "pqr";
}
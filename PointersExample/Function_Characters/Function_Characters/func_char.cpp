// Code to pass two characters to a function, using pointers

#include <iostream>
#include <string>
using namespace std;

string Char(string *, string *);

int main()
{
	string a = "a", b = "b";

	// If we try to perform addition of two chars
	// it would be the addition of their ASCII values
	// ASCII value of a is 97, 'a' = 97
	
	
	cout << a + ' ' + b<<endl;
	cout << Char(&a, &b);
	

}
string Char(string* a,string* b)
{
	return *a + *b;
}
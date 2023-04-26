// Template provides a mechanism, in which the function
// will work with different types of data

#include <iostream> 
#include <string>
using namespace std;

// keyword tempalte, creates the template prototype
// T is placeholder for different types
// T can be integer, T can be double

// char?
template <typename T>  T add(T &a, T &b);

int main()
{
	char a = 'a',  b = 'b';

	

	// cout << "Addition of integers " << add(aptr, bptr)<<"\n";
	// cout << "Addition of doubles " << add(aptr, bptr)<<"\n";
	cout << add(a,b);
}

template <typename T> T add(T &a, T &b)
{
	return a+ b;
}
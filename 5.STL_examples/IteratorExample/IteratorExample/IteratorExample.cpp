// A program to demonstrate, how to work with iterators
// iterators are pointers, which points to the elements of the containers

#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	// for input and output, we use istream_iterator and ostream_iterator
	cout << "Enter a string: ";
	istream_iterator<string> stringInput(cin); // this is a pointer 


	// myStrin would also be a pointer, because, a value to pointer is being assigned to it
	// currently, this iterator points to the myString1
	string myString1 = *stringInput;

	// incrementing the iterator makes it to point to the next element
		
	ostream_iterator<string> stringOutput(cout); // this is a pointer
	
	*stringOutput = myString1;
	++stringInput;
	string myString2 = *stringInput;
	*stringOutput = myString2;
	
	return 0;

}
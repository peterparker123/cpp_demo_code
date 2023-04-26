// Program to demonstrate the functioning of an iterator
// Iterator is a pointer to a container or object

// In order to use the iterator, we need to include the header <iterator>
// There are two iterators, ostream_iterator, and istream_iterator

// In order to read from iterators, we use istream_iterator
// in order to write from iterators, we use ostream_iterator

#include <iostream>
#include <iterator>
using namespace std;

int main()
{
	// For everyinput iterator, we would be using the same
	// iterator. 
	cout << "Enter a number";
	istream_iterator<int> inputInt(cin);
	

	// in order to obtain the value using iterator, we have to use pointer
	// because, iterators are pointers to the containers
	int number = *inputInt;

	// ostream_iterator, generates the iterator for ouput
	ostream_iterator<int> outputInt(cout);
	*outputInt =number;
}
// A program to demonstrate multiset associative container
// Must include header <set> to define multiset class-template definition
#include <array>
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	const size_t SIZE = 10;

	
	array<int, SIZE> a = { 7,22,9,1,18,30,100,22,85,13 };
	multiset<int, less<int> > intMultiSet; //mltisets of int
	ostream_iterator<int> output(cout, " ");

	cout << "There are currently " << intMultiSet.count(15)
		<< "\nvalues of 15 in the multiset\n";

	// insert items in the multiset
	// multiset allows to store duplicate values
	// Using the overloaded version of the insert function to add values
	// Another version takes an iterator and a value as argument,and begins the search for insertion point 
	// from the iterator position specified
	intMultiSet.insert(15);
	intMultiSet.insert(15);

	cout << "After inserts, there are " << intMultiSet.count(15)
		<< "values of 15 in the multiset\n";

	// find 15 in intMultiSet; find returns iterator
	// Function find returns an iterator or a const_iterator pointing to the
	// location at which the value is found.If the value is not found, find returns an iterator
	// or a const_iterator equal to the value returned by calling end on the container
	auto result = intMultiSet.find(15);
	cout << *result<<endl; // returns an iterator, or the pointer, pointing to the location, where the value is stored

	if (result != intMultiSet.end()) // if iterator not at end
	{
		cout << "Found value  15 at the location \n"<<&result<<endl; // found search value 15

	}

	// find 20 in intMultiset; find returns iterator
	result = intMultiSet.find(20);

	if (result == intMultiSet.end())
	{
		cout << "did not find value 20\n";
	}

	// insert elements of array into multiset
	intMultiSet.insert(a.cbegin(), a.cend());
	cout << "After insert, intMultiSet contains: \n";
	copy(intMultiSet.cbegin(), intMultiSet.cend(), output);



	// Determine lower and upper bounds of 22 in the multiset
	// locate the earliest occurrence of the value 22 or any other value in the multiset
	// both, lower bound and upper bound returns iterators or const_iterator, which points
	// to the appropriate location or the iterator returned by the end, if the value is not in the multiset

	cout << "\nLower bound of 9 : "
		<< *(intMultiSet.lower_bound(9));

	cout << "\nUpper bound of 9 : " << *(intMultiSet.upper_bound(9));

	// use equal_range to determine the lower and upper bound of 22
	auto p = intMultiSet.equal_range(22);

	cout << "\n\nequal_range of 22:" << "\n Lower bound: "
		 <<*(p.first) << "\n Upper bound: " << *(p.second) ;
	cout << endl;
	
}

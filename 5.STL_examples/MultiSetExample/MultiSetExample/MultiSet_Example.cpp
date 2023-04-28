#include <iostream>
#include <algorithm>
#include <set>
#include <array>
#include <iterator>

using namespace std;

int main()
{
	const size_t SIZE = 10;

	array<int,SIZE> ints = { 7,22,9,1,18,30,100,22,85,13 };

	ostream_iterator<int> output(cout, " ");

	// declare a multiset container
	// if we are not providing a comparator object, by default, it stores in ascending order

	 multiset<int, less<int>> intMultiSet;

	// insert the item of ints in our multiset
	intMultiSet.insert(ints.begin(), ints.end());

	copy(intMultiSet.begin(), intMultiSet.end(), output);
	cout << endl;

	// try inserting other values inside the multiset
	intMultiSet.insert(15);
	intMultiSet.insert(15);

	copy(intMultiSet.begin(), intMultiSet.end(), output);
	cout << endl;

	// find method, find returns an iterator of the location of the set
	multiset<int>::iterator result;
	result = intMultiSet.find(20);

	// result is an iterator, which is pointer
	// if the iterator did not reach the end, then search inside the set

	if (result != intMultiSet.end())
	{
		cout << "Found element " << *result<<endl;
	}
	else
	{
		cout << "Did not find the value " << endl;
	}

	// lower bound : find the value which is closest to that element and it is that value itself
	// upper bound: what's the max value, which occus next within the range of the lower bound

	// lower bound returns an iterator, and is a pointer

	cout << "Lower bound of 15: "
		<< *(intMultiSet.lower_bound(15))<<endl;


	// upper bound of 22 upper bound also is an iterator
	cout << "Upper bound of 22: " << *(intMultiSet.upper_bound(15)) << endl;
	
	// another function named equal range determines the lower and upper bound of the element in a set
	
	auto p = intMultiSet.equal_range(22);

	cout << "The lower bound of 22 is "
		<< *(p.first) << "\n"
		<< "Upper Bound " << *(p.second)<<"\n";	

}
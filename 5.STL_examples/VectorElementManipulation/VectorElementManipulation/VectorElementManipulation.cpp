// This program demonstrates on how to retrieve vector element and manipulate them
// We uses an overloaded vector constructor that takes two iterators as arguments to initialize
// integers.
// Line 20 Initializes integers with the contents of the array values from beginning
// of values up to—but not including—values.cend() (which points to the element after the end of values).

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>

using namespace std;

int main()
{
	const size_t SIZE = 6;
	array<int, SIZE> values = { 1,2,3,4,5,6 };
	vector<int> integers(values.cbegin(), values.cend());

	ostream_iterator<int> output(cout," ");

	cout << "Vector Integer contains: ";
	copy(integers.cbegin(), integers.cend(), output);

	// Find the first and last element of integers vector
	cout << "\n First element of integers " << integers.front();
	cout << "\n Last element of integers " << integers.back();

	// Set first element to 8
	integers[0] = 8;

	// Set third element to 11
	integers.at(2) = 11;

	// insert 22 at 2nd element 
	integers.insert(integers.cbegin() + 1, 22);

	cout << "\n Contents of vector elements are changes";
	copy(integers.cbegin(), integers.cend(), output);


	// access out of range element
	try {
		integers.at(100) = 777;
	}
	catch (out_of_range& outOfRange) // out of range exception
	{
		cout << "\nExceptions: " << outOfRange.what();
	}

	// erase first element
	integers.erase(integers.cbegin());
	cout << "\n Vectors integer after erasing first element: ";
	copy(integers.cbegin(), integers.cend(), output);

	// erase remaining element
	integers.erase(integers.cbegin(), integers.cend());
	cout << "\n After erasing all elements, vector integers " 
		<< (integers.empty() ? "is" : "is not") << " empty ";

	// insert elements from the array values
	integers.insert(integers.cbegin(), values.cend(), values.cend());

	cout << "\n\nContents of vector integers before clear: ";
	copy(integers.cbegin(), integers.cend(), output);

	// empty integers; clear calls erase to empty a collection
	cout << "\nAfter clear, vector integers "
		 << (integers.empty() ? "is" : "is not") << " empty" << endl;

}

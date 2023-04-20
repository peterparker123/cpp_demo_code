// Standard Library Vector class template
// This example demonstrates several functions of Vector
// Many of these functions are included in first class container
// In order to use class template vector, it's necessary to include the header <vector>

// In this example, we are creating an instance called integers of class template vector
// that stores int values.
// When this object is intantiated, an empty vector is created with size 0 and capacity 0.

// the size and capacity functions; each initially returns 0 for
// vector v in this example.
// Function size—available in every container except forward_List—returns the number of elements 
// currently stored in the container.
// Function capacity(specific to vector and deque) returns the number of elements that can be
// stored in the vector before the vector needs to dynamically resize itself to accommodate more elements

// function push_back—available in sequence containers other than array
// and forward_list—to add an element to the end of the vector.If an element is added
// to a full vector, the vector increases its size—some implementations have the vector
 // double its capacity.Sequence containers other than array and vector also provide a
// push_front function.

//

#include <iostream>
#include <vector>
using namespace std;

// prototype for function template printVector
template < typename T > void printVector(const vector < T >& integers2);


int main()
{
	const size_t SIZE = 6;  // define array size
	int values[SIZE] = { 1,2,3,4,5,6 }; // initialize values
	vector <int> integers; // create vector of ints

	cout << "\n The initial size of integers is: " << integers.size();
	cout << "\n The initial capacity of integers is: " << integers.capacity();

	// function push_back
	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	cout << "\n The size of integers is :" << integers.size()
		<< "\n The capacity of integers is: " << integers.capacity();
	cout << "\n Output built-in array using pointer notation: ";

	// display array using pointer notation
	for (const int* ptr = begin(values); ptr != end(values); ptr++)
	{
		cout << *ptr;
	}

	cout << "\n Output vector using iterator notation";
	printVector(integers);
	cout << "\n Reversed contents of vector integers";
	for (auto reverseIterator = integers.crbegin();
		reverseIterator != integers.crend();
		++reverseIterator)
		cout << *reverseIterator << ' ';
}

// function template for outputting vector elements
// template <typename T> void printVector(const vector<T> &integers2)
template < typename T > void printVector(const vector< T >& integers2)
{
	// display vector elements using const iterator
	for (auto constIterator = integers2.cbegin();
		constIterator != integers2.cend();
		++constIterator)
		cout << *constIterator<<' ';
}
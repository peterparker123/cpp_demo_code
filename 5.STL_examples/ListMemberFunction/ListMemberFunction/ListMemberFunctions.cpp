// Implementation of List Container in
// Needs to include header <list>
// List provides common member functions of
// all sequence container and also
//  provides other member functions, including splice, push_front, pop_front, remove, remove_if, unique,
// merge, reverse and sort.
// Several of these member functions are list - optimized imple -mentations of the Standard Library algorithms presented in Chapter 16. Both push_front
// and pop_front are also supported by forward_list and deque.Figure 15.13 demonstrates
// several features of class list

#include <iostream>
#include <array>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

// prototype for function
template <typename T> void printList(const list <T>& listRef);

int main()
{
	const size_t SIZE = 4;
	array<int, SIZE> ints = { 2,4,6,8 };
	list<int> values; // create list of ints
	list<int> otherValues; // create list of ints

	// insert items in values
	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);

	cout << "Value Contains ";
	printList(values);

	// insert element of ints into other values
	otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
	cout << "\nAfter insert, othervalues contain: ";
	printList(otherValues);

	// remove othervalues elements and insert at the end of values
	values.splice(values.cend(), otherValues);
	cout << "\nAfter splice, value contains: ";
	printList(values);

	values.sort(); // sort values
	cout << "\nAfter sort, value contains: ";
	printList(values);

	// insert elements of ints into other values
	otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
	otherValues.sort(); // sort the list
	cout << "\nAfter insert and sort, otherValues contains: ";
	printList(otherValues);

	// remove otherValues elements and inset into values in sorted order
	values.merge(otherValues);
	cout << "\nAfter merge:\n values contains: ";
	printList(values);
	cout << "\n  otherValues contains: ";
	printList(otherValues);

	values.pop_front(); // remove elements from front
	values.pop_back(); // remove elements from back
	cout << "\nAfter pop_front and pop_back:\n values contains: ";
	printList(values);

	// swap elements of values and otherValues
	values.swap(otherValues);
	cout << "After swap:\n values contains: ";
	printList(values);

	// replace contents of values with otherValues
	values.assign(otherValues.cbegin(), otherValues.cend());
	printList(values);

	// remove otherValues elements and insert into values in sorted oder
	values.merge(otherValues);
	cout << "\nAfter merge, values contains: ";
	printList(values);

	values.remove(4); // remove all 4's
	cout << "\nAfter remove(4), values contains: ";
	printList(values);
	cout << endl;
}

// printList function template definition
template <typename T> void printList(const list<T>& listRef)
{
	if (listRef.empty()) // list is empty
	{
		cout << "List is empty";
	}
	else
	{
		ostream_iterator<T> output(cout, " ");
		copy(listRef.cbegin(), listRef.cend(), output);
	}
}
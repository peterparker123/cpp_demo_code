// List is a bidirectional iterator
// It is a doubly linked list in C++

#include <iostream>
#include <list>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T> void printList(const list <T>& listRef);

int main()
{
	const size_t SIZE = 4;
	array<int, SIZE> ints = { 2,4,6,8};

	list<int> myList; // create a list of integer
	list<int> otherList;

	// list supports adding elements from front and back
	myList.push_front(2);
	myList.push_front(1);
	myList.push_back(3);
	myList.push_back(4);
	printList(myList);
	// remove elements from list from front and back, by using pop_front() and pop_back
	// myList.pop_back();
	// myList.pop_front();

	cout << endl;

	// remove otherList elements and insert at the end of List
	myList.splice(myList.cend(), otherList);
	cout << "\nAfter splice, my list contains: ";
	printList(myList);


	// insert the array values into otherList
	otherList.insert(otherList.begin(), ints.cbegin(), ints.cend());
	printList(otherList);
	cout << endl;
	// swap the contents of one list to another lit
	/* myList.swap(otherList);
	cout << "After swapping,myList constains ";
	printList(myList);
	

	// assign function replaces the content of one list to another list
	otherList.assign(myList.begin(), myList.end());
	printList(otherList); */



	// merge function would merge the contents of one list into another list
	// in sorted order
	myList.merge(otherList);
	cout << "My List after merging: ";
	printList(myList);


	

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
		cout << endl;
	}
}

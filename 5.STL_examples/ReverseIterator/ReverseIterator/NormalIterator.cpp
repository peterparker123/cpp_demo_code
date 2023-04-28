// A program to demonstrate functioning of a normal iterator
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> myVector = { 4,5,10,9,8 };

	// To access the elements of the vector
	// we would use iterator
	// iterator is a pointer, which allows to traverse a container

	vector<int>::iterator it;

	// begin() stores the pointer of the first element
	// of the container

	for (it = myVector.begin(); it != myVector.end(); it++)
		cout << *it << ' ' ;
}
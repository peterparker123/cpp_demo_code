// Standard Library dequeue class template
#include <iostream>
#include <deque>  // dqueue class-template definition
#include <algorithm> //copy algorithm 
#include <iterator> //ostream_iterator
using namespace std;

int main()
{
	deque <double> values; //create deque of doubles
	ostream_iterator <double> output(cout, " ");

	// insert elements in values
	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "value contains: ";

	// use subscript operator to obtain elements of values
	for (size_t i = 0; i < values.size(); i++)
	{
		cout << values[i] << ' ';
	}

	values.pop_front(); //remove first element
	cout << "\nAfter pop, front values contains: ";
	copy(values.cbegin(), values.cend(), output);

	// use subscript operator to modify element at location 1
	values[1] = 5.4;
	cout << "\nAfter values[1]=5.4, values contains: ";
	copy(values.cbegin(), values.cend(), output);
	cout << endl;



}
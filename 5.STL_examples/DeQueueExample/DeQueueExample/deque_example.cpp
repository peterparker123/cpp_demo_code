// Standard Library DeQue container
#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	deque<int>values;

	ostream_iterator<int>output(cout, " ");

	values.push_front(3);
	values.push_front(4);
	values.push_back(2);

	copy(values.cbegin(), values.cend(), output);
	cout << endl;

	// use subscript operator to obtain elements of values
	for (size_t i = 0; i < values.size(); i++)
	{
		cout << values[i] << ' ';
	}
	cout << endl;
	// remove first element
    values.pop_front();
	copy(values.cbegin(), values.cend(), output);
	cout << endl;

	// use subscript operator to modify element at 1
	values[1] = 6;
	copy(values.cbegin(), values.cend(), output);
	cout << endl;


	return 0;


}
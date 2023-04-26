// Standard Library Set Class Template
#include <iostream>
#include <algorithm>
#include <set>
#include <array>
#include <iterator>

using namespace std;

int main()
{
	const size_t SIZE = 5;
	array<double,SIZE> a = { 2.1, 4.2, 9.5, 2.1, 3.7 };

	// Declare the set
	// As it is a container, the data type must support the comparator object
	// in this case, we are using less than comparator object
	set<double, less<double>> doubleSet(a.begin(), a.end());
	ostream_iterator<double> output(cout, " ");

	cout << "doubleSet contains: ";
	copy(doubleSet.begin(), doubleSet.end(), output);

	// insert 13.8 in doubleSet; insert returns pair in which
	// p.first represents location of 13.8 in doubleSet and
	// p.second represents whether 13.8 was inserted

	auto p = doubleSet.insert(13.8);

	cout << "\n\n"<< * (p.first)
		<< (p.second ? " was " : " was not ") << " inserted ";

	cout << "\ndoubleSet Contains: ";
	copy(doubleSet.begin(), doubleSet.end(), output);

	// insert 9.5 in double set
	p = doubleSet.insert(9.5);
	cout << "\n\n" << *(p.first)
		<< (p.second ? " was " : " was not ") << " inserted ";

	cout << "\ndoubleSet Contains: ";
	copy(doubleSet.begin(), doubleSet.end(), output);
	cout << endl;
	return 0;

}
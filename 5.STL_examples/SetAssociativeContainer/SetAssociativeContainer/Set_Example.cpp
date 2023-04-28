#include <iostream>
#include <set>
#include <iterator>
#include <array>
using namespace std;

int main()
{
	const size_t SIZE = 6;
	array<double, SIZE> a = { 5.2, 6.4, 6.3, 7.5, 8.9,3.1 };

	set<double, less<double>> mySet;

	ostream_iterator<double> output(cout, " ");

	mySet.insert(a.begin(), a.end());
	cout << "The set contains :";
	copy(mySet.begin(), mySet.end(), output);
	cout << endl;

	auto p = mySet.insert(9.5);
	cout << "\n\n "<< * (p.first)
		<< (p.second ? " was " : " was not ") << " inserted"<<endl;
	copy(mySet.begin(), mySet.end(), output);

	// try to insert element which is already part of the set
	p = mySet.insert(7.5);
	cout << "\n\n " << *(p.first)
		<< (p.second ? " was " : " was not ") << " inserted" << endl;
	copy(mySet.begin(), mySet.end(), output);
	


}
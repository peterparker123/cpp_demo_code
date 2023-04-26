#include <iostream>
#include <map> 
using namespace std;
int main()
{
	
	map< int, double, less< int > > pairs;
	// insert eight value_type objects in pairs
	pairs.insert(make_pair(15, 2.7));
	pairs.insert(make_pair(30, 111.11));
	pairs.insert(make_pair(5, 1010.1));
	pairs.insert(make_pair(10, 22.22));
	pairs.insert(make_pair(25, 33.333));
	pairs.insert(make_pair(5, 77.54)); // dup ignored
	pairs.insert(make_pair(20, 9.345));
	pairs.insert(make_pair(15, 99.3)); // dup ignored
	
	cout << "pairs contains:\nKey\tValue\n";
	// walk through elements of pairs
	for (auto mapItem : pairs)
		cout << mapItem.first << '\t' << mapItem.second << '\n';

	pairs[25] = 9999.99; // use subscripting to change value for key 25
	pairs[40] = 8765.43; // use subscripting to insert value for key 40
	cout << "\nAfter subscript operations, pairs contains:\nKey\tValue\n";
	// use const_iterator to walk through elements of pairs
	for (auto mapItem : pairs)
		cout << mapItem.first << '\t' << mapItem.second << '\n';
	cout << endl;
} // end main

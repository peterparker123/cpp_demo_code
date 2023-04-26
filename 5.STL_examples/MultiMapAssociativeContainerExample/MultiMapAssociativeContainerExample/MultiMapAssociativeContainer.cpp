#include <iostream>
#include <map>
using namespace std;

int main()

{
	// In this multimap, the key are ints
	// and the elements are in ascending order

	multimap<int, double, less<int>> pairs;  // create multimap

	// determine the number of key-value pairs with number 15

	cout << "There are currently " << pairs.count(15)
		<< " pairs with key 15 in the multimap\n";
	
	
	// insert two value type object pairs in multimap
	// Creates a pair object, with key as 15 and value as float
	// A multimap can have keys, which are immutable or cannot be changed
	// Strings, Integers can be the keys, but not float, as float does not have
	// a constant value

	pairs.insert(make_pair(15, 2.7));
	pairs.insert(make_pair(15, 99.3));

	cout << "After inserts, there are " << pairs.count(15)
		<< " pairs with key 15\n\n";


	// insert five value_type objects in pairs
	pairs.insert(make_pair(30, 111.11));
	pairs.insert(make_pair(10, 22.22));
	pairs.insert(make_pair(25, 33.333));
	pairs.insert(make_pair(20, 9.345));
	pairs.insert(make_pair(5, 77.54));

	cout << "Multimap pairs contains:\nKey\tValue\n";
	// walk through elements of pairs
	for (auto mapItem : pairs)
		cout << mapItem.first << '\t' << mapItem.second << '\n';

	cout << endl;
	


}
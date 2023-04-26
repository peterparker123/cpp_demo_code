#include <iostream>
#include <vector> //vector template definition
#include <iterator>
using namespace std;

int main()
{
	// Create a definition for vector
	vector<int> myVector;

	// determine the size of vector
	cout <<"Vector size before items are inserted: "<< myVector.size()<<endl;

	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);

	cout<<myVector[myVector.size()-2] << endl;

	cout << myVector.at(4)<<endl;

	cout << "Vector size after the items are inserted: " << myVector.size() << endl;

	// Using iterators to loop through vector
	// auto determiantes the type of the container
	// myVector.begin() points to the reference of the first element of the container
	// 
	//  begin() returns an iterator object of the vector, which is stored inside intIterator
	// iterators are pointers

	for (auto intiterator = myVector.begin(); intiterator < myVector.end(); intiterator++)
	{
		cout << *intiterator << endl;
	}




}
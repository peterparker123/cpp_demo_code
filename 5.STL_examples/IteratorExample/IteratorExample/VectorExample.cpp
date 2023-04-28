// vector example

// Vectors are containers, which does not have fixed size
// They combine the functionality of arrays and lists
// Unlinke arrays, vectors does not have a pre determined size
// It's size gets determined during run time

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// to create vector, we use keyword vector
	vector<int> myVec;
	vector<int> myVec1;

	myVec = { 1,2,3,4,5,6 };
	myVec1 = { 4,7,8,9 };

	cout << "Initial size of the vector: " << myVec.size()<<endl;

	

	ostream_iterator<int>output(cout, " ");
	
	myVec.push_back(7);
	myVec.push_back(8);
	cout << "Size of the vector after inserting value : " << myVec.size()<<endl;

	cout<<myVec.capacity()<<endl;

	// Accessing the elements of vector
	// we can use indexes, as vectors are containers, which allows for direct access of the elements
	cout<<myVec[5]<<endl;

	// finding the element of vector by using at() function
	cout << myVec.at(2) << endl;

	// traversing the vector elements
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << myVec[i] << " ";
	}
	cout << endl;
	// Vectors can also be traversed by using iterators
	// for this, we use begin() and end() functions
	// begins() return the iterator of the first element of the vector element
	// and we need to increment the iterator

	vector<int>::iterator it;
	for (it = myVec.begin(); it< myVec.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	// string vectors
	vector <string> myVecStr;

	myVecStr = { "apple","oranges","banana","mango" };

	vector<string>::iterator stritr;
	for (stritr = myVecStr.begin(); stritr < myVecStr.end(); ++stritr)
	{
		cout << *stritr<<" ";
	}
	cout << endl;

	//  instead of initializing an iterator explicitly, we can use auto keyword
	// which would automatically initialize the type of the iterator 
	for (auto itr = myVec.begin(); itr != myVec.end(); ++itr)
	{
		cout << *itr << " ";
	}
	cout << endl;

	// Vector elements can also be traversed in reverse direction
	// for this, we use rbegin() and rend()

	cout << "Print vectors in reverse order :";
	for (auto rit = myVec.rbegin(); rit != myVec.rend(); ++rit)
	{
		cout << *rit << " ";
	}
	cout << endl;

	// Inserting element in a vector
	// insert modifies the vector in place, so we lose the original vector
	
	myVec.insert(myVec.begin(),4);
	copy(myVec.begin(), myVec.end(), output);
	cout << endl;
	// erase
	myVec.erase(myVec.begin()+3);
	copy(myVec.begin(), myVec.end(), output);
	cout << endl;
	//myVec.clear();
	// copy(myVec.begin(), myVec.end(), output);

	// vectors can also be sorted
	sort(begin(myVecStr), end(myVecStr));
		
	for (auto it = myVecStr.begin(); it < myVecStr.end(); ++it)
		cout << *it<<" ";
	cout << endl; 

	myVec.swap(myVec1);
	copy(myVec.begin(), myVec.end(), output);
	cout << endl;
	copy(myVec1.begin(), myVec1.end(), output);
	
	
}
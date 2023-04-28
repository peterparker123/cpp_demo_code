// Question: Is it possible to traverse a container
// backwards, and read the elements backward, but, without modifying or
// altering the range.

// This is employed by using reverse iterator

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> myVec = { 1,2,3,4,5 };

	vector<int>::reverse_iterator rit;
	
	for (rit = myVec.rbegin(); rit != myVec.rend(); ++rit)
	{
		cout << *rit << ' ';
	}
}
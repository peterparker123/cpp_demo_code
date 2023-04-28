#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<char> myQueue;

	myQueue.push('a');
	myQueue.push('b');
	myQueue.push('c');

	cout << myQueue.size() << endl;

	while (!myQueue.empty())
	{
		cout << myQueue.front() << ' ';
		myQueue.pop();
	}

	// trying to access the elements from an empty queu
	// would result in an error

	cout << myQueue.front();
}
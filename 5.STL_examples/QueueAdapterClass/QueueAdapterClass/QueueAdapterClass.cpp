// Example of Queue adapter class implementation

// Queue is a data structure, that adds elements at back, and removes from the front
// The element which is first in, is also the one to get out
// In order to call the functions of queue adapter class, need to include
// the header library <queue>

// A queue of doubles would be instantiated 
// Function push will be used to add elements to the queue
// Function empty will check if queue is empty or not
// first element of the queue will be read by using front
// pop will be used to remove the element from the queue

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <double> values; // queue with doubles

	// push elements into queue
	values.push(3.2);
	values.push(9.8);
	values.push(5.4);

	cout << "Popping from values: ";

	while (!values.empty())
	{
		
		cout << values.front()<<' '; 
		values.pop();
	}
	cout << endl;
}
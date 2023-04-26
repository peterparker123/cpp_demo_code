// Program to demonstrate implementation of Priority Queue Adapter Class
// A priority_queue is instantiated that stores double values and uses a
// vector as the underlying data structure.
// function push is used  to add elements to the priority_queue.
// The while statement i uses function empty(available in all containers) to determine
// whether the priority_queue is empty .
// function top is used to retrieve the highest - priority element(i.e., the largest
// value) in the priority_queue 
// Function pop removes the highest - priority element in the priority_queue with function pop(available in all adapter classes).

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue <double> priorities; // create priority queue

	// push elements into priorirites
	priorities.push(3.4);
	priorities.push(9.8);
	priorities.push(5.4);

	cout << "Popping from priorities: ";

	while (!priorities.empty())
	{
		cout << priorities.top()<<' '; // view top elements
		priorities.pop();
	}
	cout << endl;
	// it's an error to call queue or priority queue which is empty
	cout << priorities.top();

}
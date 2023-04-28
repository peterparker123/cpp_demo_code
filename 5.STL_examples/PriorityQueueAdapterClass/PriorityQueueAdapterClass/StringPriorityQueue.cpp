// Priority queue with a string

// priority queue to store the character

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	priority_queue<string> priority;



	priority.push("apple");
	priority.push("mango");
	priority.push("banana");
	priority.push("orange");


	cout << "Popping from the priority queue " << endl;
	while (!priority.empty())
	{
		cout << priority.top() << endl;
		priority.pop();
	}

}
// priority queue to store the character

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue<char> priority;

	

	priority.push('a');
	priority.push('b');
	priority.push('c');


	cout << "Popping from the priority queue " << endl;
	while (!priority.empty())
	{
		cout << priority.top() << endl;
		priority.pop();
	}

}
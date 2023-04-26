// Implementation of Stack Adapter class
// In this example, 3 Integer stack would be instantiated
// One stack would be defined using deque container as it's data structure, which 
// is the default method of stack adapter container
// Another stack would be created by using vector of integer
// Third stack would be created by using list of integers

#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

// Prototype of push and pop elements
template <typename T> void pushElements(T &stackRef);

template <typename T> void popElements(T& stackRef);

int main()
{
	// stack with default underlying deque
	stack <int> intDequeStack;

	// stack with underlying vector
	stack <int, vector<int>> intVectorStack;

	// stack with underlying list
	stack<int, list<int>> intListStack;

	// push the value 0-9 into each stack
	cout << "Pushing onto intDequeStack : ";
	pushElements(intDequeStack);

	cout << "\nPushing onto intVectorStack : ";
	pushElements(intVectorStack);

	cout << "\nPushing onto intListStack :";
	pushElements(intListStack);
	cout << endl << endl;

	cout << "Popping from intDequeStack : ";
	popElements(intDequeStack);

	cout << "\nPopping onto intVectorStack : ";
	popElements(intVectorStack);

	cout << "\nPopping onto intListStack :";
	popElements(intListStack);

	cout << endl << endl;
}

// push element on the stack to which &stackRef object refers
template <typename T> void pushElements(T& stackRef)
{
	for (int i = 0; i < 10; i++)
	{
		// push element onto stack
		stackRef.push(i);
		cout << stackRef.top()<<' ';
	}
}

// pop element from stack object to which stackRef refers
template <typename T> void popElements(T & stackRef)
{
	while (!stackRef.empty())
	{
		// view and display the top object
		cout << stackRef.top() << ' ';
		stackRef.pop();
	}
}
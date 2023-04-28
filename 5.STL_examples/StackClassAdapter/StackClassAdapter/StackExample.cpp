#include <iostream>
#include <stack>
#include <deque> // default implementation of stack is by using deque
#include <vector>
#include <list>

using namespace std;

// Prototype for push and pop the element
template <typename T> void pushElements(T& stackRef);
template <typename T> void popElements(T& stackRef);
// Array of characters
char arr[] = { 'a','b','c','d','e','f','g' };

int main()
{
	
	// default underlying implementation of stack is with deque
	stack<char> chDequeStack;

	// stack created with vectors
	stack<char, vector<char>> chVectorStack;

	// stack created with list
	stack<char, list < char >> listVectorStack;

	// push the character a-g onto stack
	cout << "Pushing elements into DequeStack" << endl;
	pushElements(chDequeStack);

	cout << "\nPopping elements from DequeStack" << endl;
	popElements(chDequeStack);

	cout << "\nPushing elements into VectorStack" << endl;
	pushElements(chVectorStack);

	cout << "\nPopping elements from VectorStack" << endl;
	popElements(chVectorStack);
	
	cout << "\nPushing elements into ListStack" << endl;
	pushElements(listVectorStack);

	cout << "\nPopping elements from ListStack" << endl;
	popElements(listVectorStack);


	return 0;


}

// push elements into the stack
template <typename T> void pushElements(T& stackRef)
{
	// push elements into stack
	for (int i = 0; i < size(arr); i++)
	{
		stackRef.push(arr[i]);
		cout << stackRef.top() << " ";
	}
}


// pop elements from the stack
template <typename T> void popElements(T& stackRef)
{
	while (!stackRef.empty())
	{
		cout << stackRef.top() << " ";
		stackRef.pop();
	}
	
}

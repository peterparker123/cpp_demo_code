// Basic C++ program

// iostream header is the basic header file, need to be included
// for every C++ program
// This calls the overloaded operator, cout and cin to 
// take thei input from the standard terminals.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	// in order to display the output to the terminal,
	// we use cout operator.
	// "" quotes stands for strings
	// '' quotes is for character

	cout << 'a';
	cout << endl;
	cout << "Hello World\n";

	char b;


	// in order to work with string, we need to 
	// use the standard string class 
	// strings usually are surrounded by double quotes
	string name;
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Your name is: " << name << endl;
	// find function returns an iterator
	// iterators are poitners, and part of Standard Template Library

	bool find_char = name.find(name, 'r');
	if (find_char)
	{
		cout << "Found r in the name" << endl;
	}

	// replace function, takes the position from where the substring
	// has to be replaced
	// the other string, with which the substring needs to be replaced with

	cout<<"'" << name.replace(10, 6, "hello")<<"'"<<endl;

	// Declraing arrays
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i*5;
	}

	for(int j=0;j<size(arr);j++)
		cout <<"The element at "<<j<<"th position is: "<<arr[j]<<"\n";

	// We can also declare the array of chars and string
	// Size of the array is fixed at the compile time
	char str[10] = {'a','b','c','d','e'};

	// We can also access the elements of arrays using indexed
	cout << str[0] << endl;
	cout << str[1] << endl;

	cout << str[7] << endl;

	cout << size(str);

	for (int i = 0; i < size(str); i++)
	{
		cout << "Element" << i << " in the char is : " << str[i]<<"\n";
	}

	string fruits[] = { "apple","oranges","banana","peach","apricot","grapes" };

	cout << fruits[4];

	return 0;

}
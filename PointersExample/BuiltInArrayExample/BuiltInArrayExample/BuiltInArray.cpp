// This program demonstrates the usage of built-in array
// in string
// We will call some functions, related to built in array

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string colors[] = { "red","blue","violet","purple","yellow" };

	// To get the values from the built-in array, either use subscript notation
	cout << "The first element of the built in array colors is :" << colors[0]<<endl;
	cout << "The last element of the built in array colors is :" << colors[size(colors) - 1]<<endl;

	// Call the reverse function
	reverse(colors, colors + size(colors));

	cout << "Reversed array is : ";
	for (int j = 0; j < size(colors); j++)
	{
		cout << colors[j] << " ";
	}


	cout << endl;

	cout << "The original colors array is: ";

	for (int k = 0; k < size(colors); k++)
	{
		cout << colors[k] << ",";
	}
	cout << endl;

	sort(begin(colors), end(colors));

	// print out the contents of the sorted array
	cout << "Colors array after sorting is: ";
	for (int arr = 0; arr < size(colors); arr++)
	{
		cout << colors[arr] << ",";
	}
	cout << endl;
	
	
}
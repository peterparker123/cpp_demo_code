// Built-in Array Example
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	// to declare built-in array, we specify type arrayName[arraySize]
	// E.g. int c[12] will store 12 elements in element c
	// Array would contain garbage values, as we have not initialized values
	// which must be stored in the built-array

	int c[12];

	// to access the values from built-in array, we specify the [] operator
	// [] does not provide bounds checking
	cout<<c[1]<<endl;

	// We can store values in built arrays, by declaring values at the index location
	c[1] = 9;
	c[2] = 13;

	// We can also initialize an initializer list
	int n[] = { 10,20,30,40,50 };

	// To access values, we can use subscript
	cout <<"Value of 2nd element in array c is : " << c[1] << endl;
	cout << "Value of 3rd element in array n is: " << n[2] << endl;

	// We can also use for loop to print out the values from the built-in array
	// Note that we must need to loop till the size of array is not reached
	for (int i = 0; i < size(n); i++)
	{
		cout << "Element at "<<i << " location in n is "<<n[i]<< " "<<endl;
	}

	// We can also use some standard library functions on built-in arrays, such as reverse
	 reverse(n, n + size(n));
	// Print the reversed array
	 cout << "Reversed array is : ";
	 for (int j = 0; j < size(n); j++)
	 {
		 cout << n[j] << " ";
	}
	 cout << endl;

	 // Built-in array for string
	 string colors[] = { "red","blue","orange","purple","violet" };
	 // Sort the colors array. Use the sort() function
	 
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
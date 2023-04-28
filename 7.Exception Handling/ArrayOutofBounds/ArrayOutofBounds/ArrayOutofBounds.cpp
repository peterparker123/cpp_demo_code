#include <iostream>
#include <stdexcept>
using namespace std;

// A program to show that what happens if elements are added to array more than it's size

int main()
{
	int arr[5] = { 1,2,3,4,5 };

	try
	{
		cout << arr[10] << endl;
		
		throw out_of_range { "array is out of range" };
	}
	catch(const out_of_range &out_of_range){
		cout << " Exception occurred "
			<< out_of_range.what() << endl; // what is a virtual function, defined in the base class stdexcept

	}
}
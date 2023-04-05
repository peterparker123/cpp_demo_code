// Determining the sizeof the built-in array, using sizeof operator
// Return type for built-in array's size is size_t

#include <iostream>
using namespace std;

// function prototype
size_t getSize(double*);

int main()
{
	double numbers[20];
	cout << "The number of bytes in array is: " << sizeof(numbers)<<endl;
	cout << "The number of bytes returned by the getSize is " << getSize(numbers) << endl;

}

size_t getSize(double* ptr)
{
	return sizeof(ptr);
}
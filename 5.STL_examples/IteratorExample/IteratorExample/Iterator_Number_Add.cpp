// The program demonstrates the example of iterator
// In this program, user will input two numbers, which would be added
// The numbers would be read using istream_iterator
// The sum of these two numbers would be displayed using ostream_iterator

#include  <iostream>
#include <iterator> // ostream_iterator and istream_iterator
using namespace std;


int main()
{
	cout << "Enter two numbers: ";

		// create istream iterator for reading int values from cin
		istream_iterator<int> inputInt(cin);

		int number1 = *inputInt; // read int from standard input
		++inputInt; // move iterator to next input value
		int number2 = *inputInt; // read int from standard input 


		// Create ostream iterator for writing int values to cout
		ostream_iterator<int> outputInt(cout);
		cout << "The sum is: ";
		*outputInt = number1 + number2; // output result to cout
		cout << endl;

}

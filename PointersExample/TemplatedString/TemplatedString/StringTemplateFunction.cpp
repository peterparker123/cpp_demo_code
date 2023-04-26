#include <iostream>
#include <string>
using namespace std;


// function to compare two strings
template<typename T> T maxVal(T *val1, T *val2);
void Print();

int main()
{
	// compare two integers
	int a = 50, b = 20;
	cout << maxVal(&a, &b)<<endl;

	// compare two strings
	string str1 = "apple", str2 = "banana";
	cout << maxVal(&str1, &str2)<<endl;


}

template<typename T> T maxVal(T* val1, T* val2)
{
	if (*val1 > *val2)
		return *val1;
	else if (*val2 > *val1)
		return *val2;
	else
		Print();
}

void Print()
{
	cout << "Both values are equal\n";
}
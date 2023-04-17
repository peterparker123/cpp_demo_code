// In this example, we created a pointer a to the parent class Animals. 
// Then by writing a= &c, the pointer ‘a’ started referring to the object c of the class Cats.
// a->sound(); – On calling the function sound() which is present in both the classes by the pointer
// ‘a’, the function of the parent class got called, even if the pointer is referring to the object of the
// class Cats.

#include <iostream>
using namespace std;
class Animals
{
public:
	void sound()
	{
		cout << "Genric animal sound" << endl;
	}
};

// Cats inherits Animal class
class Cats : public Animals
{
public:
	void sound()
	{
		cout << "Cat meow" << endl;
	}
};
int main()
{
	Animals* a;
	Cats c;
	a = &c;
	a->sound(); // early binding
	return 0;
}
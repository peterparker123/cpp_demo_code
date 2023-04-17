// Late Binding Example
// Here the function sound() of the base class is made virtual, thus the compiler now performs late
// binding for this function.Now, the function call of the sound() function will be matched to the
// function definition at runtime.Since the compiler now identifies pointer ‘a’ as referring to the
// object ‘c’ of the derived class Cats, it will call the sound() function of the class Cats.

#include <iostream>
using namespace std;
class Animals
{
public:
	virtual void sound()
	{
		cout << "Genric animal sound" << endl;
	}
};
class Cats : public Animals
{
public:
	void sound()
	{
		cout << "Cats meow" << endl;
	}
};
int main()
{
	Animals* a;
	Cats c; a = &c; a->sound();
	return 0;
}
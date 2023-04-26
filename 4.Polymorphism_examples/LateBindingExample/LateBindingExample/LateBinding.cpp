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
	Animals a;
	Animals* aptr = nullptr;
	aptr = &a;

	// For static binding, we use the object
	// This would call the method of the base class
	// However, in this scenario, because the sound() is virtual
	// the function call associated with an object would be determined during run time
	cout << "\nThis would invoke sound of the animals " << endl;
	aptr->sound();

	// Create Cats object, and a pointer
	Cats c;
	Cats* cptr = nullptr;
	cptr = &c;

	cout << "This would invoke the sound() of the Cats :" << endl;

	cptr->sound();

	// Aim the base class pointer to the derived class
	aptr = &c;

	cout << "In this example, because, the sound() has been declared as virtual in the base class"
		<< "\n the function call with the object would get determined during the run time"
		<< "\n By adding the virtual keyword, it's ensured that the derived class can override the "
		<< "\n behavior of the base class member function, on it's own"
		<< "\n Hence, polymorphism is achieved... " << endl;


	cout << endl;
	aptr->sound();


	cout << "Run the same program again by removing virtual, and we would see that "
		<< "\nDerived class would call the Base Class sound() method ";
	
	
	return 0;
}

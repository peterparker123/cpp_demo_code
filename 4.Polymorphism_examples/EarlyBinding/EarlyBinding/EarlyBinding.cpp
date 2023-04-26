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
 // An example of early binding
// The Cats would inherit the Animal class
// Function sound() behavior for a particualr class would
// get determined during compile time, as there is no way
// that compiler can detect the type of object during run time

	Animals a;


	Animals* aptr = &a;	

	// For static binding, we use the object
	// This would call the method of the base class
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

	cout << "Because, we are calling the functions, by using the objects, even if they are "
		<< " \nbeing referred to as pointer, the Cats class would refer to the base class object"
		<< " \nbecause the type of the object is getting determined at compile time. This type of"
		<< " \nbinding is known as compile time binding, and compiler would have already initialized"
		<< " \nwhich function it needs to call early. There, this would call the Animal sound() method";
	cout << endl;
	aptr->sound();

	return 0;
}

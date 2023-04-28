<<<<<<< HEAD
#include <iostream>
using namespace std;

class CA
{
public:

	CA() { cout << "CA\n"; } // base class constructor
	~CA() { cout << "~CA\n"; } // destructor, with no virtual keyword

};

// do a public inheritance
class CB :public CA
{
public:
	CB() { cout << "CB\n"; } // derived class constructor
	~CB() { cout << "~CB\n"; } // derived class destructor
};

int main()
{

	// Create the object of the derived class on the heap
	// by using new, but, by pointing the base class pointer
	// to the derived class object

	// We are creating the object dynamically
	CA* ptr = new CB;
	

	// because, we have allocated the memory dynamically
	// the destructor for the derived class is bounded at run time
	// because, the object of the derived class is created dynamically

	delete ptr;
	
=======
#include <iostream>
using namespace std;

class CA
{
public:

	CA() { cout << "CA\n"; } // base class constructor
	~CA() { cout << "~CA\n"; } // destructor, with no virtual keyword

};

// do a public inheritance
class CB :public CA
{
public:
	CB() { cout << "CB\n"; } // derived class constructor
	~CB() { cout << "~CB\n"; } // derived class destructor
};

int main()
{

	// Create the object of the derived class on the heap
	// by using new, but, by pointing the base class pointer
	// to the derived class object

	// We are creating the object dynamically
	CA* ptr = new CB;
	

	// because, we have allocated the memory dynamically
	// the destructor for the derived class is bounded at run time
	// because, the object of the derived class is created dynamically

	delete ptr;
	
>>>>>>> 77cb4c8bdc10ead5a57788bf6c67f1e307310c74
}
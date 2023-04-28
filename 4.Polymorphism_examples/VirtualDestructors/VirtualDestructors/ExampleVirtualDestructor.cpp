<<<<<<< HEAD
#include <iostream>
using namespace std;

class CA
{
public:
	CA() { cout << "CA()\n"; }
	virtual ~CA() { cout << "~CA()\n"; }
};

class CB :public CA
{
public:

	CB() { cout << "CB()\n" << endl; }
	virtual ~CB() { cout << "~CB()\n"; }
};

int main()
{
	// aim the base class CA pointer to the derived class object, CB
	// but use the new method to create the object of CB
	// CB cb;

	CA* ptr = new CB;
	delete ptr;
=======
#include <iostream>
using namespace std;

class CA
{
public:
	CA() { cout << "CA()\n"; }
	virtual ~CA() { cout << "~CA()\n"; }
};

class CB :public CA
{
public:

	CB() { cout << "CB()\n" << endl; }
	virtual ~CB() { cout << "~CB()\n"; }
};

int main()
{
	// aim the base class CA pointer to the derived class object, CB
	// but use the new method to create the object of CB
	// CB cb;

	CA* ptr = new CB;
	delete ptr;
>>>>>>> 77cb4c8bdc10ead5a57788bf6c67f1e307310c74
}
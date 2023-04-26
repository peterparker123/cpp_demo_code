//A very  minimal program ,which shows how using a base class ptr
// can be used to point to a derived instance, and then  the base class pointer can be used
// to destroy the derived instance, which would  results in only the base class destructor 
// being called if the destructor in the base class isn't virtual.
//
// If the pointer in main is of type 'CB', then construction and destruction
// looks the same as if virtual destructors were used.
//
// Output without virtual destructors:
// CA
// CB
// ~CA
//
// Output with virtual destructors:
// CA
// CB
// ~CB
// ~CA
// ============================================================================
#include <iostream>
using namespace std;
class CA
{
public:
	CA() { cout << "CA\n"; } // constructor
	virtual ~CA() { cout << "~CA\n"; } // virtual destructor
};
class CB : public CA
{
public:
	CB() { cout << "CB\n"; }
	~CB() { cout << "~CB\n"; }
};
int main()
{
	CA* ptr = new CB;
	delete ptr;
}
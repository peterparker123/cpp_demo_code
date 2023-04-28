// In this program, the destructor is not virtual
// 
// // Output without virtual destructors:
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
	 ~CA() { cout << "~CA\n"; } // non virtual destructor
};
class CB : public CA
{
public: 
	CB() { cout << "CB\n"; } // derived class constructor
	~CB() { cout << "~CB\n"; } // derived class destructor, which is not virtual
};
int main()
{
	// create the instance of the child class CB using the new method
	// and point the base class pointer to the derived class object

	CA* ptr = new CB;
	delete ptr;
	
}
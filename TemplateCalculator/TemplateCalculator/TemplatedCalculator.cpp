// implementation of TemplatedCalculator 
#include <iostream>
#include <stdexcept>
using namespace std;

// We can handle integers, doubles etc
template <class T>
class Calculator
{
public:
	Calculator(const T &num1, const T &num2);
	void add();
	

private:
	T num1, num2;
};

template <class T>
Calculator<T>::Calculator(const T &n1,const T &n2)
{
	num1 = n1;
	num2 = n2;
}



template <class T>
void Calculator<T>::add()
{
	
}



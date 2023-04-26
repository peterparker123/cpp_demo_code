// Integer member function definitions.
#include <iostream>
#include "Integer.h"
using namespace std;

// Integer default constructor
Integer::Integer(int i)
	: value{ i } {
	cout << "Constructor for Integer " << value << endl;
}

// Integer destructor
Integer::~Integer() {
	cout << "Destructor for Integer " << value << endl;
}

// set Integer value
void Integer::setInteger(int i) {
	value = i;
}

// return Integer value
int Integer::getInteger() const {
	return value;
}
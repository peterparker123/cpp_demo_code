// Demonstrating unique_ptr.
#include <iostream>
#include <memory>
using namespace std;

#include "Integer.h"

// use unique_ptr to manipulate Integer object
int main() {
    cout << "Creating a unique_ptr object that points to an Integer\n";

    // "aim" unique_ptr at Integer object                  
    unique_ptr<Integer> ptrToInteger{ make_unique<Integer>(8) };

    cout << "\nUsing the unique_ptr to set the Integer\n";
    ptrToInteger->setInteger(99); // use unique_ptr to set Integer value

    // use unique_ptr to get Integer value
    cout << "Integer after setInteger: " << (*ptrToInteger).getInteger()
        << "\n\nTerminating program" << endl;
}
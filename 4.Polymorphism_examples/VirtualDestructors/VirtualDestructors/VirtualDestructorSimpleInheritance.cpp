// C++ program to show the order of constructor call
// in single inheritance

#include <iostream>
using namespace std;

// base class
class Parent
{
public:

    // base class constructor
    Parent()
    {
        cout << "Inside base class" << endl;
    }

    ~Parent() { cout << "Destructor from Parent class" << endl; }  // add a virtual keyword
};

// sub class
class Child : public Parent
{
public:

    //sub class constructor
    Child()
    {
        cout << "Inside sub class" << endl;
    }

    ~Child() { cout << "Destructor from the Child class " << endl; }
};

// main function
int main() {

    // creating object of sub class
    Child obj;

    return 0;
}
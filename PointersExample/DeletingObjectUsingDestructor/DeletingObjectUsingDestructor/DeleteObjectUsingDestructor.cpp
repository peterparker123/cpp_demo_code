#include <iostream>
#include <cstdlib>
using namespace std;

class A
{
public:
    // deletes the member function 
    // however, the object must be instantiated using the new() operator
    void fun()
    {
        delete this;
    }
};

int main()
{
    /* Following is Valid */
    A* ptr = new A;
    ptr->fun();
    ptr = NULL; // make ptr NULL to make sure that things are not accessed using ptr.
    


    /* And following is Invalid: Undefined Behavior */
    A a;
    a.fun();

   getchar();
   //  getchar();
    return 0;
}
#include <iostream>
#include <new> // bad_alloc class is defined here
using namespace std;

int main() {
    double* ptr[50];

    // aim each ptr[i] at a big block of memory
    
        // allocate memory for ptr[ i ]; new throws bad_alloc on failure
        for (size_t i{ 0 }; i < 50; ++i) {
            ptr[i] = new double[50'000'000] {}; // may throw exception
            cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
        }  
}
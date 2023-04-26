// Example that throws exceptions on 
// attempts to divide by zero.
#include <iostream>
#include "DivideByZeroException.h" // DivideByZeroException class 
using namespace std;

// perform division and throw DivideByZeroException object if 
// divide-by-zero exception occurs
double quotient(int numerator, int denominator) {
    // throw DivideByZeroException if trying to divide by zero
    if (denominator == 0) {
        throw DivideByZeroException{}; // terminate function
    }

    // return division result
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int number1; // user-specified numerator
    int number2; // user-specified denominator

    cout << "Enter two integers (end-of-file to end): ";

    // enable user to enter two integers to divide
    while (cin >> number1 >> number2) {
        // try block contains code that might throw exception     
        // and code that will not execute if an exception occurs
        try {
            double result{ quotient(number1, number2) };
            cout << "The quotient is: " << result << endl;
        }
        catch (const DivideByZeroException& divideByZeroException) {
            cout << "Exception occurred: "
                << divideByZeroException.what() << endl;
        }

        cout << "\nEnter two integers (end-of-file to end): ";
    }

    cout << endl;
}

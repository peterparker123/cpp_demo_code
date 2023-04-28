// Rethrowing an exception.
#include <iostream>
#include <exception>
using namespace std;

// throw, catch and rethrow exception
void throwException() {
    // throw exception and catch it immediately
    try {
        cout << "  Function throwException throws an exception\n";
        throw exception{}; // generate exception
    }
    catch (const exception&) { // handle exception
        cout << "  Exception handled in function throwException"
            << "\n  Function throwException rethrows exception";
        throw; // rethrow exception for further processing
    }

    cout << "This should not print\n";
}

int main() {
    // throw exception
    try {
        cout << "\nmain invokes function throwException\n";
        throwException();
        cout << "This should not print\n";
    }
    catch (const exception&) { // handle exception
        cout << "\n\nException handled in main\n";
    }

    cout << "Program control continues after catch in main\n";
}
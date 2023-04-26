// Program to read from Random Access File
// The istream function read inputs a specified number of bytes from the current position
// in the specified stream into an object.
// In this code, we will read the number of bytes specified by sizeof(ClientData) from the file associated with
// ifstream object inCredit and store the data in the client record.
// Function read requires a first argument of type char* .
// Since & client is of type ClientData*, & client must be cast to char* using the cast operator reinterpret_cast.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "ClientData.h" // ClientData class definition
using namespace std;

void outputLine(ostream&, const ClientData&);   // prototype

int main()
{
    ifstream inCredit("C:\\programming\\C++\\credit.dat",
        ios::in | ios::binary);

    // exit program if ifstream cannot open file
    if (!inCredit) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    } // end if

    cout << left << setw(10) << "Account" << setw(16)
        << "Last Name" << setw(11) << "First Name" << left
        << setw(10) << right << "Balance" << endl;

    ClientData client; // create record

    // read first record from file
    inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));

    // read all records from file
    while (inCredit && !inCredit.eof()) {
        // display record
        if (client.getAccountNumber() != 0)
            outputLine(cout, client);

        // read next from file
        inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    } // end while

    return 0;
} // end main

// display single record
void outputLine(ostream& output, const ClientData& record)
{
    output << left << setw(10) << record.getAccountNumber()
        << setw(16) << record.getLastName()
        << setw(11) << record.getFirstName()
        << setw(10) << setprecision(2) << right << fixed
        << showpoint << record.getBalance() << endl;
} // end function outputLine
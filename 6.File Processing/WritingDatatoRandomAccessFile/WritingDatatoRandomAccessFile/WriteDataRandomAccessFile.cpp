// Program to demonstrate on how to read to Random Access File
// writes data to the file credit.dat and uses the combination of fstream
// functions seekp and write to store data at exact locations in the file.
//Function seekp sets the put file - position pointer to a specific position in the file

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.h"
using namespace std;

int main()
{
	int accountNumber;
	string lastName;
	string firstName;
	double balance;

	fstream outCredit("C:\\programming\\C++\\credits.dat", ios::in | ios::out | ios::binary);

	// exit program if fstream cannot open file
	if (!outCredit)
	{
		cerr << " File could not be opened. " << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Enter account number (1 to 100, 0 to end input)\n?";

	// require use to specify account number
	ClientData client;
	cin >> accountNumber;

	// user enters information, which is copied into file
	while (accountNumber > 0 && accountNumber <= 100)
	{
		// user enters last name, first name and balance
		cout << "Enter lastname, firstname and balance\n?";
		cin >> lastName;
		cin >> firstName;
		cin >> balance;

		// set record accountNumber, lastName, firstName, and balance
		client.setAccountNumber(accountNumber);
		client.setLastName(lastName);
		client.setFirstName(firstName);
		client.setBalance(balance);

		// seek position in file of user-specified  record
		outCredit.seekp((client.getAccountNumber() - 1) * sizeof(ClientData));

		// write user-specified information in file
		outCredit.write(reinterpret_cast<const char*> (&client), sizeof(ClientData));

		// enable user to enter another account
		cout << "Enter account number\n?";
		cin >> accountNumber;
	}
}

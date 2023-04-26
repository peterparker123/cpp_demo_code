#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void outputLine(int, const string&, double); // prototype

int main()
{
	// ifstream constructor opens the file 
	ifstream inClientFile("C:\\programming\\C++\\code\\6.File Processing\\SequentialFileExample\\SequentialFileExample\\clients.txt", ios::in);

	// exit program if ifstream could not open the file
	if (!inClientFile)
	{
		cerr << "File could not be opened " << endl;
		exit(EXIT_FAILURE);
	}

	int account; // the account number
	string name; // the account's owner name
	double balance; // the account balance

	cout << left << setw(10) << "Account" << setw(13)
		<< "Name" << "Balance" << endl << fixed << showpoint;

	// display each record in a file

	// reads a set of data (i.e., a record) from the file. 
	// When the end of file has been reached, the implicit call 
	// to operator void* in the while conditio 
	// returns the null pointer(which converts to the bool value false), 
	// the ifstream destructor closes the file and the program terminates

	while (inClientFile >> account >> name >> balance)
	{
		outputLine(account, name, balance);
	}
}

void outputLine(int account, const string & name, double balance)
	{
		cout << left << setw(10) << account << setw(13) << name
			<< setw(7) << setprecision(2) << right << balance << endl;
}

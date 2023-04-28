#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void outputLine(int, const string&, double); //prototype

int main()
{
	// ifstream constructor opens the file
	ifstream inputFileClient("C:\\programming\\C++\\code\\6.File Processing\\SequentialFileExample\\SequentialFileExample\\sequentialfile.txt", ios::in);

	// exit program if ifstream cannot open the file
	while (!inputFileClient)
	{
		cerr << "File could not be opened " << endl;
		exit(EXIT_FAILURE);
	}

	int account;
	string name;
	double balance;

	cout << left << setw(10) << "Account" << setw(13)
		<< "Name" << "Balance" << endl << fixed << showpoint;

	while (inputFileClient >> account >> name >> balance)
	{
		outputLine(account, name, balance);
	}


}

void outputLine(int account, const string& name, double balance)
{
	cout << left << setw(15) << account << setw(20) << name
		<< setw(15) << setprecision(2) << right << balance << endl;
}


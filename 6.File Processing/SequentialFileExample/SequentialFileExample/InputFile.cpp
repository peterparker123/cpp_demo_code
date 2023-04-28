#include <iostream>
#include <string>
#include <fstream>  // file processing streams
#include <cstdlib>
#include <iomanip>

using namespace std;




int main()
{
	// to open a file, call the ofstream object

	ofstream sequentialFile("sequentialfile.csv", ios::out); // default mode is out

	if (!sequentialFile)
	{
		cerr << "File could not be opened " << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Enter the account, name and balance " << endl
		<< "Enter the end-of-file to end input.\n?";

	int account;
	string name;
	double balance;

	// read account, name and balance from the input, and place them in the file
	while (cin >> account >> name >> balance)
	{
		sequentialFile << account << '\t' << name << '\t' << balance << endl;
		cout << "?";
	}

}

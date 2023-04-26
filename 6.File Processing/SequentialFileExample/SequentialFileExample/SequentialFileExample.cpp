// Create a sequential file
#include <iostream>
#include <string>
#include <fstream>  //contains file stream processing type
#include <cstdlib> //exit function prototype

using namespace std;

int main()
{
	// open the file, by calling ofstream object
	// Takes two arguments passed to the object constructor: filename and the file open mode
	//For an ofstream object, the file-open mode can be either ios::out
	// (the default) to output data to a file or ios::app to append data to the end of a file(without
	// modifying any data already in the file).

	//  creates an ofstream object named outClientFile associated with the file
	//  clients.txt that’s opened for output.The arguments "clients.txt" and ios::out are
	//	passed to the ofstream constructor, which opens the file—this establishes a “line of communication”
	//  with the file

	ofstream outClientFile("clients.txt", ios::out); //default mode of ofstream is out mode

	// creating a file, which already exists, with ios::out truncates the file
	// all the existing data is discarded
	// If specified file does not exist, then the ofstream creates a new file

	// exit program if unable to create file

	// if statement uses the overloaded member function operator! to determine whether the open operation succeeded. 
	// The condition returns a true value if either the 
	// failbit or the badbit  is set for the stream on the open operation
	// on the open operation
	// failbit is generally set by an input operation when the error was
	// related to the internal logic of the operation itself, so other operations 
	// on the stream may be possible.
	// While badbit is generally set when the error involves 
	// the loss of integrity of the stream, which is likely to persist
	// even if a different operation is performed on the stream. 
	// badbit can be checked independently by calling member function bad.
	if (!outClientFile)
	{
		cerr << "File could not be opened " << endl;
		exit(EXIT_FAILURE);
	}

	// Create the structure for our file
	// The combination of account,name and balance would be one record for the file
	cout << "Enter the accound, name and balance" << endl
		<< "Enter end-of-file to end input.\n?";

	int account; // the account number
	string name; // name of the accound holder
	double balance; // the account balance

	// read account , name and balance from cin, then place in the file
	while (cin >> account >> name >> balance)
	{
		outClientFile << account << ' ' << name << ' ' << balance << endl;
		cout << "?";

	}

}
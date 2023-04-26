// Class ClientData definition 
#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include <string>
using namespace std;

class ClientData
{
public:
	// default ClientData constructor
	ClientData(int = 0, string = "", const string = "", double = 0.0);

	// accessor function for accountNumber
	void setAccountNumber(int);
	int getAccountNumber() const;

	// accessor functions for lastName
	void setLastName(const string&);
	string getLastName() const;

	// accessor functions for firstName
	void setFirstName(const string&);
	string getFirstName() const;

	// accessor functions for balance
	void setBalance(double);
	double getBalance() const;

private:
	int accountNumber;
	char lastName[15];
	char firstName[10];
	double balance;

};
#endif // 



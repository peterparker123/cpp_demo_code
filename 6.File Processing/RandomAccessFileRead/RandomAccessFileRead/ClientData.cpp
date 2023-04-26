// Program file to implement the record for the random access file
#include "ClientData.h"
#include <string>
using namespace std;

// default ClientData constructor
ClientData::ClientData(int accountNumberValue,
	string lastNameValue,
	string firstNameValue,
	double balanceValue)

{
	setAccountNumber(accountNumberValue);
	setLastName(lastNameValue);
	setFirstName(firstNameValue);
	setBalance(balanceValue);
}

// get account number value
int ClientData::getAccountNumber() const
{
	return accountNumber;
}

// set account number value
void ClientData::setAccountNumber(int accountNumberValue)
{
	accountNumber = accountNumberValue;
}


// get last-name value
string ClientData::getLastName() const
{
	return lastName;
}

// set last-name value
void ClientData::setLastName(const string& lastNameString)
{
	// copy at most 15 characters from string to last name
	int length = lastNameString.size();
	length = (length < 15 ? length : 14);
	lastNameString.copy(lastName, length);
	lastName[length] = '\0'; //append null value to the lastName
}

// get first-name value
string ClientData::getFirstName() const
{
	return firstName;
}

// set first-name value
void ClientData::setFirstName(const string& firstNameString)
{
	// copy at most 9 characters from string to first name
	int length = firstNameString.size();
	length = (length < 10 ? length : 9);
	firstNameString.copy(firstName, length);
	firstName[length] = '\0'; //append null value to the firstName
}


// get balance value
double ClientData::getBalance() const
{
	return balance;
}

// set balance value
void ClientData::setBalance(double balanceValue)
{
	balance = balanceValue;
}
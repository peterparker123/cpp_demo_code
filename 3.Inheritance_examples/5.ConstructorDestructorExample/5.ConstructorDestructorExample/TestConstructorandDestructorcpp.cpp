#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;

void create(void); 

CreateandDestroy first(1, "(global before main )");

int main()
{
	cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
	CreateandDestroy second(2, "(local automatic in main)");
	static CreateandDestroy third(3, "(local static in main)");

	create(); // call function to create objects

	cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
	
	CreateandDestroy fourth(4, "(local automatic in main)");
}

// function to create objects
void create(void)
{
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
	CreateandDestroy fifth(5, "(local automatic in create)");
	static CreateandDestroy sixth(6, "(local static in create)");
	CreateandDestroy seventh(7, "(local automatic in create)");
	cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}
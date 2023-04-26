#include <string>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

void create(void); // prototype for the function

class CreateandDestroy
{
public:
	CreateandDestroy(int, string); //Constructor
	~CreateandDestroy(); //Destructor

	

private:
	int objectID; //ID number for object
	string message; // message for object
};
#endif // !CREATE_H


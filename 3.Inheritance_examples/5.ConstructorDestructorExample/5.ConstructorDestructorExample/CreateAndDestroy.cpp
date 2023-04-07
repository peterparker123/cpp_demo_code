#include <iostream>
#include "CreateAndDestroy.h"

// constructor sets objects ID and description for message

CreateandDestroy::CreateandDestroy(int ID, string msg):objectID(ID),message(msg)
{
	cout << "Object " << objectID << "   constructor runs   "
		<< message << endl;
} // end constructor

//  destructor
CreateandDestroy::~CreateandDestroy()
{
	cout << (objectID == 1 || objectID == 6 ? "\n" : "");
	cout << "Object " << objectID << " destructor runs  "
		<< message << endl;
}
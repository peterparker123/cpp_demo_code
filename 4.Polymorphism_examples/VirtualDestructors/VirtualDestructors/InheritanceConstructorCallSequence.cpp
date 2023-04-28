<<<<<<< HEAD
#include <iostream>
using namespace std;

// Parent class
class Parent
{
public:
	Parent()
	{
		cout << "Constructor called from  Parent class" << endl;
	}

	~Parent()
	{
		cout << "Destructor called from Parent class" << endl;
	}
};

// Derived class, with public inheritance
class Child :public Parent
{
	// whenever class is inherited, the constructors of the
	// parent class is not inherited, but it is part of the
	// derived class. So, when the object of the child class is created
	// the constructor of the base class, gets created first, and
	// then, the constructor of the derived classes
public:
	Child()
	{
		cout << "Constructor called from Child class" << endl;
	}

	~Child()
	{
		cout << "Destructor called from Child class" << endl;
	}
};

int main()
{
	// Create the child of the derived class
	 Child obj;

	 

	// Create only the instance of the parent class
	//Parent parent;

}

=======
#include <iostream>
using namespace std;

// Parent class
class Parent
{
public:
	Parent()
	{
		cout << "Constructor called from  Parent class" << endl;
	}

	~Parent()
	{
		cout << "Destructor called from Parent class" << endl;
	}
};

// Derived class, with public inheritance
class Child :public Parent
{
	// whenever class is inherited, the constructors of the
	// parent class is not inherited, but it is part of the
	// derived class. So, when the object of the child class is created
	// the constructor of the base class, gets created first, and
	// then, the constructor of the derived classes
public:
	Child()
	{
		cout << "Constructor called from Child class" << endl;
	}

	~Child()
	{
		cout << "Destructor called from Child class" << endl;
	}
};

int main()
{
	// Create the child of the derived class
	 Child obj;

	 

	// Create only the instance of the parent class
	//Parent parent;

}

>>>>>>> 77cb4c8bdc10ead5a57788bf6c67f1e307310c74

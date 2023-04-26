// An object's this pointer isn't part of the object itself. 
// It's not reflected in the result of a sizeof statement on the object. 
// When a nonstatic member function is called for an object, the compiler passes
// the object's address to the function as a hidden argument. For example, the following function call:
//

#include <iostream>
#include <string>
using namespace std;

// This program would return the month entered by user in the
// string month. E.g. if use enters 3, the month would be march
class MyMonth
{
public:
	void setMonth(int);
	string getMonth() const;

private:
	int month;
};

void MyMonth::setMonth(int monthname)
{
	month = monthname;
    // this would contain the memory address of the object 
    cout << this<<endl;
}

string MyMonth::getMonth() const
{
    cout << this << endl;
    switch (month)
    {
    case 1:
        return "January";
        break;
    case 2:
        return "Febrauary";
        break;
    case 3:
        return "March";
        break;
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return "June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August";
        break;
    case 9:
        return "September";
        break;
    case 10:
        return "October";
        break;
    case 11:
        return "November";
        break;

    case 12:
        return "December";
        break;
    }
}

int main()
{
    // instantiate the class
    MyMonth myMonth;

    // An object's this pointer isn't part of the object itself. 
    // It's not reflected in the result of a sizeof statement on the object. 
    // When a nonstatic member function is called for an object, the compiler passes
    // the object's address to the function as a hidden argument. For example, the following function call:
    // myMonth.setMonth(3) can be interpreted as 
    // setMonth(&myMonth, 3)
    // This pointer represents the address of the object, for example &myMonth is the address of the
    // object, which can be accessed using this

    // setMonth and getMonth function, would work with the same current instance of the object
    // by using this method, we can view it's value


    cout << &myMonth<<endl;

    myMonth.setMonth(3);
    cout<<myMonth.getMonth()<<endl;

    myMonth.setMonth(4);
    cout<<myMonth.getMonth()<<endl;

    MyMonth anotherMonth;
    cout << &anotherMonth<<endl;
    anotherMonth.setMonth(6);
    cout << anotherMonth.getMonth() << endl;

    

    
   
}

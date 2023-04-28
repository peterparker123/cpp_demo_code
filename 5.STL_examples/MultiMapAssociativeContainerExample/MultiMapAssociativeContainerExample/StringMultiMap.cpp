// we will use multi map to create multi map of strings

#include <iostream>
#include <map>
#include <array>
#include <iterator>
#include <string>
using namespace std;


int main()
{
	multimap<string, string, less<string>> myMap;

	myMap.insert(make_pair("john", "physics"));
	myMap.insert(make_pair("john", "volleyball"));
	myMap.insert(make_pair("robert", "AI"));
	myMap.insert(make_pair("robert", "video games"));
	myMap.insert(make_pair("julie", "Graphic Designs"));

	for (auto it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout <<"Keys :"<< it->first << "," <<"Values: "<< it->second << endl;
	}


}
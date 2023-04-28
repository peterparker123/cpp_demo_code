#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// Create map
	map<string, string, less<string>> mapStr;


	// The map retains the value which was initialized first
	// as this is ordered, and therefore maintains the insertion order

	// eg, the key "John" already got added once, so compiler sees a message to create
	// a new pair on John. But, John already exists in the map, and therefore, the request
	// to create new pair for John gets dropped.
	mapStr.insert(make_pair("John", "Physics"));
	mapStr.insert(make_pair("John", "Volly Ball")); 
	mapStr.insert(make_pair("Robert", "AI"));
	mapStr.insert(make_pair("Robert", "Video Games"));
	mapStr.insert(make_pair("Michael", "Genomics"));
	mapStr.insert(make_pair("Julia", "Graphic Designs"));

	map<string, string>::iterator p;

	// If a key does not exist , we can insert the key
	mapStr["Anna"] = "Animation";

	// If a key exists, and a new value is assigned, then the key gets updated
	 mapStr["John"] = "Basket Ball";

	 cout <<"John plays basket ball"<< mapStr["John"] << endl;

	 // we need a comparision opreator to do the soring
	 // sorting can either be done on keys or on values

	 sort(mapStr.begin(), mapStr.end());

	 for (auto item : mapStr)
	 {
		 cout << item.first << item.second << endl;
	 }

	/* for (p = mapStr.begin(); p != mapStr.end(); ++p)
	{
		cout << "Keys ->" << p->first << ", " << "Values ->" << p->second << endl;


	}*/



	return 0;
}
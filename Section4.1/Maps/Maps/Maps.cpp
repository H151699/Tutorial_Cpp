#include<iostream>
using namespace std;
#include<map>
#include<string>

int main() {

	map <string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 30;
	ages["Vicky"] = 20;
	 
	ages["Mike"] = 70;  // same key, so the value will be overwriten

	/*
	Add to the map, method 1
	*/
	ages.insert(make_pair("Peter2", 102));


	/*
	Add to the map, method 2
	*/
	ages.insert(pair <string, int>("Peter", 100));






	cout << "...................." << endl;
	// cout << ages["Raj"] << endl;  print out : 30
	cout << ages["Sue"] << endl;

	cout << "...................." << endl;
	
	/*

	*/

	if (ages.find("Vicky12") != ages.end()) {
		
		cout << "Found Vicky" << endl;

	}
	else {
		cout << "Key not found" << endl;
	}


	cout << "...................." << endl;
	/*
	Add to the map, method 2
	*/

	for (map <string, int>::iterator it = ages.begin();
		it != ages.end(); it++) {

		pair<string, int> age = *it; // " *it : thing pointed to by iterator " 

		cout << age.first << " : " << age.second << endl;
	}

	cout << "...................." << endl;
	/*

	*/


	for (map <string, int>::iterator it = ages.begin(); 
										it != ages.end(); it++){

		cout << it->first << ": " << it->second << endl;
	}
	cin.get();
	return 0;
}
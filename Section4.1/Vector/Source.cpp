#include <iostream>
#include <vector>
#include <sstream>


using namespace std;


int main() {

	vector<string> strings; // create a vector <type> name  (presize the vector);

	strings.push_back("one");//add extra strings to vector
	strings.push_back("two");
	strings.push_back("three");

	// strings[3] = "dog";			// set elements in this vector

	// cout << strings[3] << endl;

	// cout << strings.size() << endl; // check number of size in the vectorString ( 5 + 3 (push_back) )

	// Avoid set element in the end f.ek cout << strings[1] << endl;

	for (int i = 0; i < strings.size(); i++) {
	
		cout << strings[i] << endl;
	}


	
	cout << "**************************Test it++ print the sencon one ************************************" << endl;

	vector<string>::iterator it = strings.begin(); // iterator which points the first element in the vector 
	it++;  // this will print out the second el. 
			// it+=2  then will print out the nr 3

	cout << *it << endl; // print out the first el in vector



	cout << "**************************Using iterator ************************************" << endl;

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) { // unitl iterator point to the end;
		cout << *it << endl;
	
	}




	cin.get();
	return 0;
}
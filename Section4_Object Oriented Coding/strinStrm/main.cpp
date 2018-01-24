#include <iostream>
using namespace std;
#include <sstream>

int main() {

	string name = "Bob";
	int age = 32;

	stringstream ss;
	ss << "Name is: ";
	ss << name;

	ss << "Age is: ";
	ss << age;

	cout << ss.str() << endl;

	// string info = "Name: " + name + "; age: " + age;
	// cout << info << endl;



	cin.get();
	return 0;

}

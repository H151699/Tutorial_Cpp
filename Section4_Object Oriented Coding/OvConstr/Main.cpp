#include <iostream>
using namespace std;
#include "Person.h"
#include <sstream>

int main() {

	Person person1;
	Person person2("Bob");
	Person person3("Sue", 35);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	cin.get();
	return 0;
}
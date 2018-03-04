#include "Person.h"


#include <iostream>
#include<sstream>

using namespace std;

int main() {

	Person person;
	Person person1("Bob", 42);

	cout << person.toString() << endl;
	cout << person1.toString() << endl;

	cin.get();
	return 0;

}
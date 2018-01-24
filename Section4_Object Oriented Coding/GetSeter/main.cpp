#include <iostream>
#include "Person.h"
#include <sstream>
using namespace std;

int main() {

	Person person;

	person.setName("Siri");

	
	
	
	cout << person.toString() << endl;

	cout << "Name of person with get method: " << person.getName() << endl;
	


	cin.get();
	return 0;
}



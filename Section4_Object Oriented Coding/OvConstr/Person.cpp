#include "Person.h"
#include <sstream>


Person::Person(){
	name = "undefined";
	age = 0;

	cout << " This is Person1" << endl;

}


Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
	


}

//to String method
string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;
	
	return ss.str();


}

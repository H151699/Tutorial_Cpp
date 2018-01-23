#include "Person.h"


// Constructor
Person::Person(){

	name = "Jianyou";
}

string Person::toString() {
	return "Person's name is: " + name;
}


// set name
void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}






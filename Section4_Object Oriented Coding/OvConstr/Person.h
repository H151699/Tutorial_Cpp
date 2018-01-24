#pragma once



#ifndef PEROSN_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person
{

private:
	string name;
	int age;


public:

	// constructor 1
	Person();
	// constructor 2
	Person(string newName) {
		name = newName;
		age = 0;
	};
	// constructor 3
	Person(string newName, int age);


	string toString();
	
};

#endif // !PEROSN_H_
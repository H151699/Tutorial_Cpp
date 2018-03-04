#include <iostream>
#include<map>
#include<string>
using namespace std;



class Person {

private:
	string name;
	int age;


public:

	// Copy Constructor
	Person(const Person &other) {
		cout << "Copy constructor running !" << endl;
		name = other.name;
		age = other.age;


	}


	// constructor with Nonparameter : default constructor with default parameters
	Person() : name(""), age(0) { }



	// constructor with parameter
	Person(string name, int age) : name(name), age(age) { }



	// print method
	void print() const {

		cout << name << ": " << age << flush;
	}

	bool operator<(const Person &other) const {
	
		return name < other.name;
	
	}

}; // class


int main() {


	// create the map
	map<Person, int>people;

	people[Person("Mike", 40)] = 40;
	people[Person("Mike", 40)] = 80;
	people[Person("Vicky", 30)] = 30;
	people[Person("William", 20)] = 40;
	people[Person("Bob", 10)] = 10;
	people[Person("Emma", 8)] = 8;

	

	// Iterator through the Map
	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {

		cout << it->second << ":  " << flush; // sorted according to the key nr

		it->first.print();

		cout << endl;
	}


	cin.get();
	return 0;

}// main
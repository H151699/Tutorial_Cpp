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
		cout << "Copy constructor running !"<< endl;
		name = other.name;
		age = other.age;
		

	}


	// constructor with Nonparameter : default constructor with default parameters
	Person() : name(""), age(0) { }



	// constructor with parameter
	Person(string name, int age) : name(name), age(age) { }



	// print method
	void print()  {

		cout << name << ": " << age << endl;
	}



}; // class

/*   
int main() {

	// create the map
	map<int, Person>people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("William", 10);

	people.insert(make_pair(55, Person("Bob", 38)));
	people.insert(make_pair(88, Person("Emma", 24)));

	// Iterator through the Map
	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {

		cout << it->first << ": " << flush; // sorted according to the key nr

		it->second.print();
	}


	cin.get();
	return 0;

}// main


*/
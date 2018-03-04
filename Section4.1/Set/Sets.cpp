#include<iostream>
using namespace std;
#include<set>
#include<string>


class Test {

	int id;
	string name;

public:

	// default constructor
	Test() :id(0), name("") {}

	// constructor
	Test(int id, string name) : id(id), name(name) {
	
	}


	void print() const{ 
		cout << id << ": " << name << endl;  // add CONST : in the body of print is not going to change any of the instance variables
	}




	// comparison
	// using Const: Avoid the less an operator to change the object that is comparing 
	// using reference &: Avoid to copy the object when we pass into that stuff.we just wanna a reference to an existing object.
	// the Whole operator is also CONST meaning: it does NOT modify the objects that is being called on either.
	bool operator <(const Test &other)const {

		return name < other.name;
	}


};






int main() {

	set<int> numbers;

	numbers.insert(1);
	numbers.insert(2);
	numbers.insert(5);
	numbers.insert(6);
	numbers.insert(3);
	numbers.insert(4);
	numbers.insert(7);
	numbers.insert(8);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++ ) {
		
		cout << *it << endl; // print out unique value , eventhough theres two values are the same 
	
	}


	cout << endl;
	cout << ".............find(sth)............." << endl;

	set<int>::iterator itFind = numbers.find(2);
	if (itFind != numbers.end()) {
		cout << "Found " << *itFind << endl;
	
	}



	cout << endl;
	cout << ".............count(sth)...return null(false) or sth(true).........." << endl;

	if (numbers.count(8)) {
		cout << "Number found." << endl;
	}




	cout << endl;
	cout << ".............Test.........." << endl;

	set<Test> tests;
	tests.insert(Test(10, "Mike"));
	tests.insert(Test(22, "Emma"));
	tests.insert(Test(28, "Emma"));
	tests.insert(Test(54, "Joe"));
	tests.insert(Test(7, "Sue"));

	for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
	
		it->print();
	}





	cin.get();
	return 0;

}
#include<iostream>
using namespace std;
#include<stack>
#include<queue>
#include<string>



class Test {

private:
	string name;

public:

	//constructor
	Test(string name) :name(name) { }


	// deConstructor
	~Test() {
	//	cout << " Object destroyed" << endl;
	}


	void print() {
		cout << name << endl;
	}
};







int main() {

	// Create STACK
	// LIFO
	// Add to stack
	stack <Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue")); // last added
	
	/*
	* This is invalid code. Object is destroyed.

	Test &test1 = testStack.top();
	testStack.pop();
	testStack.pop();
	test1.print(); // Reference refers to destroyed objects
	
	*/

	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}




	cin.get();
	return 0;

}
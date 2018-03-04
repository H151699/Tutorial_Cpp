#include<iostream>
using namespace std;
#include<queue>
#include<stack>
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

	// Create Queue	
	// FIFO
	// Add to queue



	

	queue <Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue")); // last added

	testQueue.back().print();  // back of the queue
	cout << endl;
	
	while (testQueue.size() > 0) {
		Test &test = testQueue.front(); // return the first one added
		test.print();
		testQueue.pop();
	}




	cin.get();
	return 0;

}
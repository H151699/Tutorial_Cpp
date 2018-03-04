#include <iostream>
#include <string>
using namespace std;


class Test {

private:
	int id;
	string name;

public:
	Test(): id(0), name("") {
	
	}

	Test(int id, string name) : id(id), name(name) {
	
	}

	void print() {
		cout << id << ": " << name << endl;
	}

};

int main() {
	
	Test test1(10, "Jianyou");
	test1.print();

	Test test2(20, "bob");
	test2.print();

	// copy test1 to test2
	test2 = test1;
	test2.print();
	cin.get();
	return 0;
}
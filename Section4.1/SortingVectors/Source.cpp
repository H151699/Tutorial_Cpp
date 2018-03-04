#include<iostream>
using namespace std;

#include<vector>
#include<string>
#include<algorithm>



class Test {


	int id;
	string name;

public:

	//constructor
	Test(int id, string name) : id(0), name("") {}
	Test(int id, string name) : id(id), name(name) { }

	void print() {
		cout << id << ": " << name << endl;
	}


	/*
		bool operator <(const Test& other)const {
		return name < other.name;
	
	} */

	friend bool comp(const Test &a, const Test &b) {
		return a.name < b.name;
	}




};



int main() {


	vector <Test> tests;
	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(8, "John"));
	tests.push_back(Test(7, "Sue"));
	tests.push_back(Test(4, "Hello"));
	tests.push_back(Test(1, "Ne"));

	// Sorting
	sort(tests.begin(), tests.end());


	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();



	cin.get();
	return 0;

}
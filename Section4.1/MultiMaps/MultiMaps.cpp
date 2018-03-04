#include<iostream>
using namespace std;
#include<map>
#include<string>



	/*
	MultiMap let you store values with duplicate keys and if you need to use a map of vector
	
	MultiMap does not have an overloaded array subscript type OPERATOR so we need insert method
	
	*/




int main() {

	multimap <int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(20, "Mike"));
	lookup.insert(make_pair(10, "Mike"));
	lookup.insert(make_pair(5, "Mike"));


	cout << "............begin()..end()......" << endl;

	for (multimap<int, string>::iterator
		it = lookup.begin(); it != lookup.end(); it++) {

		cout << it->first << ": " << it->second << endl;

	}

	cout << ".............find(10)......setRange........." << endl;

	for (multimap<int, string>::iterator
		it = lookup.find(10); it != lookup.end(); it++) {

		cout << it->first << ": " << it->second << endl;

	}


	cout << "...IN C++ 98.........begin()..end().. will simplfied in C++ 11...." << endl;

	pair<multimap<int, string>::iterator, 
		multimap<int, string>::iterator> its = lookup.equal_range(30); 

	for (multimap<int, string>::iterator
		it = its.first; it != its.second; it++) {

		cout << it->first << ": " << it->second << endl;

	}



	cout << endl;
	cout << "......IN C++ 11.........." << endl;

	auto its2 = lookup.equal_range(30);
		

	for (multimap<int, string>::iterator
		it = its2.first; it != its2.second; it++) {

		cout << it->first << ": " << it->second << endl;

	}


	cin.get();
	return 0;
}
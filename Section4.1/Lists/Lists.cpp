#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> numbers;

	// add element to Front of List
	numbers.push_front(0);

	// add element to list
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	list<int> ::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100); // insert a  element at a specific place

	cout << "Element: " <<  *it << endl;


	// remove the element "100"
	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;



	for (list<int> ::iterator it = numbers.begin(); it != numbers.end(); it++) {
		if (*it == 2) {
			numbers.insert(it, 12345); // this will inserted before number 2
		}


		
	}

	cout << " ****second array****" << endl;
	cout << " **** 1 is deleted ****" << endl;

	for (list<int> ::iterator it = numbers.begin(); it != numbers.end();) {
		

		// erase element 1 // 
		if (*it == 1) {
			// umbers.erase(it); // this is to validate iterator
			it = numbers.erase(it); // set the iterator back to somthing actually valid
		}
		else {						// after delete that then point to next
			it++;
		}

	}


	cin.get();
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;


	int capacity = numbers.capacity();
	cout << "capacity: " << capacity << endl;


	for (int i = 0; i < 10000; i++) {
		
		if (numbers.capacity() != capacity) {
			
			// update capacity value to the latest
			capacity = numbers.capacity();

			// output capacity after changeing
			cout << "capacity: " << capacity << endl;
		
		}

		numbers.push_back(i);

	}

	numbers.reserve(1000000); // increase vector of array
	// numbers.resize(100);
	// numbers.clear();
	cout << "number[2]; " << numbers[2] << endl;
	cout << "Size: " << numbers.size() << endl;
	cout << "capacity: " << numbers.capacity() << endl;

	cin.get();
	return 0;
}
#include <iostream>
using namespace std;



void changesth(double &value) {
	value = 123.4;
}





int main() {

	int value1 = 8;
	int &value2 = value1;  // " &value2 " is a reference to value1
							// &valu2 is an another name to value1				
	value2 = 10;


	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	double value = 4.321;
	changesth(value);
	cout << value << endl;



	cin.get();
	return 0;
}
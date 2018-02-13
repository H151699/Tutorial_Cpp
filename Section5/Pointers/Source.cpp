#include <iostream>

using namespace std;

void controll(double *pValue) {

	cout << "2, Value of double in controll:	" << *pValue << endl;
	
	// change value to 10.0
	*pValue = 10.0;
	cout << "3, Value of double in controll:	" << *pValue << endl;

}










int main() {
	int nValue = 8;
	int* pnValue = &nValue;		// declare a pointer named pnValue, which point to a address of nValue;
								// &nValue : address of nValue


	nValue = 9;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;

	cout << "Int value via pointer: " << *pnValue << endl;	// print the value which Pointer(pnValue) pointing to(&nValue).

	cout << "..................................." << endl;

	double dValue = 123.4;
	cout << "1. dValue:  " << dValue << endl;
	controll(&dValue);
	
	cout << "4. dValue:  " << dValue << endl;
	
	cin.get();
	return 0;

}
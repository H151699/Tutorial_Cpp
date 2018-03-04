#include <iostream>
using namespace std;
#include <string>

int main() {

	char text[] = "hello";

	int nChars1 = sizeof(text);

	int nChars = sizeof(text)-1; // Because each char is one bite, size of whole array gives a the number of characters in array of a whole string
								 // number of chars = 5;
	char *pStart = text;	// point to the 1st "h"
	char *pEnd = text + nChars - 1;
	
	cout << "Rmemeber this: nChars = sizeof(text)-1: " << nChars << endl;
	cout << "nChars1 = sizeof(text): " << nChars1 << endl;
	cout << "  "  << endl;
	cout << "pStart: " << pStart << endl;  // print : hello
	cout << "*pStart: " << *pStart << endl; // print: h
	cout << "*pEnd: " << *pEnd << endl;		// pritn: o

	cout << "...reverse...................... " << endl;

	while (pStart < pEnd) {

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;

	}

	cout << text << endl;

	cin.get();
	return 0;
}

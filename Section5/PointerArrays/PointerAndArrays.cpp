#include <iostream>
using namespace std;
#include<string>;


// SECTION 5 Lection 41
// Loop through an array using a pointer, with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array , stopping by comparing two pointers.


int main() {

	string texts[] = { "one", "two", "three" };

	
	
	// cout << sizeof(texts) / sizeof(string) << endl;  // To get the number of elements in the array
		
	// to iterator through
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		
		cout << texts[i] << " " << endl;;
	
	}

	cout << "....................... " << endl;;




	// Using Pointer: 
	string* pTexts = texts;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {

		cout << *pTexts << " " << endl;;
		pTexts++;

	}


	cout << "....................... " << endl;;

	string* pElement = texts;  // Same as: string* pElement = texts[0]; 
							   // point to the First el of array

	string* pEnd = &texts[2];// point to the Last el of array

	while (true) {
		cout << *pElement << " " << flush;
		

		if (pElement == pEnd) {
			break;
		}

		pElement++;
	}



	cin.get();
	return 0;
}

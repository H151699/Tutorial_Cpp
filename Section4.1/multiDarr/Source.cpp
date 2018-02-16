

// 2 d dimensional arr


#include <iostream>
#include<string>
using namespace std;



int main() {


	 // 2 rows, 3 colums  and initialize it
	string animals[2][3] = { 
			{"fox" "dog", "cat" },			//2 rows
			{"mouse", "squirrel", "parrot"}	// 3 colums
	};
	 
	for (int i = 0; i < 2; i++) {  // outArray
		
		for (int j = 0; j < 3; j++) { // innerArray
		
			cout << animals[i][j] << " " << flush;
		}

		cout << endl;
	}



	cin.get();
	return 0;
}
#include <iostream>
#include "Cat.h"
using namespace std;


// Define the contructor
Cat::Cat() {
	cout << "Cat created." << endl;
	happy = true;
}

Cat::~Cat()
{

	cout << "Cat destroyed" << endl;

	
}





void Cat::speak() {


	if (happy) {

		cout << "mao: " << "Miao!" << endl;
	}
	else {
		cout << "bob: " << "Sssssss" << endl;
	}
}




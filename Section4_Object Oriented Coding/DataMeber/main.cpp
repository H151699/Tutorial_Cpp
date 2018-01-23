#include <iostream>

#include "Mao.h"
using namespace std;




int main() {
	
	Mao mao; // creat a -mao-

	//mao.happy = false;
	mao.makeHappy();
	mao.speak();



	Mao bob; // create a new cat named -bob-
	//bob.happy = true;
	bob.makeSad();
	bob.speak();






	cin.get();
	return 0;
}
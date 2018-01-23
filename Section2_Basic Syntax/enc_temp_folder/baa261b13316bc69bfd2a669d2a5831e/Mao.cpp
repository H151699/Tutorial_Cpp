#include "Mao.h"
#include <iostream>
using namespace std;




/*
	Methods of Class
*/



void Mao::speak() {


	if (happy) {
		
		cout << "mao: " << "Miao!" << endl;
	}
	else {
		cout << "bob: " << "Sssssss" << endl;
	}
}

void Mao::makeHappy() {
	happy = true;

}

void Mao::makeSad() {

	happy = false;

}
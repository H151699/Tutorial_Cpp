#include <iostream>
#include<string>
using namespace std;




template<class T> 
void print(T n) {
	cout << "Template version: " << endl;

}


void print(int value) {
	cout << "None-template version: " << value << endl;
}





int main() {
	print<string>("Hello");
	print<int>(5);


	print("Hei there");

	print(6);		// Non template
	print<>(5);   // Template

	cin.get();	
	return 0;
}
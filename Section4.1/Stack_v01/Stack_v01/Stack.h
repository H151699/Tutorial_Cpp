#include <iostream>
#include<stdlib.h>
using namespace std;



class Stack {

private:
	static const int max = 100;
	int arr[max];
	int top;

public:

	// constructor
	Stack(){
		top = -1;
	}

	bool isEmpty();
	bool isFull();
	int pop();
	void push(int x);


};


/**
Created by Andrew Jianyou Day
26.02.2018
*/

#ifndef STACKADT_H_
#define STACKADT_H_
template <class T>
class stackADT {

public:

	// initialize the stack to an empty state
	virtual void initializeStack() = 0;

	// check stack, return true if empty
	virtual bool isEmptyStack() const = 0;

	// return value true if stack is full
	virtual bool isFullStack() const = 0;

	// add new el on the top of stack
	virtual void push(const T&) = 0;

	// return top element of the stack, stack must be exist and not full
	virtual T top() const = 0;

	// remoe top element of  the stack; stack must be exist and not empty
	virtual void pop() = 0;
};



#endif // !STACKADT_H_

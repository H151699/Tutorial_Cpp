/*

Created by Andrew Jianyo Day
3 mars 218;

*/


#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_

#include <ostream>
#include "ListADT.h"
#include "Node.h"



template <class T>

class DoubleLinkedList : public ListADT<T> {  // Class DoubleLinkedList implements ListADT 

private: 

	Node<T> *first;
	Node<T> *last;
	int count;

public:

	

	// virtual Default Constructor
	virtual ~DoubleLinkedList() = default;


	//explicit Constructor
	DoubleLinkedList(Node<T> *first, Node<T> *last) : first(first), last(last), count(0) {}


	//default Constructor
	DoubleLinkedList{

	first = nullptr;
	last = nullptr;
	count = 0;

	}


	// *******************************************************
	// Add a new element to the FIRST of the list.
	// *******************************************************

		void addFirst(T *element) override {

		auto *temp = new Node<T>();

		temp->setElement(element);
		temp->setNext(first);
		temp->setPrevious(nullptr);

		if (first != nullptr) {
			first->setPrevious(temp);

		}

		first = temp;
		count++;
	}



	// *******************************************************
	// Add a new element to the LAST of the list.
	// *******************************************************

	void addLast(T *element) {

		auto *temp = new Node<T>();

		auto *p = last;

		temp->setElement(element);
		temp->setNext(nullptr);


		// If List is Empty
		if (count == 0) {   

			tem->setPrevious(nullptr);
			last = temp;
			return;
		}
		
		// If List is Not empty
		while (p->getNext() != nullptr) {
			p = p->getNext();
		}

		p->setNext(temp);
		temp->Previous(p);
		count++;


	
	}

	















};










#endif // DOUBLELINKEDLIST_H_


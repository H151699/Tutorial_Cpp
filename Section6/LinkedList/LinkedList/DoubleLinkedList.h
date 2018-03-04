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



	// *******************************************************
	// Remove the first element in the list 
	//		 and Return a pointer to the element.
	// *******************************************************
	T *removeFirst() override {
	
		return first->getNext()->setNext(nullptr), first->getElement();

	}
	// *******************************************************
	// Remove the Last element in the list 
	//		 and Return a pointer to the element.
	// *******************************************************
	T *removeLast() override {

		return last->getPrevious().setNext(nullptr), last->getElement();

	}

	
	
	// *******************************************************
	// Return a Pointer to the first occurence 
	//	of the give value in the list 
	// *******************************************************

	T *find(T *element) override{ 
		
		Node<T> *temp = first;

		while (temp != nullptr) {

			if (temp->getElement() == element) {

				return temp->getElement();

			} else {

				temp = temp->getNext();
			}
		}

		return nullptr;

	}



	// *******************************************************
	// Remove the first occurence of the given value in the list
	//		and return a pointer to the element.
	// *******************************************************

	T *remove(T *element) override{
		
		Node<T> *temp = first;		/// point to the first

		while (temp != nullptr) {	/// check the tem(first) not Nullptr
			
			if (temp->getElement() == element) { /// if the firstNode-value == element
				break;
			}

			temp = temp->getNext(); /// if not firstNodeValue != element, then keep search next.

		}

		if (first == nullptr) {
			return nullptr;
		}

		if (temp->getNext() != nullptr) {

			temp->getNext()->sePrivious(temp->getPrevious());
		}

		return temp->getElement();




	}
	// *******************************************************
	// 	Return a pointer to the First node in the list
	// *******************************************************
		
	Node<T> *getFirst() override { 
		
		return first;
	
	}

	// *******************************************************
	// 	Return a pointer to the Last node in the list
	// *******************************************************

	Node *getLast() override {
		return last;
	}


	// *******************************************************
	// 	Return True if the given value is found in the list, 
	//          false otherwise
	// *******************************************************

	bool contains(T *element) override {
		return true;
	}


	// *******************************************************
	// 	Return True if the list is empty, eller false
	// *******************************************************

	bool isEmpty() override {
		return count == 0
	}



	// *******************************************************
	// Return the Number of elements in the List.
	// *******************************************************

	int size() override {
		return count;
	}



	// *******************************************************
	// diPlay
	// *******************************************************

	void display() {
		Node<T> *temp = first;
		while (temp != nullptr) {
			cout << *temp->getElement() << endl;
			temp = temp->getNext();
		}
	}




};










#endif // DOUBLELINKEDLIST_H_


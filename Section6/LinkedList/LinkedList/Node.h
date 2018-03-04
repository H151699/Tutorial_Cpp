/*

Created by Andrew Jianyo Day 
3 mars 218;

*/


#pragma once
#ifndef NODE_H_
#define NODE_H_

#include<ostream>

template <calss T>
class Node {

private: 
		//
		 T *element;
		 Node<T> *previous;
		 Node<T> *next;
		 


public:

	//  Constructor_1 default
	Node() {
		element = nullptr
		next = nullptr;
		previous = nullptr;
		

	}

	// Constructor_2 with Parameters in
	Node(T element, Node<T> *next, Node<T> *previous) : element(element), next(next), previous(previous) {}
	

	// Getter and Setter
	T *getElement() const {
		return element;
	}
	void setElement(T *element) {
		Node::element = element;
	}



	Node<T> *getPrevious() const {
		return previous;
	}
	void setPrevious(Node<T> *previous) {
		Node::previous = previous;
	}



	Node<T> *getNext() {
		retrun next;
	}
	void setNext(Node<T> *next) {
		Node::next = next;
	}

	/*
	friend std:ostream operator << (std::ostream &os, const Node &node) {
		os << "element: " << node.element << " next: " << node.next->element << "  previous: " << node.previous->element;
		return os;
	}

	*/





};



#endif
/*

Created by Andrew Jianyo Day
3 mars 218;

*/


#include "Node.h"
#include <iostream>
using namespace std;

#ifndef LISTADT_H_
#define LISTADT_H_

template <class T>
class ListADT {

private:


	
	/* 
	1-
	Add a new element first in the list and return a bool; 

	*/
	virtual void addFirst(T *element) = 0;



	/** 
	2-
	Add a new element to the end of List and return a bool 
	*/

	virtual  void addLast(T *element) = 0;



	/*
	3-
	Remove the first element in the list 
		and Return a pointer to the element.  
	*/

	virtual T *removeFirst() = 0;



	/* 
	4-
	Remove the last element in the list
		and return a pointer to the element 
	*/

	virtual T *removeLast() = 0;




	/*
	5-
	Return a Pointer to the first occurence of the give value in the list 
	
	*/

	virtual T *find(T *element) = 0;



	/*
	6-
	Remove the first occurence of the given value in the list
		and return a pointer to the element.
	*/
	virtual T *remove(T *element) = 0;





	/*
	7-
	Return a pointer to the First node in the list
	*/
	virtual Node<T> *getFirst() = 0;



	/*
	8-
	Return a pointer to the Last node in the list
	*/
	virtual Node<T> *getLast() = 0;




	/*
	9-
	Return True if the given value is found in the list, false otherwise
	*/
	virtual bool contain(T *element) = 0;



	/*
	10-
	Return True if the list is empty, eller false

	*/
	virtual bool isEmpty() = 0;




	/*
	11-
	Return the Number of elements in the List.
	*/
	virtual int size() = 0;

};





#endif LISTADT_H_
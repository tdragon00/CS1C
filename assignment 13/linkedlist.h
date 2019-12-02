/*
 * linkedlist.h
 *
 *  Created on: Dec 2, 2019
 *      Author: Slickback
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <node.h>
#include <iostream>
using namespace std;


template <typename T>
class List
//linked list of Node objects
{
public:
	List();
	~List();
	void insertNewNode(T);
	// insert new node in order in the list
	void print();
	//prints the contents of the linked list
	Node<T>* search(T);
	//searches for a value in the linked list and returns the point to object that contains that value

private:
	Node<T> *startPtr;
	//stores the pointer of first object in the linked list
	Node<T> *endPtr;
	//stored the pointer of the last object in the linked list
	bool isEmpty();
	//returns true if the list contains no elements
	void insertFront(T);
	//inserts new node before at the front of the list
	void insertEnd(T);
	//inserts new node at the end of the list
};



template <typename T>
List<T>::List()
//creates list with start and end as NULL pointers
{
	startPtr = NULL;
	endPtr = NULL;
}

template <typename T>
List<T>::~List()
{
	if ( !isEmpty() )
		// List is not empty
   {
      Node<T> *currentPtr = startPtr;
      Node<T> *tempPtr;

      while ( currentPtr != 0 )
    	  // delete remaining nodes to prevent memory leaks
      {
         tempPtr = currentPtr;
         currentPtr = currentPtr->nextPtr;
         delete tempPtr;
      }
   }
}

template <typename T>
bool List<T>::isEmpty()
{
	if(startPtr == NULL && endPtr == NULL)
		//if the start pointer and end pointer are NULL then this returns true
		return 1;
	else
		return 0;
}

template <typename T>
void List<T>::insertFront(T dataIn)
{
	if(isEmpty())
		//if the list is empty create first element of the list
	{
		Node<T> * newPtr = new Node<T>(dataIn);
		//creates new node
		startPtr = newPtr;
		//there is only one pointer in the list so front and end are the same
		endPtr = newPtr;
	}else
		//if node(s) exist in list insert additional object before the first
	{
		Node<T> * newPtr = new Node<T>(dataIn);
		newPtr->nextPtr = startPtr;
		//the next pointer of the new node points to the node that was previously first
		startPtr = newPtr;
		//the pointer for the new node is now the starting node
	}
}

template <typename T>
void List<T>::insertEnd(T dataIn)
{
	if(isEmpty())
		//if the list is empty create first element of the list

	{
		Node<T> * newPtr = new Node<T>(dataIn);
		startPtr = newPtr;
		endPtr = newPtr;
	}else
		//if a node exist in the list then insert new node at the end of the list
	{
		Node<T> * newPtr = new Node<T>(dataIn);
		endPtr->nextPtr = newPtr;
		//the current last node's next pointer points to the new node
		endPtr = newPtr;
		//the new node is now the last node in the list
	}
}

template <typename T>
void List<T>::insertNewNode(T dataIn)
//general functionn to insert new node the proper order in the list
{
	if(isEmpty())
		//if there is no nodes in the list simply insert at Front
	{
		insertFront(dataIn);
	}else
	{
		if(dataIn < startPtr->data)
			//if the data of the new object is less than than the data of first node in list insert at beginning
		{
			insertFront(dataIn);
		}
		else if(dataIn >= endPtr->data)
			//if the data of the new object is greater than than the data of last node in list insert at end
		{
			insertEnd(dataIn);
		}
		else
			//the new node is being inserted in order but not at the Front or end
		{
			Node<T> * currentPtr = startPtr;
			Node<T> * newPtr = new Node<T>(dataIn);
			//creates new node
			while(currentPtr != endPtr)
				//runs until the end of the list is reached
			{
				if((newPtr->data < currentPtr->nextPtr->data) && (newPtr->data >= currentPtr->data)) //if the data of the new node is less the data in the next node and greater than the data in the current node, insert after current node
				{
					Node<T> * next = currentPtr->nextPtr;
					currentPtr->nextPtr = newPtr;
					//current nodes next pointer now points to the new node
					newPtr->nextPtr = next;
					//the new nodes next pointer now points the node previously after the current node
					break;
				}
				currentPtr = currentPtr->nextPtr;
				//moves to the next node in the list
			}
		}
	}
}

template <typename T>
void List<T>::print()
{
	if(isEmpty())
	{
		cout << "The list is empty" << endl;

	}else
	{
		Node<T> * currentPtr = startPtr;

		cout << "The contents of the list is: ";
		while(currentPtr != NULL)
			//prints until the end of the list is reached
		{
			cout << currentPtr->data << ' ';
			currentPtr = currentPtr->nextPtr;
			//moves to next node in list
		}
		cout << endl;
	}
}

template <typename T>
Node<T>* List<T>::search(T key)
//search functions that searches for node that contains data equal to the key
{
	Node<T>* nodePtr;
	bool found = false;

	nodePtr = startPtr;

	while((!found) && (nodePtr != NULL))
		//runs through list until data is found within a node or end of list is reached
	{
		if(nodePtr->data == key)
			//if the node's data equals the key then the node has been found
			found = true;
		else
			nodePtr = nodePtr->nextPtr;
		//moves to next node in list
	}
	return nodePtr;
	//returns pointer to the node that contains data equal to key (NULL if not found)
}




#endif /* LINKEDLIST_H_ */

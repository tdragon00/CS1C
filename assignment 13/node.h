

#ifndef NODE_H
#define NODE_H

template <typename T>
class List;

template <typename T>
class Node
//nodes to store
{
	friend class List<T>;

public:
	Node(T);
	T getData();

private:
	T data;
	// data stored in node template
	Node* nextPtr;
	//pointer to the next node in list
};

template <typename T>
Node<T>::Node(T dataIn)
{
	data = dataIn;
	//stores data in node
	nextPtr = 0;
	//initializes pointer to next node to null
}

template <typename T>
T Node<T>::getData()
//access data
{
	return data;
}

#endif

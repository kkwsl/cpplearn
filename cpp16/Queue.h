#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "QueueItem.hpp"
#include <iostream>

template <class T>
class Queue
{
public:
	Queue():head(0),tail(0){}

	Queue(const Queue& q):head(0),tail(0)
	{
		copy_elems(q);
	}

	Queue& operator=(const Queue& rhs);
	friend std::ostream& operator<< <T>(std::ostream&, const Queue<T>&); 

	T& front(){ return head->item; }
	const T& front() const { return head->item; }
	void push(const T&);
	void pop();
	bool empty(){ return head == 0; };

	~Queue()
	{
		destory();
	}

private:
	QueueItem<T>* head, tail;

	void destory();
	void copy_elems(const Queue&);
};












#endif

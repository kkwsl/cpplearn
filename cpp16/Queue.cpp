#include "Queue.h"

template <class T>
void Queue<T>::destory()
{
	while(!empty())
		pop();
}

template <class T>
void Queue<T>::pop()
{
	QueueItem<T>* p = head;
	head = head->next;
	delete p;
}

template <class T>
void Queue<T>::push(const T& item)
{
	QueueItem<T>* p = new QueueItem<T>(item);

	if(empty())
	{
		head = tail = p;
	}
	else
	{
		tail->next = p;
		tail = p;
	}
}

template <class T>
void Queue<T>::copy_elems(const Queue& orig)
{
	for(QueueItem<T>* p = orig.head; p; p = p->next)
	{
		push(p->item);
	}
}

template <class T>
Queue<T>& Queue<T>::operator=(const Queue& rhs)
{
	destory();
	copy_elems(rhs);
	return *this;
}


template <class T>
std::ostream& operator<<(std::ostream& os, const Queue<T>& quque)
{
	os << "<";
	QueueItem<T> *p;
	for(p = queue.head; p; p = p->next)
	{
		os << p->item << " ";
	}
	os << ">";
}









#ifndef _QUEUEITEM_H_
#define _QUEUEITEM_H_

#include "Queue.h"
template <class T> class Queue;

template <class Type>
std::ostream& operator<<(std::ostream&, const Queue<Type>&);

template <class T>
class QueueItem
{
	friend class Queue<T>;
	QueueItem(const T& t):next(0),item(t)
	{}

	friend std::ostream& operator<< <T> (std::ostream&, const Queue<T>&);
	
	QueueItem* next;
	T item;
};

template <class T>
std::ostream& operator<<(std::ostream& os, const QueueItem<T>& item)
{
	os << item.item;
	return os;
}

#endif

#ifndef _QUEUEITEM_H_
#define _QUEUEITEM_H_

#include "Queue.h"

template <class T> class Queue;
template <class T>
class QueueItem
{
	friend class Queue<T>;
	QueueItem(const T& t):next(0),item(t)
	{}

	QueueItem* next;
	T item;
};

#endif

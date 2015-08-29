#include "ListItem.h"
template <class T>
class List
{
public:
	List():head(0), tail(0){}

	void push_back();

	bool empty()
	{
		return head == 0;
	}

private:
	ListItem<T>* head, tail;

}

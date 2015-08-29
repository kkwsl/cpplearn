template <class T> class List;
template <class T>
class ListItem
{
	friend class List<T>;
	ListItem(const T& t):item(t),next(0){}
	ListItem* next;
	T item;
}

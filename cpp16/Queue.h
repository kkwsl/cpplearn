// declare Queue
template <class Type> class Queue;

// declare operator
template <class T>
std::ostream& operator<<(std::ostream&, const Queue<T>&);

template <class Type> class QueueItem
{
    friend class Queue<Type>;
    friend std::ostream& operator<< <Type> (std::ostream&, const Queue<Type>&);

    QueueItem(const Type& t):item(t),next(0){}
    Type item;
    QueueItem* next;
};

template <class Type> class Queue
{
    friend std::ostream& operator<< <Type> (std::ostream&, const Queue&);
public:
    Queue():head(0),tail(0){}
    template <class It>
    Queue(It beg, It end):head(0),tail(0)
    {
        copy_elems(beg, end);
    }

    Queue(const Queue& q):head(0),tail(0)
    { copy_elems(q);}

    Queue& operator=(const Queue&);
    ~Queue(){destroy();}

    template <class Iter> void assign(Iter, Iter);

    Type& front()
    { return head->item; }
    const Type& front() const
    { return head->item; }
    bool empty() const
    { return head == 0; }

    void push(const Type&);
    void pop();



private:
    QueueItem<Type>* head;
    QueueItem<Type>* tail;

    void destroy();
    void copy_elems(const Queue&);

    template <class Iter> void copy_elems(Iter begin, Iter end);
};

#include "Queue.cpp"

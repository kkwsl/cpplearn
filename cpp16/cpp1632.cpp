#include <iostream>
#include "Queue.h"

using std::cout;
using std::endl;

int main()
{
	Queue<int> queue;
	short s = 42;
	int i = 33;
	queue.push(s);
	queue.push(i);

	cout << queue.front() << endl;

	return 0;
}

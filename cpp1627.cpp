#include <iostream>

#include "median.hpp"

using namespace std;

int main()
{
	int ia[] = {1, 3, 7, 4, 3, 7, 0};
	vector<int> vec(ia, ia + sizeof(ia)/sizeof(int));

	int val;
	if(median(vec, val))
	{
		cout << "找到 " << val << endl;
	}

	return 0;
}
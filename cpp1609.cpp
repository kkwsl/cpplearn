/*
	编写行为类似于标准库中 find 算法的模板。你的模板应
	接受一个类型形参，该形参指定函数形参（一对迭代器）
	的类型。使用你的函数在 vector<int> 和 list<string>
	中查找给定值
*/

#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

template <class T, typename V>
T findVal(T t1, T t2, const V& val)
{
	for(; t1 != t2; ++t1)
		if(*t1 == val)
			return t1;
	return t2;
}

int main(int argc, char** argv)
{
	int ia[] = {9, 4, 23, 5, 6, 2};
	vector<int> ivec(ia, ia + sizeof(ia)/sizeof(int));
	int val = 5;
	vector<int>::iterator it = findVal(ivec.begin(), ivec.end(), 15);
	if(it == ivec.end())
		cout << "没有找到" << endl;
	else
		cout << "已找到" << endl;

	list<string> lst;
	lst.push_back("aaa");
	lst.push_back("bbb");
	lst.push_back("ccc");
	lst.push_back("ddd");

	list<string>::iterator lstIt = findVal(lst.begin(), lst.end(), "aaa");
	if(lstIt == lst.end())
		cout << "没有找到" << endl;
	else
		cout << "已找到" << endl;

	return 0;
}
/*
	��д��Ϊ�����ڱ�׼���� find �㷨��ģ�塣���ģ��Ӧ
	����һ�������βΣ����β�ָ�������βΣ�һ�Ե�������
	�����͡�ʹ����ĺ����� vector<int> �� list<string>
	�в��Ҹ���ֵ
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
		cout << "û���ҵ�" << endl;
	else
		cout << "���ҵ�" << endl;

	list<string> lst;
	lst.push_back("aaa");
	lst.push_back("bbb");
	lst.push_back("ccc");
	lst.push_back("ddd");

	list<string>::iterator lstIt = findVal(lst.begin(), lst.end(), "aaa");
	if(lstIt == lst.end())
		cout << "û���ҵ�" << endl;
	else
		cout << "���ҵ�" << endl;

	return 0;
}
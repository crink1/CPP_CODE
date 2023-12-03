#include<iostream>
using namespace std;
#include"Hash_Table.h"
#include"unordered_map.h"
#include"unordered_set.h"

void test_map()
{
	crin::unordered_map<string, string> dict;
	dict.insert(make_pair("sort", "排序"));
	dict.insert(make_pair("string","字符串"));
	dict.insert(make_pair("insert", "插入"));

	for (auto& kv : dict)
	{
		//kv.first += 'x';
		//kv.second += 'x';

		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;

	string arr[] = { "还好", "呵呵","哈哈", "嘻嘻", "哈哈", "还好", "呵呵", "呵呵", "嘻嘻", "还好", "哈哈", "呵呵", "嘻嘻" };
	crin::unordered_map<string, int> count_map;
	for (auto& e : arr)
	{
		count_map[e]++;
	}

	for (auto& kv : count_map)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}


void test_set()
{
	
	crin::unordered_set<int> us;
	us.insert(5);
	us.insert(15);
	us.insert(52);
	us.insert(3);

	crin::unordered_set<int>::iterator it = us.begin();
	while (it != us.end())
	{
		//*it += 5;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : us)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	test_map();
	test_set();
	return 0;
}
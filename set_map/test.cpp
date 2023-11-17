#include<iostream>
#include<vector>
using namespace std;
#include"Myset.h"
#include"Mymap.h"

void test_set()
{
	crin::set<int> s;
	s.insert(4);
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(2);
	s.insert(0);
	s.insert(10);
	s.insert(5);

	crin::set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		//*it += 1;

		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_map()
{
	crin::map<string, string> dict;
	dict.insert(make_pair("sort", "排序"));
	dict.insert(make_pair("sort", "调整"));
	dict.insert(make_pair("left", "左边"));
	dict.insert(make_pair("right", "右边"));

	crin::map<string, string>::iterator it = dict.begin();
	while (it != dict.end())
	{
		// key޸
		//it->first += 'x';
		//it->second += 'y';

		cout << it->first << ":" << it->second << endl;
		++it;
	}
	cout << endl;

	string arr[] = { "芙宁娜", "瑶瑶","芙宁娜", "香菱", "钟离", "香菱", "纳西妲", "雷电将军", "锅巴", "玉桂", "刻晴", "甘雨", "甘雨" };
	crin::map<string, int> countMap;
	/*for (auto& e : arr)
	{
		countMap[e]++;
	}*/

	for (auto& kv : countMap)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}


int main()
{
	//test_set();
	test_map();
	return 0;
}
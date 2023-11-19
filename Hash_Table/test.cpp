#include<iostream>

using namespace std;

#include"Hash_Table.h"
void TestHT1()
{
	crin_open_addres::HashTable<int, int> ht;
	int a[] = { 4,14,24,34,5,7,1 };
	for (auto e : a)
	{
		ht.insert(make_pair(e, e));
	}

	ht.insert(make_pair(3, 3));
	ht.insert(make_pair(3, 3));
	ht.insert(make_pair(-3, -3));
	ht.Print();

	ht.Erase(3);
	ht.Print();

	if (ht.Find(3))
	{
		cout << "3´æÔÚ" << endl;
	}
	else
	{
		cout << "3²»´æÔÚ" << endl;
	}

	ht.insert(make_pair(3, 3));
	ht.insert(make_pair(23, 3));
	ht.Print();
}

void TestHT2()
{
	string arr[] = { "Ïã½¶", "Ìğ¹Ï","Æ»¹û", "Î÷¹Ï", "Æ»¹û", "Î÷¹Ï", "Æ»¹û", "Æ»¹û", "Î÷¹Ï", "Æ»¹û", "Ïã½¶", "Æ»¹û", "Ïã½¶" };
	//HashTable<string, int, HashFuncString> ht;
	crin_open_addres::HashTable<string, int> ht;
	for (auto& e : arr)
	{
		//auto ret = ht.Find(e);
		crin_open_addres::HashData<string, int>* ret = ht.Find(e);
		if (ret)
		{
			ret->_kv.second++;
		}
		else
		{
			ht.insert(make_pair(e, 1));
		}
	}

	ht.Print();

	ht.insert(make_pair("apple", 1));
	ht.insert(make_pair("sort", 1));

	ht.insert(make_pair("abc", 1));
	ht.insert(make_pair("acb", 1));
	ht.insert(make_pair("aad", 1));

	ht.Print();
}




int main()
{
	//TestHT1();
	TestHT2();
	return 0;
}
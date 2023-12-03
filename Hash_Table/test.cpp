#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

#include"Hash_Table.h"
//void TestHT1()
//{
//	crin_open_addres::HashTable<int, int> ht;
//	int a[] = { 4,14,24,34,5,7,1 };
//	for (auto e : a)
//	{
//		ht.insert(make_pair(e, e));
//	}
//
//	ht.insert(make_pair(3, 3));
//	ht.insert(make_pair(3, 3));
//	ht.insert(make_pair(-3, -3));
//	ht.Print();
//
//	ht.Erase(3);
//	ht.Print();
//
//	if (ht.Find(3))
//	{
//		cout << "3存在" << endl;
//	}
//	else
//	{
//		cout << "3不存在" << endl;
//	}
//
//	ht.insert(make_pair(3, 3));
//	ht.insert(make_pair(23, 3));
//	ht.Print();
//}
//
//void TestHT2()
//{
//	string arr[] = { "香蕉", "甜瓜","苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜", "苹果", "香蕉", "苹果", "香蕉" };
//	HashTable<string, int, HashFuncString> ht;
//	crin_open_addres::HashTable<string, int> ht;
//	for (auto& e : arr)
//	{
//		auto ret = ht.Find(e);
//		crin_open_addres::HashData<string, int>* ret = ht.Find(e);
//		if (ret)
//		{
//			ret->_kv.second++;
//		}
//		else
//		{
//			ht.insert(make_pair(e, 1));
//		}
//	}
//
//	ht.Print();
//
//	ht.insert(make_pair("apple", 1));
//	ht.insert(make_pair("sort", 1));
//
//	ht.insert(make_pair("abc", 1));
//	ht.insert(make_pair("acb", 1));
//	ht.insert(make_pair("aad", 1));
//	cout << ht.size() << endl;
//	ht.Print();
//}

//void test3()
//{
//	crin_HB::HashTable<int, int> ht;
//	int a[] = { 4,14,24,34,5,7,1 };
//	for (auto e : a)
//	{
//		ht.insert(make_pair(e, e));
//	}
//	ht.insert(make_pair(13, 13));
//	ht.insert(make_pair(16, 16));
//	ht.insert(make_pair(15, 15));
//	ht.insert(make_pair(17, 17));
//}

void TestHT1()
{
	crin_HB::HashTable<int, int> ht;
	int a[] = { 4,14,24,34,5,7,1,15,25,3 };
	for (auto e : a)
	{
		ht.insert(make_pair(e, e));
	}

	ht.insert(make_pair(13, 13));

	cout << ht.find(4) << endl;
	ht.erase(4);
	cout << ht.find(4) << endl;
}

void TestHT2()
{
	string arr[] = { "香蕉", "甜瓜","苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜", "苹果", "香蕉", "苹果", "香蕉" };
	crin_HB::HashTable<string, int> ht;
	for (auto& e : arr)
	{
		//auto ret = ht.Find(e);
		crin_HB::HashNode<string, int>* ret = ht.find(e);
		if (ret)
		{
			ret->_kv.second++;
		}
		else
		{
			ht.insert(make_pair(e, 1));
		}
	}
}

void TestHT3()
{
	const size_t N = 1000000;

	unordered_set<int> us;
	set<int> s;
	crin_HB::HashTable<int, int> ht;

	vector<int> v;
	v.reserve(N);
	srand(time(0));
	for (size_t i = 0; i < N; ++i)
	{
		//v.push_back(rand()); // N比较大时，重复值比较多
		v.push_back(rand() + i); // 重复值相对少
		//v.push_back(i); // 没有重复，有序
	}

	
	size_t begin1 = clock();
	for (auto e : v)
	{
		s.insert(e);
	}
	size_t end1 = clock();
	cout << "set insert:" << end1 - begin1 << endl;

	size_t begin2 = clock();
	for (auto e : v)
	{
		us.insert(e);
	}
	size_t end2 = clock();
	cout << "unordered_set insert:" << end2 - begin2 << endl;

	size_t begin10 = clock();
	for (auto e : v)
	{
		ht.insert(make_pair(e, e));
	}
	size_t end10 = clock();
	cout << "HashTbale insert:" << end10 - begin10 << endl << endl;


	size_t begin3 = clock();
	for (auto e : v)
	{
		s.find(e);
	}
	size_t end3 = clock();
	cout << "set find:" << end3 - begin3 << endl;

	size_t begin4 = clock();
	for (auto e : v)
	{
		us.find(e);
	}
	size_t end4 = clock();
	cout << "unordered_set find:" << end4 - begin4 << endl;

	size_t begin11 = clock();
	for (auto e : v)
	{
		ht.find(e);
	}
	size_t end11 = clock();
	cout << "HashTable find:" << end11 - begin11 << endl << endl;

	cout << "插入数据个数：" << us.size() << endl << endl;
	ht.Some();

	size_t begin5 = clock();
	for (auto e : v)
	{
		s.erase(e);
	}
	size_t end5 = clock();
	cout << "set erase:" << end5 - begin5 << endl;

	size_t begin6 = clock();
	for (auto e : v)
	{
		us.erase(e);
	}
	size_t end6 = clock();
	cout << "unordered_set erase:" << end6 - begin6 << endl;

	size_t begin12 = clock();
	for (auto e : v)
	{
		ht.erase(e);
	}
	size_t end12 = clock();
	cout << "HashTable Erase:" << end12 - begin12 << endl << endl;
}


int main()
{
	//TestHT1();
	//TestHT2();
	TestHT3();
	
	return 0;
}
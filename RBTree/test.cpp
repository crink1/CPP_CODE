#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include"RBTree.h"
//int main()
//{
//	//int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
//	//int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
//	int a[] = { 790,760,969,270,31,424,377,24,702 };
//	RBTree<int, int> t;
//	for (auto e : a)
//	{
//
//		cout << "Insert:" << e << "->";
//		t.Insert(make_pair(e, e));
//		cout << t.IsBalance() << endl;
//	}
//	t.InOrder();
//
//	cout << t.IsBalance() << endl;
//
//	return 0;
//}


int main()
{
	const int N = 10000000;
	vector<int> v;
	v.reserve(N);
	srand(time(0));

	for (size_t i = 0; i < N; i++)
	{
		v.push_back(rand() + i);
		//cout << v.back() << endl;
	}

	size_t begin2 = clock();
	RBTree<int, int> t;
	for (auto e : v)
	{

		//cout << "Insert:" << e << "->";
		t.Insert(make_pair(e, e));
		//cout << t.IsBalance() << endl;
	}
	size_t end2 = clock();

	cout << "Insert:" << end2 - begin2 << endl;

	cout << t.IsBalance() << endl;
	cout << t.Height() << endl;
	cout << t.Size() << endl;

	size_t begin1 = clock();
	for (auto e : v)
	{
		t.Find(e);
	}

	for (size_t i = 0; i < N; i++)
	{
		t.Find((rand() + i));
	}

	size_t end1 = clock();

	cout << "Find:" << end1 - begin1 << endl;

	return 0;
}
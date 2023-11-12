#include<iostream>
#include<vector>
using namespace std;
#include"AVLTree.h"

//int main()
//{
//	int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
//	AVLTree<int,int> at;
//	for (auto i : a)
//	{
//		if (i == 14)
//		{
//			int x = 0;
//		}
//		at.insert(make_pair(i, i));
//	}
//	at.InOrder();
//	at.IsBalance();
//
//	return 0;
//}
int main()
{
	const int N = 100000;
	vector<int> v;
	v.reserve(N);
	srand(time(0));

	for (size_t i = 0; i < N; i++)
	{
		
		int r = rand();
		
		v.push_back(r);
		//cout << v.back() << endl;
	}

	AVLTree<int, int> t;
	for (auto e : v)
	{
		

		t.insert(make_pair(e, e));
		//cout << "Insert:" << e << "->" << t.IsBalance() << endl;
	}
	cout << t.Hight() << endl;
	cout << t.IsBalance() << endl;

	return 0;
}
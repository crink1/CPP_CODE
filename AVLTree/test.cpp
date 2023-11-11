#include<iostream>
using namespace std;
#include"AVLTree.h"

int main()
{
	int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
	AVLTree<int,int> at;
	for (auto i : a)
	{
		if (i == 14)
		{
			int x = 0;
		}
		at.insert(make_pair(i, i));
	}
	at.InOrder();
	at.IsBalance();

	return 0;
}
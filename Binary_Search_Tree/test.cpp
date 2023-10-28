#include<iostream>
using namespace std;
#include"Binary_Search_Tree.h"
int main()
{
	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
	BST<int> bt;
	for (auto e : a)
	{
		bt.InsertR(e);
	}
	bt.InOrder();

	bt.EraseR(14);
	bt.InOrder();

	bt.EraseR(3);
	bt.InOrder();

	bt.EraseR(8);
	bt.InOrder();

	for (auto e : a)
	{
		bt.EraseR(e);
		bt.InOrder();
	}
	return 0;
}
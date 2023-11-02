#include<iostream>
using namespace std;
#include"Binary_Search_Tree.h"

void TestBSTree()
{
	/*crin::BST<string, string> dict;
	dict.Insert("insert", "²åÈë");
	dict.Insert("erase", "É¾³ý");
	dict.Insert("left", "×ó±ß");
	dict.Insert("string", "×Ö·û´®");

	string str;
	while (cin >> str)
	{
		auto ret = dict.Find(str);
		if (ret)
		{
			cout << str << ":" << ret->_val << endl;
		}
		else
		{
			cout << "µ¥´ÊÆ´Ð´´íÎó" << endl;
		}
	}*/

	string strs[] = { "Æ»¹û", "Î÷¹Ï", "Æ»¹û", "Ó£ÌÒ", "Æ»¹û", "Ó£ÌÒ", "Æ»¹û", "Ó£ÌÒ", "Æ»¹û" };
	// Í³¼ÆË®¹û³öÏÖµÄ´Î
	crin::BST<string, int> countTree;
	for (auto str : strs)
	{
		auto ret = countTree.Find(str);
		if (ret == NULL)
		{
			countTree.Insert(str, 1);
		}
		else
		{
			ret->_val++;
		}
	}
	countTree.InOrder();
}

int main()
{
	TestBSTree();
	/*int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
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
	}*/
	return 0;
}
#include<iostream>
using namespace std;
#include"Binary_Search_Tree.h"

void TestBSTree()
{
	/*crin::BST<string, string> dict;
	dict.Insert("insert", "����");
	dict.Insert("erase", "ɾ��");
	dict.Insert("left", "���");
	dict.Insert("string", "�ַ���");

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
			cout << "����ƴд����" << endl;
		}
	}*/

	string strs[] = { "ƻ��", "����", "ƻ��", "ӣ��", "ƻ��", "ӣ��", "ƻ��", "ӣ��", "ƻ��" };
	// ͳ��ˮ�����ֵĴ�
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
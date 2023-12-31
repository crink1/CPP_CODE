#include<iostream>

using namespace std;
#include"SmartPtr.h"

struct ListNode
{
	int val;
	crin::weak_ptr<ListNode> next;
	crin::weak_ptr<ListNode> prev;
	~ListNode()
	{
		cout << "delete" << endl;
	}
};

void test_shared_ptr()
{
	crin::shared_ptr<ListNode> n1 = new ListNode;
	crin::shared_ptr<ListNode> n2 = new ListNode;
	n1->next = n2;
	n2->prev = n1;
}


int main()
{
	//SmartPtr<int> p(new int(2));

	/*crin::shared_ptr<int> sp(new int(666));

	crin::shared_ptr<int> sp1 = sp;*/

	test_shared_ptr();

	

	return 0;
}
#include<iostream>
#include <vector>
#include<list>
#include<stack>
#include<queue>

using namespace std;

//int main(void)
//
//{
//
//	vector<int>array;
//
//	array.push_back(100);
//
//	array.push_back(300);
//
//	array.push_back(300);
//
//	array.push_back(300);
//
//	array.push_back(300);
//
//	array.push_back(500);
//
//	vector<int>::iterator itor;
//
//	for (itor = array.begin(); itor != array.end(); itor++)
//
//	{
//
//		if (*itor == 300)
//
//		{
//
//			itor = array.erase(itor);
//
//		}
//
//	}
//
//	for (itor = array.begin(); itor != array.end(); itor++)
//
//	{
//
//		cout << *itor << " ";
//
//	}
//
//	return 0;
//
//}

//void main()
//{
//
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(100);
//
//	v.resize(20);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(50);
//
//	v.resize(5);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//}
//
//int main()
//{
//
//	int ar[] = { 1,2,3,4,0,5,6,7,8,9 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	vector<int>::iterator it = v.begin();
//
//	while (it != v.end())
//
//	{
//
//		if (*it != 0)
//
//			cout << *it;
//
//		else
//
//			v.erase(it);
//
//		it++;
//
//	}
//
//	return 0;
//
//}

//void main()
//
//{
//
//	stack<char> S;
//	char x, y;
//	x = 'n'; y = 'g';
//	S.push(x); 
//	S.push('i'); 
//	S.push(y);
//	S.pop(); 
//	S.push('r'); 
//	S.push('t'); 
//	S.push(x);
//	S.pop(); 
//	S.push('s');
//	while (!S.empty())
//	{
//		x = S.top();
//		S.pop();
//		cout << x;
//	};
//	cout << y;
//}
//
//int main()
//
//{
//
//	int array[] = { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9 };
//
//	int n = sizeof(array) / sizeof(int);
//
//	list<int> mylist(array, array + n);
//
//	auto it = mylist.begin();
//
//	while (it != mylist.end())
//
//	{
//
//		if (*it != 0)
//
//			cout << *it << " ";
//
//		else
//
//			it = mylist.erase(it);
//
//		++it;
//
//	}
//
//	return 0;
//
//}

//int main()
//
//{

    /*queue<char> Q;
    char x, y;
    x = 'n'; y = 'g';
    Q.push(x); 
    Q.push('i'); 
    Q.push(y);
    Q.pop(); 
    Q.push('r'); 
    Q.push('t'); 
    Q.push(x);
    Q.pop(); 
    Q.push('s');
    while (!Q.empty())
    {
        x = Q.front();
        Q.pop();
        cout << x;
    };
    cout << y;*/
    //queue.push(tree.root)

    //    while (true)

    //        node = queue.pop()

    //        output(node.value)//输出节点对应数字

    //        if (null == node)

    //            break

    //            for (child_node in node.children)

    //                queue.push(child_node)
      
  /*  list<int> l{ 1,2,3,4,5,6,7,8,9,0 };
    list<int>::reverse_iterator it = l.rbegin();
    cout<<*++it<<endl;
    return 0;*/
//}

//template<typename T>
//void removeDuplicates(list<T>& aList)
//{
//    T curValue;
//    list<T>::iterator cur, p;
//    cur = aList.begin();
//    while (cur != aList.end())
//    {
//        curValue = *cur;
//        //空白行 1
//        p = ++cur;
//        while (p != aList.end())
//        {
//            if (*p == curValue)
//            {
//                //空白行 2
//            }
//            else
//            {
//                p++;
//            }
//        }
//    }
//}
#include<iostream>
#include<list>
#include<vector>
using namespace std;

//void Test()
//{
//    int array1[] = { 1 , 2 , 3 , 4 , 5 };
//    list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));
//
//    // 获取链表中第二个节点
//    auto pos = ++L.begin();
//    cout << *pos << endl;
//    L.insert(pos, 4);
//    // 在pos前插入5个值为5的元素
//    L.insert(pos, 5, 5);
//    // 在pos前插入[v.begin(), v.end)区间中的元素
//    vector<int> v{ 7, 8, 9 };
//    L.insert(pos, v.begin(), v.end());
//    // 删除pos位置上的元素
//    L.erase(pos);
//    // 删除list中[begin, end)区间中的元素，即删除list中的所有元素
//    L.erase(L.begin(), L.end());
//
//}

//void Test()
//{
//    list<int> l{ 1,2,3,4,5,6 };
//    list<int>::iterator it = l.begin();
//    while (it != l.end())
//    {
//        l.erase(it);// erase()函数执行后，it所指向的节点已被删除，因此it无效，在下一次使用it时，必须先给其赋值
//        it++;
//    }
//    
//}
void Test()
{
    list<int> l{ 1,2,3,4,5,6 };
    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        it = l.erase(it);  
    }

}

int main()
{

    Test();
    return 0;
}
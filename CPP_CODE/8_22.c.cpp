#include<iostream>
#include<list>
#include<vector>
using namespace std;

//void Test()
//{
//    int array1[] = { 1 , 2 , 3 , 4 , 5 };
//    list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));
//
//    // ��ȡ�����еڶ����ڵ�
//    auto pos = ++L.begin();
//    cout << *pos << endl;
//    L.insert(pos, 4);
//    // ��posǰ����5��ֵΪ5��Ԫ��
//    L.insert(pos, 5, 5);
//    // ��posǰ����[v.begin(), v.end)�����е�Ԫ��
//    vector<int> v{ 7, 8, 9 };
//    L.insert(pos, v.begin(), v.end());
//    // ɾ��posλ���ϵ�Ԫ��
//    L.erase(pos);
//    // ɾ��list��[begin, end)�����е�Ԫ�أ���ɾ��list�е�����Ԫ��
//    L.erase(L.begin(), L.end());
//
//}

//void Test()
//{
//    list<int> l{ 1,2,3,4,5,6 };
//    list<int>::iterator it = l.begin();
//    while (it != l.end())
//    {
//        l.erase(it);// erase()����ִ�к�it��ָ��Ľڵ��ѱ�ɾ�������it��Ч������һ��ʹ��itʱ�������ȸ��丳ֵ
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
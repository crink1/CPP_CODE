#include<iostream>
using namespace std;
#include <vector>
#include <queue>
#include <functional> // greater�㷨��ͷ�ļ�
//void TestPriorityQueue()
//{
//	
//	vector<int> v{ 3,2,7,6,0,4,1,9,8,5 };
//	priority_queue<int> q1;//Ĭ���Ǵ�ѣ�������ģ�����Ϊless
//	// ���Ҫ����С�ѣ���������ģ���������greater�ȽϷ�ʽ
//	priority_queue<int, vector<int>, greater<int>> q2(v.begin(), v.end());
//}
//
//template<class T, size_t N = 10>
//class array
//{
//private:
//	int arr[N];
//};
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//template<>
//bool Less<int*>(int* left, int* right)
//{
//	return *left < *right;
//}
//int main()
//{
//	cout << Less(1, 2) << endl; // ���ԱȽϣ������ȷ
//	int a = 6;
//	int b = 4;
//	cout << Less(a, b) << endl; // ���ԱȽϣ������ȷ
//	int* p1 = &a;
//	int* p2 = &b;
//	cout << Less(p1, p2) << endl; // ���ԱȽϣ��������
//	return 0;
//}


//template<class T1 , class T2>
//class v
//{
//private:
//	T1 _a;
//	T2 _b;
//};
//
//template<>
//class v<int ,double>
//{
//private:
//	int _a;
//	double _b;
//};
//
//template<class T1, class T2>
//class v
//{
//private:
//	T1 _a;
//	T2 _b;
//};
////ƫ�ػ�
//template<class T>
//class v<T, double>
//{
//private:
//	T _a;
//	double _b;
//};

//template<class T1, class T2>
//class date<T1*, T2*>
//{
//private:
//	T1* _a;
//	T2* _b;
//};
//
//
